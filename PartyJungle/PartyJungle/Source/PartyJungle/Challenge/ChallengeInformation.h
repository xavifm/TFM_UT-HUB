#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Player/Minion/Minion.h"
#include "ChallengeDatabase.h"
#include "ChallengeInformation.generated.h"

UENUM(BlueprintType)
enum class EDuelType : uint8
{
	HALF_COINS UMETA(DisplayName = "Half Coins"),
	ALL_IN_COINS UMETA(DisplayName = "All In Coins"),
	ALL_IN_VS_ST UMETA(DisplayName = "All In Vs St"),
	RESIGN UMETA(DisplayName = "Escape Vote")
};

UCLASS()
class PARTYJUNGLE_API AChallengeInformation : public AActor
{
	GENERATED_BODY()

public:
	AChallengeInformation();
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Registry")
	class AChallengeDatabase* ChallengeRegistry;

	UPROPERTY()
	TArray<AMinion*> Minions;

	UPROPERTY()
	TArray<float> SavedDuelTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Active Duels")
	TArray<ASquare*> SquaresWithDuelsInRound;

	
	
	UFUNCTION(BlueprintCallable)
	void SetUpDuelInfo(TArray<AMinion*> _minions);

	UFUNCTION()
	void SafeDuelChoice();
	
	int GetCurrentBetControllerMenuIndex(int _currentTeam, int _maxTeamNumber, int _duelSquareIndex) const;

	UFUNCTION(BlueprintCallable)
	void SaveDuelToRegistry(int _winner, int _coins, int _crowns);

	UFUNCTION(BlueprintCallable)
	float GetDuelType();

	UFUNCTION(BlueprintCallable)
	int SwitchDuelType(int _direction, int _team);

	UFUNCTION(BlueprintCallable)
	int GetBetCoinsQuantity(int _team);

	UFUNCTION(BlueprintCallable)
	int GetPotQuantity(int _percentage, int _duelSquareIndex);

	UFUNCTION()
	int GetSavedPot();
	
	UFUNCTION()
	void AddSavedPot(int _quantity);
	
	UFUNCTION()
	void ResetSavedPot();

	UFUNCTION(BlueprintCallable)
	int GetBetCrownsQuantity(int _team);

	UFUNCTION()
	bool CheckIfThereAreCrownsInDuel(int _duelSquareIndex);

	UFUNCTION()
	void ResetDuels();
	
	TArray<std::pair<int, std::pair<int, int>>> ParsePotsInfo(int _duelSquareIndex);

private:
	EDuelType DuelType;
	int DuelPercentage;

	int SavedPot = 0;

	const int MIN_PERCENTAGE = 0;
	const int MAX_PERCENTAGE = 100;
	
	const float MIN_HALF_BET = 5;
	const float MIN_FULL_BET = 10;
};

