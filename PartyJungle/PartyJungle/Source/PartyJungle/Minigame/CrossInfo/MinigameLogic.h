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

UENUM(BlueprintType)
enum class ETeamsMode : uint8
{
    NOTEAM UMETA(DisplayName = "NO_TEAMS"),
    TWO_VS_TWO UMETA(DisplayName = "TWO_VS_TWO"),
    ONE_VS_THREE UMETA(DisplayName = "ONE_VS_THREE"),
    ANY UMETA(DisplayName = "ANY")
};

UCLASS()
class PARTYJUNGLE_API AMinigameLogic : public AActor
{
    GENERATED_BODY()

public:
    AMinigameLogic();
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Minigame Name")
    FText GameTitle;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Minigame Type")
    EMinigameType MinigameType;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Minigame Type")
    ETeamsMode TeamMode;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Minigame Assets")
    TArray<AActor*> MinigameActors;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Minigame Camera")
    AActor* Camera;
    
    UPROPERTY(EditAnywhere)
    int MinigameMoney;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Minigame Camera")
    ATeamsGenerator* TeamsGenerator;
    
    UPROPERTY()
    UMinigameDataGameInstance* GameInstance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AMapMenuCamera* MapMenuCamera;

    UPROPERTY()
    TMap<int, AMinion*> PlayingMinionsDuel;
    
    TMap<int, TArray<AMinion*>> PlayingMinionsTeamMinigame;

    UPROPERTY()
    TMap<int, AMinion*> WinnerMinions;

    UPROPERTY()
    TMap<int32, int32> TeamMinigameScores;

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
    
    TArray<int32> CalculateWinner();
    int CaculateDuelWinner();
    
    UFUNCTION()
    TArray<int32> CalculateTeamMinigameWinners();
    
    UFUNCTION()
    virtual void ShowWinnerScene(int _endMinigameTime, TArray<int32> _winners);
    
    UFUNCTION()
    virtual void FinishMinigame(TArray<int32> _winners);

    UFUNCTION(BlueprintCallable)
    virtual void SetTeamScore(int32 _team, int32 _score);

    UFUNCTION(BlueprintCallable)
    void SetTeamReady(int _team);

    UFUNCTION()
    void BeginMinigame();

    UFUNCTION()
    void DelayedSceneSwitch();

    UFUNCTION(BlueprintImplementableEvent)
    void ShowStartScreenSequence();

    UFUNCTION(BlueprintImplementableEvent)
    void ShowEndScreenSequence(int _winner);

    UFUNCTION(BlueprintImplementableEvent)
    void ShowTeamEndScreenSequence(const FText& Message);
    
protected:
    UFUNCTION(BlueprintCallable, Category = "Minigame_functions")
    virtual void ResetMinigameScene();
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float BASE_MINIGAME_TIME = 30;
    
private:
    UFUNCTION()
    void InitializeMinigameInfoForDuel();
    
    UFUNCTION()
    void InitializeMinigameInfoForTeam();
    
    UFUNCTION()
    void StartMinigameScoresAndReadyInfo(TArray<AMinion*> _minions);

    UPROPERTY()
    TArray<int32> Winners;
    
    bool MinigameFinished;
    FTimerHandle TimerHandle;

    const int SWITCH_SCENE_TIMER = 11.0f;
};

