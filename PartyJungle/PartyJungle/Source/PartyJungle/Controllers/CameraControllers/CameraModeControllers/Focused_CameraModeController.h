#pragma once

#include <PartyJungle/Controllers/CameraControllers/CameraModeControllers/CameraModeControllerBase.h>

#include "Focused_CameraModeController.generated.h"

enum class ETriggerEvents : uint8;
enum class EInputKeys : uint8;
class APlayersControllerBase;
class AInputManager;


/**
 * Controller for each Camera in Focused Camera Mode.
 */
UCLASS(BlueprintType)
class AFocused_CameraModeController : public ACameraModeControllerBase
{
	GENERATED_BODY()
	
public:
	/**
	 * Constructor.
	 */
	AFocused_CameraModeController();
	
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
	 * Activates the associated Camera Mode.
	 */
	virtual void ActivateCameraMode() override;
	
	/**
	 * Deactivates the associated Camera Mode.
	 */
	virtual void DeactivateCameraMode() override;
	
	/**
	 * Sets the current Camera Target.
	 * @param a_CameraTarget Target Actor for the Camera to follow.
	 */
	virtual void SetCameraTarget(AActor* const a_CameraTarget) override;
	
protected:
	/**
	 * Function called when the State is updated.
	 * @param a_DeltaTime Game time elapsed during last frame modified by the time dilation
	 */
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "FocusedCamera_Functions")
	virtual void OnUpdateState_Implementation(float a_DeltaTime);
	
private:
	/**
	 * Method called when the Player changes.
	 * @param a_OldPlayerId Id of the Old Player.
	 * @param a_NewPlayerId Id of the New Player.
	 */
	UFUNCTION()
	void OnPlayerChanged(int a_OldPlayerId, int a_NewPlayerId);

	/**
	 * Method called when the Minion changes.
	 * @param a_PlayerId Id of the Current Player.
	 * @param a_OldMinionId Id of the Old Minion.
	 * @param a_NewMinionId Id of the New Minion.
	 */
	UFUNCTION()
	void OnMinionChanged(int a_PlayerId, int a_OldMinionId, int a_NewMinionId);
	
	
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="CameraData")
	FVector m_DistanceToTarget {-400.0f, 0.0f, 700.0f}; //!< Maximum Bounds for the associated Camera.
	
private:
	AInputManager* m_InputManager {nullptr}; //!< Pointer to the InputManager.
	
	APlayersControllerBase* m_PlayersController {nullptr}; //!< Pointer to the current state's PlayerController.
	
};
