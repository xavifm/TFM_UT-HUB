#pragma once

#include <PartyJungle/Controllers/PlayersControllers/PlayersControllerBase.h>

#include "Default_PlayersController.generated.h"


/**
 * Default Controller for the Data of all Players in the Game.
 */
UCLASS()
class ADefault_PlayersController : public APlayersControllerBase
{
	GENERATED_BODY()
	
protected:
	/**
	 * Set the inputs for this Controller enabled.
	 * @param a_Enable True if enabled. False if disabled.
	 */
	virtual void SetInputsEnabled(bool a_Enable) override;
	
	/**
	 * Set the events for this Controller enabled.
	 * @param a_Enable True if enabled. False if disabled.
	 */
	virtual void SetEventsEnabled(bool a_Enable) override;
	
private:
	/**
	 * Method called when the left Joystick's axis X is triggered. It manages the Minion selection.
	 * @param a_Axis Value of the triggered axis.
	 * @param a_PlayerId Id of the Player who triggered the axis.
	 * @param a_WasActive Indicates if the axis was active in the previous frame.
	 */
	UFUNCTION()
	void OnLeftJoystick_X(float a_Axis, int a_PlayerId, bool a_WasActive);

	/**
	 * Method called when the current Player is changed. It manages which player inputs are active.
	 * @param a_OldPlayerId Previous Player Id.
	 * @param a_NewPlayerId Current Player Id.
	 */
	UFUNCTION()
	void OnPlayerChanged(int a_OldPlayerId, int a_NewPlayerId);
	
};
