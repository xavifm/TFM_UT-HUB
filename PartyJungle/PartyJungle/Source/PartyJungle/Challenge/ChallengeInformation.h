#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Player/Minion/Minion.h"
#include "ChallengeInformation.generated.h"

class ASquare;
enum class EDuelType : uint8;


// ToDo Capy: La clase ha sido sustituida por el DuelManager. Quitar durante el refactor, una vez ya no se use en ning´n lado.
UCLASS()
class PARTYJUNGLE_API AChallengeInformation : public AActor
{
	GENERATED_BODY()

public:
	AChallengeInformation();

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
	float GetDuelType();

	UFUNCTION(BlueprintCallable)
	int SwitchDuelType(int _direction, int _team);

	UFUNCTION(BlueprintCallable)
	int GetBetCoinsQuantity(int _team);

	UFUNCTION(BlueprintCallable)
	int GetPotQuantity(int _percentage, int _duelSquareIndex);
	
	UFUNCTION(BlueprintCallable)
	int GetCalculatedPot(TArray<AMinion*> _minions, float _percentage);

	UFUNCTION()
	int GetSavedPot();
	
	UFUNCTION()
	int GetSavedPotStars();
	
	UFUNCTION()
	void AddSavedPot(int _quantity, int _crowns = 0);
	
	UFUNCTION()
	void ResetSavedPot();
	
	UFUNCTION()
	void UpdateCurrentPot(TArray<AMinion*> _minions, float _percentage);

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
	int SavedPotStars = 0;

	const int MIN_PERCENTAGE = 0;
	const int MAX_PERCENTAGE = 100;
	
	const float MIN_HALF_BET = 5;
	const float MIN_FULL_BET = 10;
};

