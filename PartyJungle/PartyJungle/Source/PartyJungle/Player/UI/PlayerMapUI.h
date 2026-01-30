#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "../Minion/Minion.h"
#include "PartyJungle/Player/Scores/ScoreDatabase.h"
#include <PartyJungle/Challenge/ChallengeInformation.h>
#include "PartyJungle/Map/MapDatabase.h"
#include "PlayerMapUI.generated.h"

UCLASS()
class PARTYJUNGLE_API UPlayerMapUI : public UUserWidget
{
    GENERATED_BODY()

private:

public:
    UPROPERTY(VisibleAnywhere)
    AScoreDatabase* ScoresDb;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    int WheelValue = 0;

    TArray<std::pair<int, std::pair<int, EDuelType>>> SavedPotElements;

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void InitializeUI(AScoreDatabase* InScores, AMapDatabase* InMapDb);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void UpdateUIScore(AScoreDatabase* ScoresList);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void SetupUIPots(int MinPot, int MaxPot);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void InitializeRouletteElement(int RouletteSize, int Position, int Player, const FString& Option);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void SwitchRouletteVisibility(int Roulette, bool IsVisible);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void SwitchTurnUI(int Team);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void SwitchDuelTurnUI(int Team);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void SwitchUITeamVisibility(int Team, bool IsVisible);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void SwitchChallengePlayerUIVisibility(int Team, bool IsVisible);   

    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    void ShowTextInScreen(const FString& Text, float Time);

    UFUNCTION(BlueprintImplementableEvent)
    void HideInScreenText();

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void SwitchScoresVisibility(bool IsVisible);
    
    UFUNCTION(BlueprintImplementableEvent, Category = "UI_Minigame")
    void InitializeWheelValue(int _index, const FText& _value);
    
    UFUNCTION(BlueprintImplementableEvent, Category = "UI_Minigame")
    void SwitchWheelValueSelected(int _index, bool _selected);
    
    UFUNCTION(BlueprintImplementableEvent, Category = "UI_Minigame")
    void SwitchMinigameWheelVisibility(bool _visible);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void SwitchLegendVisibility(bool IsVisible);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void SwitchChallengeVisibility(bool IsVisible);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void SwitchItemThrowSelectorVisibility(bool IsVisible);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void SwitchItemThrowPlayer(int Player);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void SwitchChallengePopupVisibility(bool IsVisible);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void SwitchCrownStoreVisibility(bool IsVisible);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void SwitchCrownSavePlaceVisibility(bool IsVisible);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void UpdateDuelScreenInfo(int _coins, int _crowns, EDuelType _duelType, int _team);

    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    void SwitchMinigame1UIVisibility(bool IsVisible);
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "UI")
    void SwitchMinionDuelSelectionMenu(bool IsVisible);

    UFUNCTION(BlueprintCallable, Category = "UI")
    void UpdateCoins(int Team, int Quantity);

    UFUNCTION(BlueprintCallable, Category = "UI")
    void UpdateCrowns(int Team, int Quantity);
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "UI")
    void SwitchScoreListUI(bool _visible);
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "UI")
    void SetScore(int _position, int _team, int _coins, int _crowns);

    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "UI")
    void SpinWheelEvent(int WheelSize);

    UFUNCTION()
    int SpinWheel(int WheelSize);
    
    void InitializePotRoulette(int RouletteSize, TArray<std::pair<int, std::pair<int, EDuelType>>> PotElements);
};
