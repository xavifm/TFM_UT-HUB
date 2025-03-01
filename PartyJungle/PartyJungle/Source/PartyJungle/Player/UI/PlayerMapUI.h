#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "../Minion/Minion.h"
#include "PartyJungle/Player/Scores/ScoreDatabase.h"
#include "PartyJungle/Map/MapDatabase.h"
#include "PlayerMapUI.generated.h"

UCLASS()
class PARTYJUNGLE_API UPlayerMapUI : public UUserWidget
{
    GENERATED_BODY()

private:
    UPROPERTY()
    AScoreDatabase* ScoresDb;

    UPROPERTY()
    AMapDatabase* MapDb;

public:
    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void InitializeUI(AScoreDatabase* InScores, AMapDatabase* InMapDb);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void UpdateUIScore(AScoreDatabase* ScoresList);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void SwitchTurnUI(int Team);

    UFUNCTION(BlueprintCallable, Category = "UI")
    void UpdateCoins(int Team, int Quantity);

    UFUNCTION(BlueprintCallable, Category = "UI")
    void UpdateCrowns(int Team, int Quantity);
};
