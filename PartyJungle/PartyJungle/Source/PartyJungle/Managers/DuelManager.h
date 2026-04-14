#pragma once

#include <CoreMinimal.h>

#include "DuelManager.generated.h"

class ASquare;
class UChallengeDto;
class AMinion;


/**
 * Enum with all the Duel Types.
 */
UENUM(BlueprintType)
enum class EDuelType : uint8
{
	HALF_COINS UMETA(DisplayName = "Half Coins"),
	ALL_IN_COINS UMETA(DisplayName = "All In Coins"),
	ALL_IN_VS_ST UMETA(DisplayName = "All In Vs St"),
	RESIGN UMETA(DisplayName = "Escape Vote")
};


/**
 * Manager for all the Duel Information.
 */
UCLASS()
class PARTYJUNGLE_API ADuelManager : public AActor
{
	GENERATED_BODY()

public:
	/**
	 * Constructor.
	 */
	ADuelManager();

	/**
	 * Overridable native event for when play begins for this actor.
	 */
	void BeginPlay() override;

	/**
	 * Prepares the Duel Information.
	 * @param a_Minions Array of Minions that will participate in the Duel.
	 */
	UFUNCTION(BlueprintCallable)
	void SetUpDuelInfo(TArray<AMinion*> a_Minions);

	/**
	 * Safe the chosen Duel.
	 */
	UFUNCTION()
	void SafeDuelChoice();

	/**
	 * Gets the current Bet Controller Menu for the selected Team by its Duel Id.
	 * @param a_Team Selected Team Id.
	 * @param a_DuelSquareIndex Duel Id.
	 * @return Selected Bet Controller Menu Id.
	 */
	int GetBetControllerMenuIndex(int a_Team, int a_DuelSquareIndex) const;

	/**
	 * Saves the current Duel registry.
	 * @param a_Winner Id of this Duel's winner player.
	 * @param a_Coins Gained Coins.
	 * @param a_Crowns Gained Crowns.
	 */
	UFUNCTION(BlueprintCallable)
	void SaveDuelToRegistry(int a_Winner, int a_Coins, int a_Crowns);

	/**
	 * Gets the current Duel Type.
	 * @return Current Duel Type.
	 */
	UFUNCTION(BlueprintCallable)
	EDuelType GetDuelType();

	/**
	 * Changes the current Duel Type.
	 * @param a_Direction Direction of the roulette for choosing the Duel.
	 * @param a_Team Id of the Team that has initiated the DUel.
	 * @return Current Duel Type.
	 */
	UFUNCTION(BlueprintCallable)
	EDuelType SwitchDuelType(int a_Direction, int a_Team);

	/**
	 * Gets the coins bet for the selected Team Id.
	 * @param a_Team Id of the selected Team.
	 * @return Coins bet for the selected Team Id.
	 */
	UFUNCTION(BlueprintCallable)
	int GetBetCoinsQuantity(int a_Team);

	/**
	 * Gets the Pot Quantity.
	 * @param a_FullPot If the Pot is Full.
	 * @param a_DuelSquareIndex Id of the Duel.
	 * @return Pot Quantity.
	 */
	UFUNCTION(BlueprintCallable)
	int GetPotQuantity(bool a_FullPot, int a_DuelSquareIndex);

	/**
	 * Gets the saved pots.
	 * @return Saved pots.
	 */
	UFUNCTION()
	int GetSavedPot();

	/**
	 * Gets the Crowns bet for the selected Team.
	 * @param a_Team Id of the selected Team.
	 * @return Crowns bet for the selected Team.
	 */
	UFUNCTION(BlueprintCallable)
	int GetBetCrownsQuantity(int a_Team);

	/**
	 * Gets if any player in the Duel has a Crown.
	 * @param a_DuelSquareIndex Duel Id.
	 * @return True if there's any player in the Duel with a Crown.
	 */
	UFUNCTION()
	bool IsAnyCrownInDuel(int a_DuelSquareIndex);

