#include "Default_PlayersController.h"

#include <PartyJungle/Managers/InputManager.h>
#include <PartyJungle/Controllers/PlayersControllers/PlayerInputsControllers/PlayerInputsControllerBase.h>


void ADefault_PlayersController::SetInputsEnabled(bool a_Enable)
{
	if (a_Enable)
	{
		SetAllPlayersInputsEnabled(false);
		SetPlayerInputsEnabled(m_CurrentPlayerId, true);
		
		for (auto& PlayerData : m_Players)
		{
			auto PlayerInputsController {PlayerData.GetInputsController()};
			PlayerInputsController->GetInputAxisEvent(EInputAxes::AxisX_Left)->AddUniqueDynamic(this, &ADefault_PlayersController::OnLeftJoystick_X);
			PlayerInputsController->GetInputKeyEvent(EInputKeys::Button_Up, ETriggerEvents::Pressed)->AddUniqueDynamic(this, &ADefault_PlayersController::ButtonUp_Pressed);
			PlayerInputsController->GetInputKeyEvent(EInputKeys::Button_Down, ETriggerEvents::Pressed)->AddUniqueDynamic(this, &ADefault_PlayersController::ButtonDown_Pressed);
			PlayerInputsController->GetInputKeyEvent(EInputKeys::Button_Left, ETriggerEvents::Pressed)->AddUniqueDynamic(this, &ADefault_PlayersController::ButtonLeft_Pressed);
			PlayerInputsController->GetInputKeyEvent(EInputKeys::Button_Right, ETriggerEvents::Pressed)->AddUniqueDynamic(this, &ADefault_PlayersController::ButtonRight_Pressed);
		}
	}
	else
	{
		for (auto& PlayerData : m_Players)
		{
			auto PlayerInputsController {PlayerData.GetInputsController()};
			PlayerInputsController->GetInputAxisEvent(EInputAxes::AxisX_Left)->RemoveDynamic(this, &ADefault_PlayersController::OnLeftJoystick_X);
		}
	}
}

void ADefault_PlayersController::SetEventsEnabled(bool a_Enable)
{
	if (a_Enable)
	{
		GetEvent_PlayerChanged()->AddUniqueDynamic(this, &ADefault_PlayersController::OnPlayerChanged);
	}
	else
	{
		GetEvent_PlayerChanged()->RemoveDynamic(this, &ADefault_PlayersController::OnPlayerChanged);
	}
}

void ADefault_PlayersController::OnLeftJoystick_X(float a_Axis, int a_PlayerId, bool a_WasActive)
{
	if (!a_WasActive)
	{
		a_Axis > 0.0f ? NextMinion() : PreviousMinion();
	}
}

void ADefault_PlayersController::ButtonUp_Pressed(EInputKeys Key, ETriggerEvents Event, int PlayerId)
{
	
}

void ADefault_PlayersController::ButtonDown_Pressed(EInputKeys Key, ETriggerEvents Event, int PlayerId)
{
	
}

void ADefault_PlayersController::ButtonLeft_Pressed(EInputKeys Key, ETriggerEvents Event, int PlayerId)
{
	
}

void ADefault_PlayersController::ButtonRight_Pressed(EInputKeys Key, ETriggerEvents Event, int PlayerId)
{
	
}

void ADefault_PlayersController::OnPlayerChanged(int a_OldPlayerId, int a_NewPlayerId)
{
	m_Players[a_OldPlayerId].GetInputsController()->SetInputsEnabled(false);
	m_Players[a_NewPlayerId].GetInputsController()->SetInputsEnabled(true);
}
