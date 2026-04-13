#pragma once

#include <PartyJungle/Controllers/CameraControllers/CameraModeControllers/CameraModeControllerBase.h>

#include "FullView_CameraModeController.generated.h"


/**
 * Controller for each Camera in FullView Camera Mode.
 */
UCLASS(BlueprintType)
class AFullView_CameraModeController : public ACameraModeControllerBase
{
	GENERATED_BODY()
	
public:
	/**
	 * Constructor.
	 */
	AFullView_CameraModeController();
	
	/**
	 * Activates the associated Camera Mode.
	 */
	virtual void ActivateCameraMode() override;
	
	/**
	 * Deactivates the associated Camera Mode.
	 */
	virtual void DeactivateCameraMode() override;
	
protected:
	/**
	 * Function called when the State is updated.
	 * @param a_DeltaTime Game time elapsed during last frame modified by the time dilation
	 */
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "FullViewCamera_Functions")
	virtual void OnUpdateState_Implementation(float a_DeltaTime);
	
	/**
	 * Method called when the Right Joystick's X axis is triggered.
	 * @param a_Axis Axis X of the Right Joystick.
	 * @param a_PlayerId Id of the Player who triggered the Joystick's axis.
	 * @param a_WasActive True if the Joystick's axis was active in the previous frame.
	 */
	UFUNCTION()
	void OnRightJoystick_X(float a_Axis, int a_PlayerId, bool a_WasActive);
	
	/**
	 * Method called when the Right Joystick's Y axis is triggered.
	 * @param a_Axis Axis Y of the Right Joystick.
	 * @param a_PlayerId Id of the Player who triggered the Joystick's axis.
	 * @param a_WasActive True if the Joystick's axis was active in the previous frame.
	 */
	UFUNCTION()
	void OnRightJoystick_Y(float a_Axis, int a_PlayerId, bool a_WasActive);

	/**
	 * Enables or disables the necessary Inputs.
	 * @param a_Enable True to enable. False to disable.
	 */
	void SetInputEnabled(bool a_Enable);
	
	
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="FullViewCamera")
	float m_MoveSpeed {700.0f}; //!< Camera movement speed.
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="FullViewCamera")
	FVector m_DistanceToTarget {-400.0f, 0.0f, 1400.0f}; //!< Maximum Bounds for the associated Camera.
	
private:
	UPROPERTY()
	FVector m_MoveDirection {0, 0, 0}; //!< Camera movement direction.
};