	/**
	 * Resets the Duel information.
	 */
	UFUNCTION()
	void ResetDuels();

	/**
	 * Registers a Duel's Data.
	 * @param a_Attacker Id of the attacker player.
	 * @param a_Victim Id of the victim player.
	 * @param a_Winner Id of the winner player.
	 * @param a_BetType Bet Type.
	 * @param a_Coins Duel won coins.
	 * @param a_Crowns Duel won crowns.
	 */
	UFUNCTION(BlueprintCallable, Category = "Challenge")
	void RegisterDuel(int32 a_Attacker, int32 a_Victim, int32 a_Winner, int32 a_BetType, int32 a_Coins, int32 a_Crowns = 0);

	/**
	 * Saves the Duel Registry into the DataManager Instance.
	 */
	UFUNCTION(BlueprintCallable, Category = "Challenge")
	void SendRegistryToInstance();

	/**
	 * Sets the Roulette result.
	 * @param a_RouletteResult Roulette result.
	 */
	UFUNCTION(BlueprintCallable, Category = "Challenge")
	void SetRouletteResult(const int a_RouletteResult);

	/**
	 * Gets the Roulette result.
	 * @return Roulette result.
	 */
	UFUNCTION(BlueprintCallable, Category = "Challenge")
	const int GetRouletteResult() { return m_RouletteResult; }

	/**
	 * Sets the current Duel Index.
	 * @param a_DuelSquareIndex Selected Duel Index.
	 */
	UFUNCTION(BlueprintCallable, Category = "Challenge")
	void SetDuelSquareIndex(const int a_DuelSquareIndex);
	
	/**
	 * Gets the current Duel Index.
	 * @return Current Duel Index.
	 */
	UFUNCTION(BlueprintCallable, Category = "Challenge")
	const int GetDuelSquareIndex() { return m_DuelSquareIndex; }

	/**
	 * Parse the pots information.
	 * @param a_DuelSquareIndex Duel Id.
	 * @return Array with the parsed pots information.
	 */
	TArray<std::pair<int, std::pair<int, EDuelType>>> ParsePotsInfo(int a_DuelSquareIndex);

	/**
	 * Prepares the information for a starting a Forced Duel.
	 * @param a_DuelType Duel Type to be forced.
	 * @param a_DuelSquareIdx Duel Id.
	 */
	void StartForcedDuel(EDuelType a_DuelType, int a_DuelSquareIdx);

	/**
	 * Finish a Forced Duel.
	 */
	void FinishForcedDuel();

	/**
	 * Gets if the current Duel is being forced.
	 * @return True if the current Duel is being forced.
	 */
	bool IsForcedDuel() { return m_IsForcingDuel; };
	
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Registry")
	class AChallengeDatabase* m_ChallengeRegistry; //!< Reference to the challenge registry database.

	UPROPERTY()
	TArray<AMinion*> m_Minions; //!< List of Minions that participate in the Duel.

	UPROPERTY()
	TArray<EDuelType> m_SavedDuelTypes; //!< Array with all the chosen Duels Types.

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Active Duels")
	TArray<ASquare*> m_SquaresWithDuelsInRound; //!< Array with the squares that have a Duel during a round.

private:
	const float MIN_HALF_BET {5}; //!< Minimun Half Bet.
	const float MIN_FULL_BET {10}; //!< Minimum Full Bet.
	
	EDuelType m_DuelType; //!< Type of the Duel.

	int m_SavedPot {0}; //!< Pots saved.
	
	int m_RouletteResult {0}; //!< Roulette Result index.
	
	int m_DuelSquareIndex {-1}; //!< Id of the current Duel.
	
	UPROPERTY()
	TArray<UChallengeDto*> m_DuelsRegistry; //!< Array with the data of the Duel.
	
	bool m_IsForcingDuel {false}; //!< Indicates if the current Duel has been forced.
};

