#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <PartyJungle/Minigame/CrossInfo/MinigameDataGameInstance.h>
#include "MinigameLogic.generated.h"

UCLASS()
class PARTYJUNGLE_API AMinigameLogic : public AActor
{
    GENERATED_BODY()

public:
    AMinigameLogic();

protected:
    virtual void BeginPlay() override;

public:

    UPROPERTY()
    UMinigameDataGameInstance* GameInstance;

    UPROPERTY()
    TMap<int, int> TeamMinigameScores;

    UPROPERTY()
    TMap<int, bool> TeamsReady;

    UPROPERTY()
    bool MinigameStarted;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters")
    float StartTime = 5;

    UFUNCTION()
    virtual void StartMinigame(int _startTime);

    UFUNCTION()
    virtual bool CheckIfTheMinigameHasFinished();

    UFUNCTION()
    int CalculateWinner(bool _isChallenge);

    UFUNCTION()
    virtual void ShowWinnerScene(int _endMinigameTime, int _winner);

    UFUNCTION()
    virtual void FinishMinigame(int _winner, bool _draw);

    UFUNCTION()
    void SetTeamReady(int _team);

private:
    void InitializeMinigameInfoForDuel();
};

