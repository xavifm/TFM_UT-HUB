#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "./ChallengeDto.h"
#include "ChallengeDatabase.generated.h"

UCLASS()
class PARTYJUNGLE_API AChallengeDatabase : public AActor
{
	GENERATED_BODY()
	
public:	

    UFUNCTION(BlueprintCallable, Category = "Challenge")
    void RegisterDuel(int32 Attacker, int32 Victim, int32 Winner, int32 BetStyle, int32 Coins, int32 Crowns = 0);

    UFUNCTION(BlueprintCallable, Category = "Challenge")
    void SendRegistryToInstance();

private:
    UPROPERTY()
    TArray<UChallengeDto*> ChallengesRegistry;
};
