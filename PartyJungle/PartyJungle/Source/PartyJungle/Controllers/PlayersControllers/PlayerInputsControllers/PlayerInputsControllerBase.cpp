#include "PlayerInputsControllerBase.h"

#include <PartyJungle/GameInstance/ManagerGameInstance.h>
#include <PartyJungle/Managers/InputManager.h>
#include <PartyJungle/Controllers/PlayersControllers/ControllerAuxs/PlayerData.h>


void APlayerInputsControllerBase::OnBeginState_Implementation()
{
	for (uint8 InputKeyId {0U}; InputKeyId < static_cast<uint8>(EInputKeys::COUNT); ++InputKeyId)
	{
		for (uint8 TriggerEventId {0U}; TriggerEventId < static_cast<uint8>(ETriggerEvents::COUNT); ++TriggerEventId)
		{
			m_KeyEvents.Add(FInputKeyData::GetInputId(InputKeyId, TriggerEventId), FEvent_PlayerInputKey());
		}
	}
	
	for (uint8 InputAxisId {0U}; InputAxisId < static_cast<uint8>(EInputAxes::COUNT); ++InputAxisId)
	{
		m_AxisEvents.Add(InputAxisId, FInputAxisData());
	}
}

void APlayerInputsControllerBase::OnStart_Implementation()
{
	auto InputManager {GetGameInstance<UManagerGameInstance>()->GetInputManager()};
	TArray<int> PlayerId {{m_PlayerData->GetPlayerId()}};
	
	for (auto InputKey : m_KeyMap)
	{
		InputManager->BindInput(PlayerId, InputKey.GetInputKey(), InputKey.GetTriggerEvent(), this, &APlayerInputsControllerBase::OnKeyInput);
	}
	
	InputManager->BindAxis(PlayerId, EInputAxes::AxisX_Left, this, &APlayerInputsControllerBase::OnAxis_LeftJoystickX);
	InputManager->BindAxis(PlayerId, EInputAxes::AxisY_Left, this, &APlayerInputsControllerBase::OnAxis_LeftJoystickY);
	InputManager->BindAxis(PlayerId, EInputAxes::AxisX_Right, this, &APlayerInputsControllerBase::OnAxis_RightJoystickX);
	InputManager->BindAxis(PlayerId, EInputAxes::AxisY_Right, this, &APlayerInputsControllerBase::OnAxis_RightJoystickY);
}

void APlayerInputsControllerBase::OnExit_Implementation()
{
	auto InputManager {GetGameInstance<UManagerGameInstance>()->GetInputManager()};
	TArray<int> PlayerId {{m_PlayerData->GetPlayerId()}};
	
	for (auto& InputKey : m_KeyMap)
	{
		InputManager->UnbindInput(PlayerId, InputKey.GetInputKey(), InputKey.GetTriggerEvent(), this);
	}
	for (auto& [Id, KeyEvent] : m_KeyEvents)
	{
		KeyEvent.Clear();
	}
	
	InputManager->UnbindAxis(PlayerId, EInputAxes::AxisX_Left, this);
	InputManager->UnbindAxis(PlayerId, EInputAxes::AxisX_Right, this);
	InputManager->UnbindAxis(PlayerId, EInputAxes::AxisY_Left, this);
	InputManager->UnbindAxis(PlayerId, EInputAxes::AxisY_Right, this);
	for (auto& [Id, AxisData] : m_AxisEvents)
	{
		AxisData.ClearEvents();
	}
}

FEvent_PlayerInputKey* const APlayerInputsControllerBase::GetInputKeyEvent(EInputKeys a_InputKey, ETriggerEvents a_TriggerEvent)
{
	return &m_KeyEvents[FInputKeyData::GetInputId(a_InputKey, a_TriggerEvent)];
}

FEvent_PlayerInputAxis* const APlayerInputsControllerBase::GetInputAxisEvent(EInputAxes a_InputAxis)
{
	return m_AxisEvents[static_cast<uint8>(a_InputAxis)].GetAxisReceivedEvent();
}

FEvent_PlayerInputAxis* const APlayerInputsControllerBase::GetInputAxisReleasedEvent(EInputAxes a_InputAxis)
{
	return m_AxisEvents[static_cast<uint8>(a_InputAxis)].GetAxisReleasedEvent();
}

void APlayerInputsControllerBase::OnKeyInput(EInputKeys a_InputKey, ETriggerEvents a_TriggerEvent, int a_PlayerId)
{
	if (!m_PlayerInputsEnabled) return;
	
	m_KeyEvents[FInputKeyData::GetInputId(a_InputKey, a_TriggerEvent)].Broadcast(a_InputKey, a_TriggerEvent, a_PlayerId);
}

void APlayerInputsControllerBase::OnAxis_LeftJoystickX(float a_Axis)
{
	OnAxisInput(EInputAxes::AxisX_Left, a_Axis);
}

void APlayerInputsControllerBase::OnAxis_LeftJoystickY(float a_Axis)
{
	OnAxisInput(EInputAxes::AxisY_Left, a_Axis);
}

void APlayerInputsControllerBase::OnAxis_RightJoystickX(float a_Axis)
{
	OnAxisInput(EInputAxes::AxisX_Right, a_Axis);
}

void APlayerInputsControllerBase::OnAxis_RightJoystickY(float a_Axis)
{
	OnAxisInput(EInputAxes::AxisY_Right, a_Axis);
}

bool APlayerInputsControllerBase::IsValidAxis(float a_Axis)
{
	return FMath::Abs(a_Axis) > AXIS_THRESHOLD;
}

void APlayerInputsControllerBase::OnAxisInput(EInputAxes a_AxisId, float a_Axis)
{
	if (!m_PlayerInputsEnabled) return;
	
	auto& AxisData {m_AxisEvents[static_cast<uint8>(a_AxisId)]};
	if (IsValidAxis(a_Axis))
	{
		if (!AxisData.IsAxisActive())
		{
			AxisData.GetAxisReceivedEvent()->Broadcast(a_Axis, m_PlayerData->GetPlayerId(), false);
			AxisData.SetAxisActive(true);
		}
		else
		{
			AxisData.GetAxisReceivedEvent()->Broadcast(a_Axis, m_PlayerData->GetPlayerId(), true);
		}
	}
	else if (AxisData.IsAxisActive())
	{
		AxisData.GetAxisReleasedEvent()->Broadcast(a_Axis, m_PlayerData->GetPlayerId(), true);
		AxisData.SetAxisActive(false);
	}
}
