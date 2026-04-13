#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Player/Minion/Minion.h"
#include "ChallengeDatabase.h"
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
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Registry")
	class AChallengeDatabase* ChallengeRegistry;

	UPROPERTY()
	TArray<AMinion*> Minions;

	UPROPERTY()
	TArray<EDuelType> SavedDuelTypes;

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
	EDuelType GetDuelType();

	UFUNCTION(BlueprintCallable)
	EDuelType SwitchDuelType(int _direction, int _team);

	UFUNCTION(BlueprintCallable)
	int GetBetCoinsQuantity(int _team);

	UFUNCTION(BlueprintCallable)
	int GetPotQuantity(bool _fullPot, int _duelSquareIndex);

	UFUNCTION()
	int GetSavedPot();

	UFUNCTION(BlueprintCallable)
	int GetBetCrownsQuantity(int _team);

	UFUNCTION()
	bool CheckIfThereAreCrownsInDuel(int _duelSquareIndex);

	UFUNCTION()
	void ResetDuels();
	
	TArray<std::pair<int, std::pair<int, EDuelType>>> ParsePotsInfo(int _duelSquareIndex);

private:
	EDuelType DuelType;

	int SavedPot = 0;

	const float MIN_HALF_BET = 5;
	const float MIN_FULL_BET = 10;
};

