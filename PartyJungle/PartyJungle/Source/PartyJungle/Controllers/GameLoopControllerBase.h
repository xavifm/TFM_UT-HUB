#pragma once

#include "ControllerBase.h"

#include "GameLoopControllerBase.generated.h"


/**
 * Base for controllers for each different game loop.
 */
UCLASS()
class AGameLoopControllerBase : public AControllerBase
{
	GENERATED_BODY()
	
public:
	/**
	 * Method called when the State and the StateManager are ready. Call instead of BeginPlay().
	 */
	void OnBeginState_Implementation() override;
	
	/**
	 * Function called when the State is changed for starting the controller.
	 */
	void OnStart_Implementation() override;
	
	/**
	 * Function called when the State is changed for exiting the controller.
	 */
	void OnExit_Implementation() override;
	
};
