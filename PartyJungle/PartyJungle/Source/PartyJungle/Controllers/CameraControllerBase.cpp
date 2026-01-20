#include "CameraControllerBase.h"


void ACameraControllerBase::OnStart_Implementation()
{
	
}

void ACameraControllerBase::OnExit_Implementation()
{
	
}

ECameraMode ACameraControllerBase::GetCurrentCameraMode() const
{
	return m_CameraMode;
}

AActor* const ACameraControllerBase::GetCurrentCamera() const
{
	return m_Cameras[m_CameraMode];
}
