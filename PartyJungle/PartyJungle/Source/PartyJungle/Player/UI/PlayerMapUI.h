#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "../Minion/Minion.h"
#include "PartyJungle/Player/Scores/ScoreDatabase.h"
#include <PartyJungle/Challenge/ChallengeInformation.h>
#include "PartyJungle/Map/MapDatabase.h"
#include <PartyJungle/PlayFabAPI/PlayFabAPI.h>
#include "PlayerMapUI.generated.h"

UCLASS()
class PARTYJUNGLE_API UPlayerMapUI : public UUserWidget
{
    GENERATED_BODY()

private:

public:
    UPROPERTY(VisibleAnywhere)
    AScoreDatabase* ScoresDb;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    APlayFabAPI* PlayFabAPI;

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void InitializeUI(AScoreDatabase* InScores, AMapDatabase* InMapDb);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void UpdateUIScore(AScoreDatabase* ScoresList);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void SwitchTurnUI(int Team);

    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    void ShowTextInScreen(const FString& Text, float Time);

    UFUNCTION(BlueprintImplementableEvent)
    void HideInScreenText();

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void SwitchScoresVisibility(bool IsVisible);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void SwitchLegendVisibility(bool IsVisible);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void SwitchChallengeVisibility(bool IsVisible);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void SwitchCrownStoreVisibility(bool IsVisible);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void SwitchCrownSavePlaceVisibility(bool IsVisible);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void UpdateDuelScreenInfo(int _coins1, int _coins2, int _crowns1, int _crowns2, EDuelType _duelType);

    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    void SwitchMinigame1UIVisibility(bool IsVisible);

    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "UI")
    void UpdateM1SliderBarValues(int _index, float _value);


    UFUNCTION(BlueprintCallable, Category = "UI")
    void UpdateCoins(int Team, int Quantity);

    UFUNCTION(BlueprintCallable, Category = "UI")
    void UpdateCrowns(int Team, int Quantity);
};
