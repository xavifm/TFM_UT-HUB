#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "./ScoreDto.h"
#include "TransactionDto.h"
#include "ScoreDatabase.generated.h"

UCLASS()
class PARTYJUNGLE_API AScoreDatabase : public AActor
{
	GENERATED_BODY(Blueprintable)
	
public:	
	AScoreDatabase();

    UFUNCTION(BlueprintCallable, Category = "Score")
    TMap<int, UScoreDto*> GetScoreList() const;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Registry")
    TArray<UTransactionDto*> TransactionsRegistry;

    UFUNCTION(BlueprintCallable, Category = "Registry")
    void AddTransactionToRegistry(int _team, int _coins, int _crowns);

    UFUNCTION(BlueprintCallable, Category = "Registry")
    void SendTransactionsAndScoresToInstance();

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
    const float MAX_PLAYER_COINS = 999999;
    const float MAX_PLAYER_CROWNS = 999999;
};
