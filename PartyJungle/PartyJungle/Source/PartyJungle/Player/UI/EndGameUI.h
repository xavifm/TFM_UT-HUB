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

	UPROPERTY()
	AScoresCalculator* ScoresCalculator;

	UFUNCTION()
	TArray<UScoreDto*> GetPlayerScores();

	UFUNCTION()
	TArray<UTransactionDto*> GetTransactionRegistry();

	UFUNCTION()
	TArray<UChallengeDto*> GetChallengesRegistry();
	
};
