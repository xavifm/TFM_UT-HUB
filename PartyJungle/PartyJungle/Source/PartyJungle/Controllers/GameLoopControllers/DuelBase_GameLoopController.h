#pragma once

#include <PartyJungle/Controllers/GameLoopControllers/GameLoopControllerBase.h>

#include "DuelBase_GameLoopController.generated.h"


/**
 * Base for GameLoop Duel Controllers.
 */
UCLASS()
class ADuelBase_GameLoopController : public AGameLoopControllerBase
{
	GENERATED_BODY()
	
public:
	/**
	 * Function called when the State is changed for exiting the controller.
	 */
	void OnExit_Implementation() override;
	
	/**
	 * Finishes the GameLoop.
	 * @param a_Winner Id of the winner player.
	 */
	virtual void FinishGameLoop(int a_Winner);

protected:
	/**
	 * Finishes the Duel.
	 * @param a_Winner Id of the Winner player.
	 * @param a_DuelIndex Id of the Duel to finish.
	 */
	UFUNCTION(BlueprintCallable, Category = "Duel Functions")
	virtual void FinishDuel(int a_Winner, int a_DuelIndex);

	/**
	 * Closes the Duel Menu
	 * @param a_EndTurn True if its the last turn.
	 */
	UFUNCTION()
	void CloseDuelMenu(bool a_EndTurn);

	/**
	 * Gets the current Duel Type.
	 * @param a_DuelIndex Id of the Duel.
	 * @return Type of the current Duel.
	 */
	EDuelType GetDuelType(int a_DuelIndex);
	
	/**
	 * Forces a Duel start by completing all its necessary information.
	 * @param a_DuelType Type of the Duel to force.
	 * @param a_TeamsToCreate Teams that will be created for the forced Duel.
	 * @param a_DuelSquareIdx Id of the forced Duel.
	 */
	void StartForcedDuel(EDuelType a_DuelType, int a_TeamsToCreate, int a_DuelSquareIdx);
	
private:
	const float TIME_BEFORE_FINISH_DUEL = 2; //!< Delay before the Duel finishes.
	
	int m_WinnerTeam; //!< Id of the Winner Team.
	
};
