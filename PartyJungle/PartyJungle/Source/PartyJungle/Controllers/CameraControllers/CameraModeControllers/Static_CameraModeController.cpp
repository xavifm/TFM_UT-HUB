#include "Static_CameraModeController.h"


AStatic_CameraModeController::AStatic_CameraModeController()
{
	PrimaryActorTick.bCanEverTick = false;
	
	m_CameraMode = ECameraModes::Static;
}
