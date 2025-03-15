#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Player/Minion/Minion.h"
#include "ChallengeInformation.generated.h"

UENUM(BlueprintType)
enum class EDuelType : uint8
{
	ALL_IN_COINS UMETA(DisplayName = "All In Coins"),
	HALF_COINS UMETA(DisplayName = "Half Coins"),
	ALL_IN_VS_ST UMETA(DisplayName = "All In Vs St")
};

UCLASS()
class PARTYJUNGLE_API AChallengeInformation : public AActor
{
	GENERATED_BODY()

public:
	AChallengeInformation();

public:
	//UPROPERTY()
	//class UChallengeDatabase* ChallengeRegistry;

	UPROPERTY()
	class AMinion* Attacker;

	UPROPERTY()
	class AMinion* Victim;

	
	UFUNCTION(BlueprintCallable)
	void SetUpDuelInfo(AMinion* _attacker, AMinion* _victim);

	UFUNCTION(BlueprintCallable)
	EDuelType GetDuelType();

	UFUNCTION(BlueprintCallable)
	EDuelType SwitchDuelType(int _direction);

	UFUNCTION(BlueprintCallable)
	int GetBetCoinsQuantity(int _minion);

	UFUNCTION(BlueprintCallable)
	int GetBetCrownsQuantity(int _minion);

private:
	EDuelType DuelType;
};

