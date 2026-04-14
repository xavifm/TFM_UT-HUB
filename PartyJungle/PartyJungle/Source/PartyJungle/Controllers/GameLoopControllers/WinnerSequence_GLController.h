#pragma once

#include <PartyJungle/Controllers/GameLoopControllers/GameLoopControllerBase.h>

#include "WinnerSequence_GLController.generated.h"


/**
 * Controller for the 'WinnerSequence' GameLoop.
 */
UCLASS()
class AWinnerSequence_GLController : public AGameLoopControllerBase
{
	GENERATED_BODY()
	
public:
	/**
	 * Function called when the State is changed for starting the controller and a Context is passed. Executed before OnStart().
	 * @param a_Context Pointer to the Context information.
	 */
	virtual void OnContextStart(void* a_Context) override;
	
	/**
	 * Function called when the State is changed for exiting the controller.
	 */
	virtual void OnExit_Implementation() override;
	
	/**
	 * Switch the scene with the chosen delay.
	 */
	UFUNCTION()
	void DelayedSceneSwitch();
	
	
private:
	const int FINISH_WINNER_SCENE_DELAY = 11.0f; //!< Delay to switch an Scene.
	
	FTimerHandle m_TimerHandle; //!< Timer Handle for delays in the GameLoop Scene.
	
};
