#include "CameraControllerBase.h"

#include <PartyJungle/Controllers/CameraControllers/CameraModeControllers/CameraModeControllerBase.h>


void ACameraControllerBase::OnBeginState_Implementation()
{
	for (auto& [CameraId, CameraData] : m_Cameras)
	{
		m_CameraModes.Add(static_cast<uint8>(CameraId), CameraData);
	}
	
	for (auto [CameraId, CameraMode] : m_CameraModes)
	{
		CameraMode->OnBeginState();
	}
}

void ACameraControllerBase::OnStart_Implementation()
{
	for (auto [CameraId, CameraMode] : m_CameraModes)
	{
		CameraMode->OnStart();
	}
	
	GetCurrentCameraData()->ActivateCameraMode();
}

void ACameraControllerBase::OnExit_Implementation()
{
	GetCurrentCameraData()->DeactivateCameraMode();
	
	for (auto [CameraId, CameraMode] : m_CameraModes)
	{
		CameraMode->OnExit();
	}
}

bool ACameraControllerBase::CanExitController_Implementation()
{
	return CanChangeCameraMode();
}

ECameraModes ACameraControllerBase::GetCameraMode() const
{
	return m_CurrentCameraMode;
}

void ACameraControllerBase::SetCameraMode(const ECameraModes a_CameraMode, const float a_ExitDelay, const float a_EnterDelay)
{
	if (CanChangeCameraMode())
	{
		m_CanChangeCameraMode = false;
		m_CameraModeChangeData = FCameraModeChangeData(a_CameraMode, a_ExitDelay, a_EnterDelay);
	
		ExitCameraCinematic();
		if (a_ExitDelay > 0.0f)
		{
			GetWorld()->GetTimerManager().SetTimer(m_TimerHandle, this, &ACameraControllerBase::ExitCameraModeOnDelay, a_ExitDelay, false);
		}
		else
		{
			ExitCameraModeOnDelay();
		}
	}
}

ACameraModeControllerBase* const ACameraControllerBase::GetCurrentCameraData()
{
	return m_CameraModes[static_cast<uint8>(m_CurrentCameraMode)];
}

void const ACameraControllerBase::SetCameraTarget(AActor* const a_CameraTarget)
{
	GetCurrentCameraData()->SetCameraTarget(a_CameraTarget);
}

void ACameraControllerBase::ExitCameraModeOnDelay()
{
	GetWorld()->GetTimerManager().ClearTimer(m_TimerHandle);
	
	GetCurrentCameraData()->DeactivateCameraMode();
	m_CurrentCameraMode = m_CameraModeChangeData.m_TargetCameraMode;
	
	EnterCameraCinematic();
	if (m_CameraModeChangeData.m_EnterDelay > 0.0f)
	{
		GetWorld()->GetTimerManager().SetTimer(m_TimerHandle, this, &ACameraControllerBase::EnterCameraModeOnDelay, m_CameraModeChangeData.m_EnterDelay, false);
	}
	else
	{
		EnterCameraModeOnDelay();
	}
}

void ACameraControllerBase::EnterCameraModeOnDelay()
{
	m_CameraModeChangeData = FCameraModeChangeData();
	GetWorld()->GetTimerManager().ClearTimer(m_TimerHandle);
	
	GetCurrentCameraData()->ActivateCameraMode();
	
	m_CanChangeCameraMode = true;
}

void ACameraControllerBase::OnUpdateState_Implementation(float a_DeltaTime)
{
	GetCurrentCameraData()->OnUpdateState(a_DeltaTime);
}
