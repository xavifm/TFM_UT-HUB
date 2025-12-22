#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <PartyJungle/Minigame/CrossInfo/MinigameDataGameInstance.h>
#include "./TeamsGenerator.h"
#include "MinigameLogic.generated.h"

UENUM(BlueprintType)
enum class EMinigameType : uint8
{
    DUEL UMETA(DisplayName = "DUEL"),
    TEAM_MINIGAME UMETA(DisplayName = "TEAM MINIGAME"),
};

UCLASS()
class PARTYJUNGLE_API AMinigameLogic : public AActor
{
    GENERATED_BODY()

public:
    AMinigameLogic();
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Minigame Type")
    EMinigameType MinigameType;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Minigame Assets")
    TArray<AActor*> MinigameActors;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Minigame Camera")
    AActor* Camera;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Minigame Camera")
    ATeamsGenerator* TeamsGenerator;
    
    UPROPERTY()
    UMinigameDataGameInstance* GameInstance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AMapMenuCamera* MapMenuCamera;

    UPROPERTY()
    TMap<int, AMinion*> PlayingMinions;
    TMap<int, TArray<AMinion*>> PlayingTeamMinions;

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
    TArray<int32> CalculateWinner();
    int CaculateDuelWinner();
    TArray<int32> CalculateTeamMinigameWinners();

    UFUNCTION()
    virtual void ShowWinnerScene(int _endMinigameTime, TArray<int32> _winners);

    UFUNCTION()
    virtual void FinishMinigame(TArray<int32> _winners);

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
    UFUNCTION()
    void InitializeMinigameInfoForDuel();

    TArray<int32> Winners;
    bool MinigameFinished;
    FTimerHandle TimerHandle;

    const int SWITCH_SCENE_TIMER = 11.0f;
};

