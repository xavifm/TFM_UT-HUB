#pragma once

#include <PartyJungle/Controllers/ControllerBase.h>
#include <PartyJungle/Utilities/LerpHandler.h>

#include <CoreMinimal.h>

#include "CameraModeControllerBase.generated.h"

class UManagerGameInstance;
class ACameraActor;


/**
 * Enum with all possible Camera Modes.
 */
UENUM()
enum class ECameraModes : uint8 { FullView, Focused, Cinematic, Static };


/**
 * Base Controller for each Camera Mode.
 */
UCLASS(BlueprintType)
class ACameraModeControllerBase : public AControllerBase
{
	GENERATED_BODY()
	
public:
	/**
	 * Method called when the State and the StateManager are ready. Call instead of BeginPlay().
	 */
	virtual void OnBeginState_Implementation() override;
	
	/**
	 * Function called when the State is changed for starting the controller.
	 */
	virtual void OnStart_Implementation() override {}
	
	/**
	 * Function called when the State is changed for exiting the controller.
	 */
	virtual void OnExit_Implementation() override {}
	
	/**
	 * Activates the associated Camera Mode.
	 */
	virtual void ActivateCameraMode();
	
	/**
	 * Deactivates the associated Camera Mode.
	 */
	virtual void DeactivateCameraMode();

	/**
	 * Gets the Actor of the associated Camera.
	 * @return Actor of the associated Camera.
	 */
	ACameraActor* const GetCamera() const { return m_CameraActor; }

	/**
	 * Gets the Camera Mode of the associated Camera.
	 * @return Camera Mode of the associated Camera.
	 */
	ECameraModes const GetCameraMode() { return m_CameraMode; }
	
	/**
	 * Moves the associated Camera with the selected Speed.
	 * @param a_CameraSpeed Selected Speed to move the associated Camera.
	 */
	virtual void MoveCamera(const FVector& a_CameraSpeed, float a_DeltaTime);

	/**
	 * Starts a lerp movement to the Camera Target.
	 * @param a_LerpTime Lerp duration.
	 */
	virtual void StartMoveToTargetLerp(float a_LerpTime);
	
	/**
	 * Moves the associated Camera following the current Target.
	 * @param a_TargetDistance Selected distance to mantain from the Target.
	 */
	virtual void MoveCameraToTargetLerp(FVector a_TargetDistance, float a_DeltaTime);

	/**
	 * Follows the Camera Target at the specified distance.
	 * @param a_TargetDistance Distance on the 3 axis from where to follow the Camera Target.
	 */
	virtual void FollowCameraTarget(FVector a_TargetDistance);

	/**
	 * Gets the Minimum Bounds for the associated Camera.
	 * @return Minimum Bounds for the associated Camera.
	 */
	FVector GetMinCameraBounds() const { return m_MinCameraBounds; }

	/**
	 * Gets the Maximum Bounds for the associated Camera.
	 * @return Maximum Bounds for the associated Camera.
	 */
	FVector GetMaxCameraBounds() const { return m_MaxCameraBounds; }
	
	/**
	 * Sets the current Camera Target.
	 * @param a_CameraTarget Target Actor for the Camera to follow.
	 */
	virtual void SetCameraTarget(AActor* const a_CameraTarget);
	
	/**
	 * Gets the Target Actor of the associated Camera.
	 * @return Target Actor of the associated Camera.
	 */
	AActor* const GetCameraTarget() const { return m_CameraTarget; }

	/**
	 * Gets if this CameraMode Controller is currently active.
	 * @return True if this CameraMode Controller is active.
	 */
	bool IsActive() const { return m_IsActive; }
	
protected:
	/**
	 * Gets if the Camera is doing a lerp towards the Target.
	 * @return True if the Camera is doing a lerp towards the Target.
	 */
	bool IsMoveToTargetLerpActive() const { return m_MoveToTargetLerpHandler.IsActive(); }
	
	
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="CameraData")
	ACameraActor* m_CameraActor {nullptr}; //!< Associated Camera actor.
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="CameraData")
	AActor* m_CameraTarget {nullptr}; //!< Target Actor of the associated Camera.
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="CameraData")
	ECameraModes m_CameraMode; //!< Camera Mode of the associated Camera.
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="CameraData")
	FVector m_MinCameraBounds {-2820.0f, -2170.0f, -1000.0f}; //!< Minimum Bounds for the associated Camera.
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="CameraData")
	FVector m_MaxCameraBounds {1220.0f, 1870.0f, 1500.0f}; //!< Maximum Bounds for the associated Camera.
	
private:
	FLerpHandler<FVector> m_MoveToTargetLerpHandler; //!< Lerp Handler for moving the Camera to the selected Target.
	
	bool m_IsActive {false}; //!< Gets if the associated CameraMode is active.
	
};
