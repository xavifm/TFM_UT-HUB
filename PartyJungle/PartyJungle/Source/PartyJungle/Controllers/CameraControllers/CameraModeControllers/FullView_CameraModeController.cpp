#include "FullView_CameraModeController.h"

#include <PartyJungle/Controllers/PlayersControllers/PlayersControllerBase.h>
#include <PartyJungle/Controllers/PlayersControllers/PlayerInputsControllers/PlayerInputsControllerBase.h>
#include <PartyJungle/GameInstance/ManagerGameInstance.h>
#include <PartyJungle/Managers/InputManager.h>
#include <PartyJungle/Managers/StateManager.h>


AFullView_CameraModeController::AFullView_CameraModeController() :
	ACameraModeControllerBase()
{
	PrimaryActorTick.bCanEverTick = true;
	
	m_CameraMode = ECameraModes::FullView;
}

void AFullView_CameraModeController::ActivateCameraMode()
{
	if (!IsActive())
	{
		auto PlayerCtr {GetGameInstance<UManagerGameInstance>()->GetStateManager()->GetController<APlayersControllerBase>(EGameControllers::Players)};
		auto TargetActor {PlayerCtr->GetMinionById(PlayerCtr->GetCurrentMinionId(), PlayerCtr->GetCurrentPlayerId())};
		SetCameraTarget(TargetActor);
		FollowCameraTarget(m_DistanceToTarget);
	
		SetInputEnabled(true);
	
		m_MoveDirection = FVector::Zero();
	}
	
	Super::ActivateCameraMode();
}

void AFullView_CameraModeController::DeactivateCameraMode()
{
	if (IsActive())
	{
		SetInputEnabled(false);
	}
	
	Super::DeactivateCameraMode();
}

void AFullView_CameraModeController::OnUpdateState_Implementation(float a_DeltaTime)
{
	MoveCamera(m_MoveDirection * m_MoveSpeed, a_DeltaTime);
	m_MoveDirection = FVector::Zero();
}

void AFullView_CameraModeController::OnRightJoystick_X(float a_Axis, int a_PlayerId, bool a_WasActive)
{
	m_MoveDirection.Y = a_Axis;
}

void AFullView_CameraModeController::OnRightJoystick_Y(float a_Axis, int a_PlayerId, bool a_WasActive)
{
	m_MoveDirection.X = -a_Axis;
}

void AFullView_CameraModeController::SetInputEnabled(bool a_Enable)
{
	auto PlayerCtr {GetGameInstance<UManagerGameInstance>()->GetStateManager()->GetController<APlayersControllerBase>(EGameControllers::Players)};
	if (a_Enable)
	{
		for (int PlayerId {0}; PlayerId < PlayerCtr->GetPlayersAmount(); ++PlayerId)
		{
			auto PlayerInputsCtr {PlayerCtr->GetPlayerById(PlayerId).GetInputsController()};
			PlayerInputsCtr->GetInputAxisEvent(EInputAxes::AxisX_Right)->AddUniqueDynamic(this, &AFullView_CameraModeController::OnRightJoystick_X);
			PlayerInputsCtr->GetInputAxisEvent(EInputAxes::AxisY_Right)->AddUniqueDynamic(this, &AFullView_CameraModeController::OnRightJoystick_Y);
		}
	}
	else
	{
		for (int PlayerId {0}; PlayerId < PlayerCtr->GetPlayersAmount(); ++PlayerId)
		{
			auto PlayerInputsCtr {PlayerCtr->GetPlayerById(PlayerId).GetInputsController()};
			PlayerInputsCtr->GetInputAxisEvent(EInputAxes::AxisX_Right)->RemoveDynamic(this, &AFullView_CameraModeController::OnRightJoystick_X);
			PlayerInputsCtr->GetInputAxisEvent(EInputAxes::AxisY_Right)->RemoveDynamic(this, &AFullView_CameraModeController::OnRightJoystick_Y);
		}
	}
}
