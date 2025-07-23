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

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AMapMenuCamera* MapMenuCamera;

    UPROPERTY()
    TMap<int, AMinion*> PlayingMinions;

    UPROPERTY()
    TMap<int, AMinion*> WinnerMinions;

    UPROPERTY()
    TMap<int, int> TeamMinigameScores;

    UPROPERTY()
    TMap<int, bool> TeamsReady;

    UPROPERTY()
    bool MinigameStarted;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters")
    float StartTime = 6.5f;

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

    UFUNCTION()
    void DelayedSceneSwitch();

    UFUNCTION(BlueprintImplementableEvent)
    void ShowStartScreenSequence();

    UFUNCTION(BlueprintImplementableEvent)
    void ShowEndScreenSequence(int _winner);

protected:
    UFUNCTION(BlueprintCallable, Category = "Minigame_functions")
    virtual void ResetMinigameScene();

private:
    void InitializeMinigameInfoForDuel();

    int Winner;
    bool MinigameFinished;
    FTimerHandle TimerHandle;

    const int SWITCH_SCENE_TIMER = 11.0f;
};

