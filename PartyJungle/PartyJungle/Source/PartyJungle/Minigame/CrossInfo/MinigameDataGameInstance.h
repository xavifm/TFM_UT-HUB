#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include <PartyJungle/Player/Minion/Minion.h>
#include <PartyJungle/Challenge/ChallengeDto.h>
#include <PartyJungle/Player/Scores/TransactionDto.h>
#include <PartyJungle/Player/Scores/ScoreDto.h>
#include "MinigameDataGameInstance.generated.h"

/**
 * 
 */

class AMapMenuCamera;

UCLASS()
class PARTYJUNGLE_API UMinigameDataGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Scores", Instanced)
	TArray<UScoreDto*> Scores;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<UTransactionDto*> TransactionsRegistry;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<UChallengeDto*> ChallengesRegistry;
};
