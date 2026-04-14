#pragma once

#include <PartyJungle/Controllers/CameraControllers/CameraModeControllers/CameraModeControllerBase.h>

#include "Static_CameraModeController.generated.h"


/**
 * Controller for each Camera in Static Camera Mode.
 */
UCLASS(BlueprintType)
class AStatic_CameraModeController : public ACameraModeControllerBase
{
	GENERATED_BODY()
	
public:
	/**
	 * Constructor.
	 */
	AStatic_CameraModeController();
	
private:
	// --- All the methods related to movement have been erased and privatized, as the Static Camera shouldn't ever move. ---
	#pragma region MovementMethods
	
	/**
	 * Moves the associated Camera with the selected Speed.
	 * @param a_CameraSpeed Selected Speed to move the associated Camera.
	 */
	void MoveCamera(const FVector& a_CameraSpeed, float a_DeltaTime) override final {};

	/**
	 * Starts a lerp movement to the Camera Target.
	 * @param a_LerpTime Lerp duration.
	 */
	void StartMoveToTargetLerp(float a_LerpTime) override final {};
	
	/**
	 * Moves the associated Camera following the current Target.
	 * @param a_TargetDistance Selected distance to mantain from the Target.
	 */
	void MoveCameraToTargetLerp(FVector a_TargetDistance, float a_DeltaTime) override final {};

	/**
	 * Follows the Camera Target at the specified distance.
	 * @param a_TargetDistance Distance on the 3 axis from where to follow the Camera Target.
	 */
	void FollowCameraTarget(FVector a_TargetDistance) override final {};
	
	#pragma endregion MovementMethods
	
};
