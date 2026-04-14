#pragma once

#include <CoreMinimal.h>

#include <PartyJungle/Challenge/ChallengeDto.h>
#include <PartyJungle/Player/Scores/TransactionDto.h>
#include <PartyJungle/Player/Scores/ScoreDto.h>

#include "GameData.generated.h"


/**
 * Struct container of all the data that must be preserved between scenes.
 */
USTRUCT(BlueprintType)
struct FGameData
{
	GENERATED_BODY()
	
public:
	/**
	 * Gets the amount of Players in this Game.
	 * @return Amount of Players in this Game.
	 */
	int GetPlayersInBoard() { return m_PlayersInBoard; }
	
	/**
	 * Sets the amount of Players in this Game.
	 * @param a_PlayersInBoard Amount of Players in this Game.
	 */
	void SetPlayersInBoard(int a_PlayersInBoard) { m_PlayersInBoard = a_PlayersInBoard; }
	
	/**
	 * Gets the amount of Minions for each Player.
	 * @return Amount of Minions for each Player.
	 */
	int GetMinionsForPlayer() { return 3; }
	
	/**
	 * Gets the amount of Rounds for this Game.
	 * @return Amount of Rounds for this Game.
	 */
	int GetRoundsInBoard() { return m_RoundsInBoard; }
	
	/**
	 * Sets the amount of Rounds for this Game.
	 * @param a_RoundInBoard Amount of Rounds for this Game.
	 */
	void SetRoundsInBoard(int a_RoundInBoard) { m_RoundsInBoard = a_RoundInBoard; }
	
	/**
	 * Gets an array of pointers to the Score Data for each Player.
	 * @return Array of pointers to the Score Data for each Player.
	 */
	const TArray<UScoreDto*>& GetScores() { return m_Scores; }
	
	/**
	 * Sets an array of pointers to the Score Data for each Player.
	 * @param a_Scores Array of pointers to the Score Data for each Player.
	 */
	void SetScores(const TArray<UScoreDto*>& a_Scores) { m_Scores = a_Scores; }
	
	/**
	 * Gets an array of pointers to the Transaction Data for each Player.
	 * @return Array of pointers to the Transaction Data for each Player.
	 */
	const TArray<UTransactionDto*>& GetTransactionsRegistry() { return m_TransactionsRegistry; }
	
	/**
	 * Sets an array of pointers to the Transaction Data for each Player.
	 * @param a_TransactionsRegistry Array of pointers to the Transaction Data for each Player.
	 */
	void SetTransactionsRegistry(const TArray<UTransactionDto*>& a_TransactionsRegistry) { m_TransactionsRegistry = a_TransactionsRegistry; }
	
	/**
	 * Gets an array of pointers to the Challenges Data for each Player.
	 * @return Array of pointers to the Challenges Data for each Player.
	 */
	const TArray<UChallengeDto*>& GetChallengesRegistry() { return m_ChallengesRegistry; }
	
	/**
	 * Sets an array of pointers to the Challenges Data for each Player.
	 * @param a_ChallengesRegistry Array of pointers to the Challenges Data for each Player.
	 */
	void SetChallengesRegistry(const TArray<UChallengeDto*>& a_ChallengesRegistry) { m_ChallengesRegistry = a_ChallengesRegistry; }

	/**
	 * Resets to the Initial Game Data.
	 */
	void ResetData();
	
private:
	UPROPERTY() int DEFAULT_PLAYERS_IN_BOARD {4}; //!< Default amount of Players for a Game.
	UPROPERTY() int DEFAULT_ROUNDS_IN_BOARD {5}; //!< Default amount of Rounds for a Game.
	
	UPROPERTY()
	int m_PlayersInBoard {4}; //!< Amount of Players for the current Game.
	
	UPROPERTY()
	int m_RoundsInBoard {5}; //!< Amount of Rounds for the current Game.
	
	UPROPERTY()
	TArray<UScoreDto*> m_Scores; //!< Array of pointers to the Score Data for each Player in the current Game.

	UPROPERTY()
	TArray<UTransactionDto*> m_TransactionsRegistry; //!< Array of pointers to the Transaction Data for each Player in the current Game.

	UPROPERTY()
	TArray<UChallengeDto*> m_ChallengesRegistry; //!< Array of pointers to the Challenges Data for each Player in the current Game.
};
