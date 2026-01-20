#pragma once

#include "ControllerBase.h"

#include "CameraControllerBase.generated.h"


/**
 * Enum with all possible Camera Modes.
 */
UENUM()
enum class ECameraMode { FullView, Focused};


// ToDo Capy: Fer lógica segons apunts
/**
 * Base for the Camera Controller Actors.
 */
UCLASS()
class ACameraControllerBase : public AControllerBase
{
	GENERATED_BODY()
	
public:
	/**
	 * Function called when the State is changed for starting the controller.
	 */
	void OnStart_Implementation() override;
	
	/**
	 * Function called when the State is changed for exiting the controller.
	 */
	void OnExit_Implementation() override;

	/**
	 * Gets the current Camera Mode
	 * @return Current Camera Mode.
	 */
	ECameraMode GetCurrentCameraMode() const;

	/**
	 * Gets a pointer to the current Camera Actor.
	 * @return Pointer to the current Camera Actor.
	 */
	AActor* const GetCurrentCamera() const;
	
private:
	TMap<ECameraMode, AActor*> m_Cameras; //!< Cameras ordered by their Mode.
	
	ECameraMode m_CameraMode; //!< Current Camera Mode.
	
};
