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
	ALL_IN_VS_ST UMETA(DisplayName = "All In Vs St")
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Active Duels")
	TArray<ASquare*> SquaresWithDuelsInRound;
	
	UFUNCTION(BlueprintCallable)
	void SetUpDuelInfo(TArray<AMinion*> _minions);
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
	int GetBetCrownsQuantity(int _team);

private:
	EDuelType DuelType;

	const float MIN_HALF_BET = 5;
	const float MIN_FULL_BET = 10;
};

