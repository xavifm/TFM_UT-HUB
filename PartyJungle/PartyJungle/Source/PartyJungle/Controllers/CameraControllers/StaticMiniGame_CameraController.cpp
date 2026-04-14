#include "StaticMiniGame_CameraController.h"

#include <PartyJungle/Controllers/CameraControllers/CameraModeControllers/CameraModeControllerBase.h>


AStaticMiniGame_CameraController::AStaticMiniGame_CameraController() :
	ACameraControllerBase()
{
	m_CurrentCameraMode = ECameraModes::Static;
}

void AStaticMiniGame_CameraController::OnStart_Implementation()
{
	GetCurrentCameraData()->SetCameraTarget(m_DefaultCameraTarget);
	
	Super::OnStart_Implementation();
}
