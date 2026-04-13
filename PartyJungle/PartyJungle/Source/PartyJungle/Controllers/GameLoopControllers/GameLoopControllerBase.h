#pragma once

#include <PartyJungle/Controllers/ControllerBase.h>

#include "GameLoopControllerBase.generated.h"

enum class EDuelType : uint8;
class APlayersControllerBase;
class AMinion;


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
	 * Finishes the GameLoop.
	 * @param a_Winner Id of the winner player.
	 */
	virtual void FinishGameLoop(int a_Winner);

	/**
	 * Gets if the GameLoop has finished.
	 * @return True if the GameLoop has finished.
	 */
	UFUNCTION()
	bool IsGameLoopFinished();

	/**
	 * Calculates the winner of this GameLoop.
	 * @return Id of the winner player.
	 */
	UFUNCTION()
	int CalculateWinner();

	/**
	 * Sets the Score for the selected Team.
	 * @param a_Team Id of the chosen Team.
	 * @param a_Score Score for the chosen Team.
	 */
	UFUNCTION()
	virtual void SetTeamScore(int a_Team, int a_Score);

	/**
	 * Sets the chosen Team Ready.
	 * @param a_Team Id of the chosen Team.
	 */
	UFUNCTION()
	void SetTeamReady(int a_Team);

	/**
	 * Shows the Start Screen Sequence.
	 */
	UFUNCTION(BlueprintImplementableEvent)
	void ShowStartScreenSequence();

	/**
	 * Shows the End Screen Sequence.
	 * @param a_Winner Id of the winner player.
	 */
	UFUNCTION(BlueprintImplementableEvent)
	void ShowEndScreenSequence(int a_Winner);

protected:
	/**
	 * Resets this GameLoop Controller.
	 */
	UFUNCTION(BlueprintCallable, Category = "GameLoop_Functions")
	virtual void ResetGameLoop();

private:
	// ToDo Capy: 
	//  - Actualitzar en OnEvent_DuelReady().
	//  - Es posaria el event des del UI Controller corresponent.
	//  - No tinc clar que tingui sentit agafar els minions de la casella des del Duel Manager, el propi event ho podria passar.
	//  - Encara que es deixi que agafi la info des del Duel Manager, ara mateix no s'están afegint els m_SquaresWithDuelsInRound, així que per ara estarà sempre buit.
	/**
	 * Update all the Duel Manager info related to this GameLoop.
	 */
	UFUNCTION()
	void UpdateDuelsData();
	
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters")
	FString m_NextState {""}; //!< Next State Id.

	UPROPERTY()
	TSet<int> m_PlayingTeams; //!< Set with all the Ids of all the Teams that participate in the Duel.

	UPROPERTY()
	TMap<int, int> m_GameScores; //!< Map with all GameScores related by its Team Id.

	UPROPERTY()
	TMap<int, bool> m_TeamsReady; //!< Map with a bool that indicated if each Team is ready.

	UPROPERTY()
	bool m_GameLoopStarted {false}; //!< Flag to indicate if the GameLoop has started.

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters")
	float m_StartTime {6.5f}; //!< Start delay time.
	
protected:
	bool m_GameLoopFinished {false}; //!< Flag to indicate if the GameLoop has finished.

};
