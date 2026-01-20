#include "PlayerInputs.h"

#include <PartyJungle/GameInstance/ManagerGameInstance.h>
#include <PartyJungle/Managers/InputManager.h>

#include "PlayerData.h"


void APlayerInputsControllerBase::OnBeginState_Implementation()
{
	for (uint8 InputKeyId {0U}; InputKeyId < static_cast<uint8>(EInputKeys::COUNT); ++InputKeyId)
	{
		for (uint8 TriggerEventId {0U}; TriggerEventId < static_cast<uint8>(ETriggerEvents::COUNT); ++TriggerEventId)
		{
			m_KeyEvents.Add(FInputPair::GetInputId(InputKeyId, TriggerEventId), FEvent_PlayerInputKey());
		}
	}
	
	for (uint8 InputAxisId {0U}; InputAxisId < static_cast<uint8>(EInputAxes::COUNT); ++InputAxisId)
	{
		m_AxisEvents.Add(InputAxisId, FEvent_PlayerInputAxis());
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
	InputManager->BindAxis(PlayerId, EInputAxes::AxisX_Right, this, &APlayerInputsControllerBase::OnAxis_LeftJoystickY);
	InputManager->BindAxis(PlayerId, EInputAxes::AxisY_Left, this, &APlayerInputsControllerBase::OnAxis_RightJoystickX);
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
	for (auto& [Id, AxisEvent] : m_AxisEvents)
	{
		AxisEvent.Clear();
	}
}

FEvent_PlayerInputKey* const APlayerInputsControllerBase::GetInputEvent(EInputKeys a_InputKey, ETriggerEvents a_TriggerEvent)
{
	auto PlayerId {m_PlayerData->GetPlayerId()};
	auto DebugId {FInputPair::GetInputId(a_InputKey, a_TriggerEvent)};
	return &m_KeyEvents[FInputPair::GetInputId(a_InputKey, a_TriggerEvent)];
}

FEvent_PlayerInputAxis* const APlayerInputsControllerBase::GetInputEvent(EInputAxes a_InputAxis)
{
	auto PlayerId {m_PlayerData->GetPlayerId()};
	auto DebugId {static_cast<uint8>(EInputAxes::AxisX_Left)};
	return &m_AxisEvents[static_cast<uint8>(a_InputAxis)];
}

void APlayerInputsControllerBase::OnKeyInput(EInputKeys a_InputKey, ETriggerEvents a_TriggerEvent, int a_PlayerId)
{
	auto PlayerId {m_PlayerData->GetPlayerId()};
	auto DebugId {FInputPair::GetInputId(a_InputKey, a_TriggerEvent)};
	auto DebugInput {m_KeyEvents[FInputPair::GetInputId(a_InputKey, a_TriggerEvent)]};
	m_KeyEvents[FInputPair::GetInputId(a_InputKey, a_TriggerEvent)].Broadcast(a_InputKey, a_TriggerEvent, a_PlayerId);
}

void APlayerInputsControllerBase::OnAxis_LeftJoystickX(float a_Axis)
{
	if (IsValidAxis(a_Axis))
	{
		auto PlayerId {m_PlayerData->GetPlayerId()};
		auto DebugId {static_cast<uint8>(EInputAxes::AxisX_Left)};
		auto DebugInput {m_AxisEvents[static_cast<uint8>(EInputAxes::AxisX_Left)]};
		m_AxisEvents[static_cast<uint8>(EInputAxes::AxisX_Left)].Broadcast(a_Axis, m_PlayerData->GetPlayerId());
	}
}

void APlayerInputsControllerBase::OnAxis_LeftJoystickY(float a_Axis)
{
	if (IsValidAxis(a_Axis))
	{
		m_AxisEvents[static_cast<uint8>(EInputAxes::AxisY_Left)].Broadcast(a_Axis, m_PlayerData->GetPlayerId());
	}
}

void APlayerInputsControllerBase::OnAxis_RightJoystickX(float a_Axis)
{
	if (IsValidAxis(a_Axis))
	{
		m_AxisEvents[static_cast<uint8>(EInputAxes::AxisX_Right)].Broadcast(a_Axis, m_PlayerData->GetPlayerId());
	}
}

void APlayerInputsControllerBase::OnAxis_RightJoystickY(float a_Axis)
{
	if (IsValidAxis(a_Axis))
	{
		m_AxisEvents[static_cast<uint8>(EInputAxes::AxisY_Right)].Broadcast(a_Axis, m_PlayerData->GetPlayerId());
	}
}
