#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <PartyJungle/Player/Scores/ScoreDto.h>
#include <PartyJungle/Player/Scores/TransactionDto.h>
#include <PartyJungle/Challenge/ChallengeDto.h>
#include "ScoresCalculator.generated.h"

UCLASS()
class PARTYJUNGLE_API AScoresCalculator : public AActor
{
    GENERATED_BODY()

public:
    AScoresCalculator();

protected:
    virtual void BeginPlay() override;

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<int32, UScoreDto*> Scores;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UTransactionDto*> TransactionsRegistry;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UChallengeDto*> ChallengesRegistry;

    UFUNCTION(BlueprintCallable)
    void InitializeInfo();

    UFUNCTION(BlueprintCallable)
    int GetBestDuelingTeam();

    UFUNCTION(BlueprintCallable)
    int GetWorstDuelingTeam();

    UFUNCTION(BlueprintCallable)
    int CompensationCrown();

    UFUNCTION(BlueprintCallable)
    int GetWinnerTeam();
};

