#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include <PartyJungle/Challenge/ChallengeDto.h>
#include <PartyJungle/Player/Scores/TransactionDto.h>
#include <PartyJungle/Player/Scores/ScoreDto.h>

#include "GameManager.generated.h"


// ToDo: Posar Scores, Transactions i Challenges a una classe de Player, i fer que que vagi amb Getters() i Setters().
UCLASS()
class UGameManager : public UObject
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY()
	int PlayersInBoard;

	UPROPERTY()
	int RoundsInBoard;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Scores", Instanced)
	TArray<UScoreDto*> Scores;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<UTransactionDto*> TransactionsRegistry;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<UChallengeDto*> ChallengesRegistry;
};
