#pragma once

#include <PartyJungle/Controllers/GameLoopControllers/GameLoopControllerBase.h>

#include "Testing_GameLoopController.generated.h"

enum class EInputKeys : uint8;
enum class ETriggerEvents : uint8;


/**
 * Controller for the 'Testing' GameLoop. Used only for testing features in progress.
 */
UCLASS()
class ATesting_GameLoopController : public AGameLoopControllerBase
{
	GENERATED_BODY()
	
public:
	/**
	 * Function called when the State is changed for starting the controller.
	 */
	virtual void OnStart_Implementation() override;
	
	/**
	 * Function called when the State is changed for exiting the controller.
	 */
	virtual void OnExit_Implementation() override;

protected:
	/**
	 * Method called when the left Trigger 1 is actioned. Testing function to force the CameraMode to change from Focused to FullView and reverse.
	 * @param a_InputKey Id of the pressed Input Key.
	 * @param a_InputEvent Id of the actioned Trigger Event.
	 * @param a_PlayerId Id of the Player that activated the Input Event.
	 */
	UFUNCTION()
	void OnTrigger1_Left(EInputKeys a_InputKey, ETriggerEvents a_InputEvent, int a_PlayerId);

	/**
	 * Method called when the right Trigger 2 is actioned. Testing function to force the AirCannon Minigame to Start.
	 * @param a_InputKey Id of the pressed Input Key.
	 * @param a_InputEvent Id of the actioned Trigger Event.
	 * @param a_PlayerId Id of the Player that activated the Input Event.
	 */
	UFUNCTION()
	void OnTrigger2_Right(EInputKeys a_InputKey, ETriggerEvents a_InputEvent, int a_PlayerId);

	/**
	 * Method called when the right Trigger 1 is actioned. Testing function to force the current Player to change.
	 * @param a_InputKey Id of the pressed Input Key.
	 * @param a_TriggerEvent Id of the actioned Trigger Event.
	 * @param a_PlayerId Id of the Player that activated the Input Event.
	 */
	UFUNCTION()
	void OnTrigger1_Right(EInputKeys a_InputKey, ETriggerEvents a_TriggerEvent, int a_PlayerId);
	
};
