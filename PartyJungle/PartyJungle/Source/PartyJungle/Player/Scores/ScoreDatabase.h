#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "./ScoreDto.h"
#include "ScoreDatabase.generated.h"

UCLASS()
class PARTYJUNGLE_API AScoreDatabase : public AActor
{
	GENERATED_BODY(Blueprintable)
	
public:	
	AScoreDatabase();

    UFUNCTION(BlueprintCallable, Category = "Score")
    TMap<int, UScoreDto*> GetScoreList() const;

    UFUNCTION(BlueprintCallable, Category = "Score")
    UScoreDto* GetScore(int PlayerID) const;

    UFUNCTION(BlueprintCallable, Category = "Score")
    void UpdateGlobalPositions();

    UFUNCTION(BlueprintCallable, Category = "Score")
    void UpdateTotalCoins(int PlayerID, int Quantity);

    UFUNCTION(BlueprintCallable, Category = "Score")
    void UpdateCrowns(int PlayerID, int Quantity);

protected:
	virtual void BeginPlay() override;

    void InitializeScores();

private:
    UPROPERTY()
    TMap<int, UScoreDto*> Scores;

    const int MAX_TEAMS_NUMBER = 4;
};
