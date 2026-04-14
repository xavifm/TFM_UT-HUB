#include "Cinematic_CameraModeController.h"


ACinematic_CameraModeController::ACinematic_CameraModeController() :
	ACameraModeControllerBase()
{
	PrimaryActorTick.bCanEverTick = true;
	
	m_CameraMode = ECameraModes::Cinematic;
}

void ACinematic_CameraModeController::ActivateCameraMode()
{
	if (!IsActive())
	{
		StartCinematic();
	}
	
	Super::ActivateCameraMode();
}

void ACinematic_CameraModeController::StartCinematic()
{
	m_IsPlayingCinematic = true;
	PlayCinematic();
		
	if (m_CinematicEndMode == ECinematicEndMode::Time)
	{
		if (m_EndCinematicTime > 0.0f)
		{
			GetWorld()->GetTimerManager().SetTimer(m_EndCinematicTimer, this, &ACinematic_CameraModeController::EndCinematic, m_EndCinematicTime, false);
		}
		else
		{
			EndCinematic();
		}
	}
}

void ACinematic_CameraModeController::TriggerEvent_CinematicEnd()
{
	EndCinematic();
}

void ACinematic_CameraModeController::EndCinematic()
{
	if (m_CinematicEndMode == ECinematicEndMode::Time)
	{
		GetWorld()->GetTimerManager().ClearTimer(m_EndCinematicTimer);
	}
	
	m_IsPlayingCinematic = false;
	OnCinematicEnd();
}
