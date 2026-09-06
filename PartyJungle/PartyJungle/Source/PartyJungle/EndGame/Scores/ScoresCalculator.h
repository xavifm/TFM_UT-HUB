#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <PartyJungle/Player/Scores/ScoreDto.h>
#include <PartyJungle/Player/Scores/TransactionDto.h>
#include <PartyJungle/Challenge/ChallengeDto.h>

#include "PartyJungle/Challenge/MinigameDto.h"
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
    TArray<UScoreDto*> Scores;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UTransactionDto*> TransactionsRegistry;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UChallengeDto*> ChallengesRegistry;
    
    /*UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMinigameDto*> MinigamesRegistry;*/
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UChallengeDto*> m_DuelsRegistry; //!< Array with the data of the Duels.

    UFUNCTION(BlueprintCallable)
    void InitializeInfo();

    UFUNCTION(BlueprintCallable)
    void AddCrownToTeam(int _team);

    UFUNCTION(BlueprintCallable)
    int GetBestDuelingTeam();

    UFUNCTION(BlueprintCallable)
    int GetBestMinigameTeam();

    UFUNCTION(BlueprintCallable)
    int GetTeamWithHigherCoins();

    UFUNCTION(BlueprintCallable)
    int CompensationCrown();

    UFUNCTION(BlueprintCallable)
    int GetWinnerTeam();
};

