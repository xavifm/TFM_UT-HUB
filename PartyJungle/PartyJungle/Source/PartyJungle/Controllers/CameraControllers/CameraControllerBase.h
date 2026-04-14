#pragma once

#include <PartyJungle/Controllers/ControllerBase.h>

#include "CameraControllerBase.generated.h"

enum class ETriggerEvents : uint8;
enum class EInputKeys : uint8;
class ACameraModeControllerBase;
class UCameraComponent;
enum class ECameraModes : uint8;


/**
 * Base for the Camera Controller Actors.
 */
UCLASS()
class ACameraControllerBase : public AControllerBase
{
	GENERATED_BODY()

	/**
	 * Struct with the necessary Data for changing the CameraMode.
	 */
	struct FCameraModeChangeData
	{
	public:
		/**
		 * Default Constructor. Used only for initialization.
		 */
		FCameraModeChangeData() = default;

		/**
		 * Parameterized Constructor.
		 * @param a_TargetCameraMode Target CameraMode.
		 * @param a_ExitDelay Delay for exiting the current CameraMode.
		 * @param a_EnterDelay Delay for entering the target CameraMode.
		 */
		FCameraModeChangeData(const ECameraModes a_TargetCameraMode, const float a_ExitDelay, const float a_EnterDelay) : 
			m_TargetCameraMode(a_TargetCameraMode), m_ExitDelay(a_ExitDelay), m_EnterDelay(a_EnterDelay) {}
		
		
	public:
		ECameraModes m_TargetCameraMode; //!< Target CameraMode.
		float m_ExitDelay; //!< Delay for exiting the current CameraMode.
		float m_EnterDelay; //!< Delay for entering the target CameraMode.
	};
	
public:
	/**
	 * Method called when the State and the StateManager are ready. Call instead of BeginPlay().
	 */
	virtual void OnBeginState_Implementation() override;
	
	/**
	 * Function called when the State is changed for starting the controller.
	 */
	virtual void OnStart_Implementation() override;
	
	/**
	 * Function called when the State is changed for exiting the controller.
	 */
	virtual void OnExit_Implementation() override;
	
	/**
	 * Gets whether the controller can be exited or not.
	 * @return True if the controller can be exited.
	 */
	virtual bool CanExitController_Implementation() override;

	/**
	 * Gets the current Camera Mode
	 * @return Current Camera Mode.
	 */
	UFUNCTION(BlueprintCallable, Category = "CameraCtr Functions")
	ECameraModes GetCameraMode() const;

	/**
	 * Sets the current Camera Mode.
	 * @param a_CameraMode Target Camera Mode.
	 * @param a_ExitDelay Delay for Exiting the original Camera.
	 * @param a_EnterDelay Delay for Entering the target Camera.
	 */
	UFUNCTION(BlueprintCallable, Category = "CameraCtr Functions")
	void SetCameraMode(const ECameraModes a_CameraMode, const float a_ExitDelay = -1, const float a_EnterDelay = -1);

	/**
	 * Gets a pointer to the current Camera Data.
	 * @return Pointer to the current Camera Data.
	 */
	UFUNCTION(BlueprintCallable, Category = "CameraCtr Functions")
	ACameraModeControllerBase* const GetCurrentCameraData();

	/**
	 * Sets the Camera follow Target.
	 * @param a_Target Target to follow.
	 */
	UFUNCTION(BlueprintCallable, Category = "CameraCtr Functions")
	void const SetCameraTarget(AActor* const a_CameraTarget);
	
protected:
	/**
	 * Gets if the CameraMode can be changed.
	 * @return True if the CameraMode is ready to be changed.
	 */
	UFUNCTION(BlueprintCallable, Category = "CameraCtr Functions")
	bool CanChangeCameraMode() const { return m_CanChangeCameraMode; }

	/**
	 * Cinematic triggered when exiting a CameraMode.
	 */
	UFUNCTION(BlueprintImplementableEvent, Category = "CameraController")
	void ExitCameraCinematic();
	
	/**
	 * Cinematic triggered when entering a CameraMode.
	 */
	UFUNCTION(BlueprintImplementableEvent, Category = "CameraController")
	void EnterCameraCinematic();
	
private:
	/**
	 * Exits the current Camera Mode with the selected Delay.
	 */
	void ExitCameraModeOnDelay();
	
	/**
	 * Enters the current Camera Mode with the selected Delay.
	 */
	void EnterCameraModeOnDelay();
	
protected:
	/**
	 * Function called when the State is updated.
	 * @param a_DeltaTime Game time elapsed during last frame modified by the time dilation
	 */
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "FullViewCamera_Functions")
	virtual void OnUpdateState_Implementation(float a_DeltaTime);
	
	
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "CameraController")
	TMap<ECameraModes, ACameraModeControllerBase*> m_Cameras; //!< Cameras ordered by their Camera Mode.
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "CameraController")
	ECameraModes m_CurrentCameraMode; //!< Current Camera Mode.
	
private:
	TMap<uint8, ACameraModeControllerBase*> m_CameraModes; //!< Cameras ordered by their Camera Mode Index.
	
	FTimerHandle m_TimerHandle; //!< Timer used for hte camera changes delays.
	
	FCameraModeChangeData m_CameraModeChangeData; //!< Data for the current CameraMode change.
	
	bool m_CanChangeCameraMode {true}; //!< Gets whether the CameraMode is ready to be change or not.
	
};
