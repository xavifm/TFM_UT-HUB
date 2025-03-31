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
    bool CheckIfTheMinigameHasFinished();

    UFUNCTION()
    int CalculateWinner();

    UFUNCTION()
    virtual void ShowWinnerScene(int _endMinigameTime, int _winner);

    UFUNCTION()
    virtual void FinishMinigame(int _winner);

    UFUNCTION()
    virtual void SetTeamScore(int _team, int _score);

    UFUNCTION()
    void SetTeamReady(int _team);

    UFUNCTION()
    void BeginMinigame();

protected:
    UFUNCTION(BlueprintCallable, Category = "Minigame_functions")
    virtual void ResetMinigameScene();

private:
    void InitializeMinigameInfoForDuel();

    bool MinigameFinished;
};

