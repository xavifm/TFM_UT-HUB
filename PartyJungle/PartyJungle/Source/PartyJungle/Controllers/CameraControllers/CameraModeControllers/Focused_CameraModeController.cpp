#include "Focused_CameraModeController.h"

#include <PartyJungle/Controllers/PlayersControllers/PlayersControllerBase.h>
#include <PartyJungle/GameInstance/ManagerGameInstance.h>
#include <PartyJungle/Managers/StateManager.h>


AFocused_CameraModeController::AFocused_CameraModeController() :
	ACameraModeControllerBase()
{
	PrimaryActorTick.bCanEverTick = true;
	
	m_CameraMode = ECameraModes::Focused;
}

void AFocused_CameraModeController::OnBeginState_Implementation()
{
	Super::OnBeginState_Implementation();
	
	m_InputManager = GetGameInstance<UManagerGameInstance>()->GetInputManager();
}

void AFocused_CameraModeController::OnStart_Implementation()
{
	m_PlayersController = GetGameInstance<UManagerGameInstance>()->GetStateManager()->GetController<APlayersControllerBase>(EGameControllers::Players);
}

void AFocused_CameraModeController::OnExit_Implementation()
{
	
}

void AFocused_CameraModeController::ActivateCameraMode()
{
	if (!IsActive())
	{
		auto CameraTarget {m_PlayersController->GetMinionById(m_PlayersController->GetCurrentMinionId(), m_PlayersController->GetCurrentPlayerId())};
		SetCameraTarget(CameraTarget);
	
		m_PlayersController->GetEvent_PlayerChanged()->AddUniqueDynamic(this, &AFocused_CameraModeController::OnPlayerChanged);
		m_PlayersController->GetEvent_MinionChanged()->AddUniqueDynamic(this, &AFocused_CameraModeController::OnMinionChanged);
	}
	
	Super::ActivateCameraMode();
}

void AFocused_CameraModeController::DeactivateCameraMode()
{
	if (IsActive())
	{
		m_PlayersController->GetEvent_PlayerChanged()->RemoveDynamic(this, &AFocused_CameraModeController::OnPlayerChanged);
		m_PlayersController->GetEvent_MinionChanged()->RemoveDynamic(this, &AFocused_CameraModeController::OnMinionChanged);
	}
	
	Super::DeactivateCameraMode();
}

void AFocused_CameraModeController::OnUpdateState_Implementation(float a_DeltaTime)
{
	if (IsMoveToTargetLerpActive())
	{
		MoveCameraToTargetLerp(m_DistanceToTarget, a_DeltaTime);
	}
	else
	{
		FollowCameraTarget(m_DistanceToTarget);
	}
}

void AFocused_CameraModeController::SetCameraTarget(AActor* const a_CameraTarget)
{
	Super::SetCameraTarget(a_CameraTarget);
	
	StartMoveToTargetLerp(0.2f);
}

void AFocused_CameraModeController::OnPlayerChanged(int a_OldPlayerId, int a_NewPlayerId)
{
	auto TargetActor {m_PlayersController->GetMinionById(m_PlayersController->GetCurrentMinionId(), a_NewPlayerId)};
	SetCameraTarget(TargetActor);
}

void AFocused_CameraModeController::OnMinionChanged(int a_PlayerId, int a_OldMinionId, int a_NewMinionId)
{
	auto TargetActor {m_PlayersController->GetMinionById(a_NewMinionId, a_PlayerId)};
	SetCameraTarget(TargetActor);
}
