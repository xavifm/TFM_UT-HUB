#include "CameraModeControllerBase.h"

#include <Camera/CameraActor.h>
#include <Camera/CameraComponent.h>
#include <Kismet/GameplayStatics.h>
#include <PartyJungle/Controllers/PlayersControllers/PlayersControllerBase.h>
#include <PartyJungle/GameInstance/ManagerGameInstance.h>
#include <PartyJungle/GameStates/GameStateData.h>
#include <PartyJungle/Managers/StateManager.h>


void ACameraModeControllerBase::SetCameraTarget(AActor* const a_CameraTarget)
{
	m_CameraTarget = a_CameraTarget;
	
	auto PlayerCtr {GetGameInstance<UManagerGameInstance>()->GetStateManager()->GetController<APlayersControllerBase>(EGameControllers::Players)};
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), PlayerCtr->GetCurrentPlayerId());
	PlayerController->SetViewTargetWithBlend(dynamic_cast<AActor*>(m_CameraActor), 0.f);
}

void ACameraModeControllerBase::OnBeginState_Implementation()
{
	DeactivateCameraMode();
}

void ACameraModeControllerBase::ActivateCameraMode()
{
	m_IsActive = true;
	m_CameraActor->GetCameraComponent()->Activate();
}

void ACameraModeControllerBase::DeactivateCameraMode()
{
	m_IsActive = false;
	m_CameraActor->GetCameraComponent()->Deactivate();
}

void ACameraModeControllerBase::MoveCamera(const FVector& a_CameraSpeed, float a_DeltaTime)
{
	if (m_CameraActor)
	{
		FVector CameraLocation = m_CameraActor->GetActorLocation() + (a_CameraSpeed * a_DeltaTime);
		CameraLocation = FVector(
			FMath::Clamp(CameraLocation.X, m_MinCameraBounds.X, m_MaxCameraBounds.X),
			FMath::Clamp(CameraLocation.Y, m_MinCameraBounds.Y, m_MaxCameraBounds.Y),
			FMath::Clamp(CameraLocation.Z, m_MinCameraBounds.Z, m_MaxCameraBounds.Z)
		);
		m_CameraActor->SetActorLocation(CameraLocation);
	}
}

void ACameraModeControllerBase::StartMoveToTargetLerp(float a_LerpTime)
{
	m_MoveToTargetLerpHandler.Start(m_CameraActor->GetActorLocation(), a_LerpTime);
}

void ACameraModeControllerBase::MoveCameraToTargetLerp(FVector a_TargetDistance, float a_DeltaTime)
{
	if (m_CameraActor && m_CameraTarget)
	{
		FVector TargetLocation = m_CameraTarget->GetActorLocation() + a_TargetDistance;
		TargetLocation = FVector(
			FMath::Clamp(TargetLocation.X, m_MinCameraBounds.X, m_MaxCameraBounds.X),
			FMath::Clamp(TargetLocation.Y, m_MinCameraBounds.Y, m_MaxCameraBounds.Y),
			FMath::Clamp(TargetLocation.Z, m_MinCameraBounds.Z, m_MaxCameraBounds.Z)
		);
		
		m_MoveToTargetLerpHandler.UpdateTargetValue(TargetLocation);
		m_MoveToTargetLerpHandler.Update(a_DeltaTime);
		
		m_CameraActor->SetActorLocation(m_MoveToTargetLerpHandler.GetValue());
	}
}

void ACameraModeControllerBase::FollowCameraTarget(FVector a_TargetDistance)
{
	FVector CameraLocation = m_CameraTarget->GetActorLocation() + a_TargetDistance;
	CameraLocation = FVector(
		FMath::Clamp(CameraLocation.X, m_MinCameraBounds.X, m_MaxCameraBounds.X),
		FMath::Clamp(CameraLocation.Y, m_MinCameraBounds.Y, m_MaxCameraBounds.Y),
		FMath::Clamp(CameraLocation.Z, m_MinCameraBounds.Z, m_MaxCameraBounds.Z)
	);
	m_CameraActor->SetActorLocation(CameraLocation);
}
