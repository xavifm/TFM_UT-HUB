#pragma once

#include <PartyJungle/Player/UI/PlayerMapUI.h>

#include <CoreMinimal.h>
#include <GameFramework/Actor.h>

#include "RoundsManager.generated.h"

class AChallengeDatabase;
class AChallengeInformation;


// ToDo Capy: Potser ajustar la classe perquè sigui un manager connectat al GameManager?
/**
 * Actor in charge of managing the rounds of the game.
 */
UCLASS()
class PARTYJUNGLE_API ARoundsManager : public AActor
{
	GENERATED_BODY()

public:
	/**
	 * Constructor.
	 */
	ARoundsManager();

	/**
	 * Gets the current round.
	 * @return Current round.
	 */
	UFUNCTION()
	int GetCurrentRound();

	/**
	 * Handles the end of round logic.
	 * @param a_Minigame Indicates if an end of round Minigame has been played.
	 * @return True if a Minigame must be played before ending the round.
	 */
	UFUNCTION()
	bool HandleEndRound(bool a_Minigame = false);

	/**
	 * Starts the next round
	 */
	UFUNCTION()
	void StartNextRound();

	/**
	 * Get the amount of rounds left.
	 * @return Amount of rounds left.
	 */
	UFUNCTION()
	int GetRoundsLeft();

	/**
	 * Finishes the Minigame.
	 */
	UFUNCTION()
	void FinishGame();

	/**
	 * Checks if a Minigame must be played on the end of the round.
	 * @return True if a Minigame must be played on the end of the round.
	 */
	UFUNCTION()
	bool CheckForEndRoundMinigame();

	/**
	 * Assign the Map UI.
	 * @param a_MapUI Pointer to the player's map UI.
	 */
	UFUNCTION()
	void AssignMapUI(UPlayerMapUI* a_MapUI);

protected:
	/**
	 * Overridable native event for when play begins for this actor.
	 */
	virtual void BeginPlay() override;

	
public:
	const int ROUNDS_REMAINING_FOR_ANNOUNCE {3}; //!< Amount of round remaining for the game to announce its rounds left.

	UPROPERTY(EditAnywhere, Category = "Rounds")
	bool m_GameFinished {false}; //!< Indicates if the game has ended.

	UPROPERTY(EditAnywhere, Category = "Rounds Audio")
	AAudioManager* m_AudioManager {nullptr}; //!< Pointer to the AudioManager.

	// ToDo Capy: Substituir pel DuelManager
	UPROPERTY(EditAnywhere, Category = "Challenge Info")
	AChallengeInformation* m_ChallengeInfo {nullptr}; //!< Pointer to the Challenge information.

	UPROPERTY(EditAnywhere, Category = "Rounds")
	int m_MaxRounds {0}; //!< Maximum rounds of this game.
	
private:
	const FString END_GAME_SCENE_NAME {"EndGameScene"}; //!< End game scene name.

	const FString LAST_ROUNDS_SFX {"LastRoundsSFX"}; //!< Name of the SFX that sounds when entering the last round.

	const float LAST_ROUNDS_SFX_VOLUME {0.5f}; //!< Volume of the SFX that sounds when entering the last round.
	
	UPROPERTY(VisibleAnywhere, Category = "Rounds")
	int m_CurrentRound {0}; //!< Current round of this game.
	
	UPROPERTY()
	UPlayerMapUI* m_MapUI {nullptr}; //!< Pointer to the map UI.

	UPROPERTY(EditAnywhere, Category = "ScoresDB")
	AScoreDatabase* m_ScoresDB {nullptr}; //!< Pointer to the Score Database.

	UPROPERTY(EditAnywhere, Category = "ChallengeDB")
	AChallengeDatabase* m_ChallengeDB {nullptr}; //!< Pointer to the Challenge Database.

	FTimerHandle m_TimerHandle; //!< Timer used for round management.
};
