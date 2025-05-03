#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include <PartyJungle/Player/Scores/ScoreDto.h>
#include <PartyJungle/Player/Scores/TransactionDto.h>
#include <PartyJungle/Challenge/ChallengeDto.h>
#include "../../EndGame/Scores/ScoresCalculator.h"
#include "EndGameUI.generated.h"

UCLASS()
class PARTYJUNGLE_API UEndGameUI : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	AScoresCalculator* ScoresCalculator;

	UFUNCTION(BlueprintCallable)
	void InitializeRegistry();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void AddScoreToList(UScoreDto* _score, bool _debug = false);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void AddChallengeToList(UChallengeDto* _challenge, bool _debug = false);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void AddTransactionToList(UTransactionDto* _transaction, bool _debug = false);


private:

	UFUNCTION()
	void StartScoreList();

	UFUNCTION()
	void StartTransactionRegistry();

	UFUNCTION()
	void StartChallengeList();
};
