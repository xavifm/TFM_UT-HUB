#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <PartyJungle/Player/UI/PlayerMapUI.h>
#include <PartyJungle/Challenge/ChallengeInformation.h>
#include "RoundsManager.generated.h"

UCLASS()
class PARTYJUNGLE_API ARoundsManager : public AActor
{
	GENERATED_BODY()

public:
	ARoundsManager();

	UFUNCTION()
	int GetCurrentRound();

	UFUNCTION()
	TArray<bool> HandleEndRound(bool _minigame = false);

	UFUNCTION()
	void StartNextRound();

	UFUNCTION()
	int GetRoundsLeft();

	UFUNCTION()
	void FinishGame();

	UFUNCTION()
	bool CheckForDuelMinigame();
	
	UFUNCTION()
	bool CheckForEndRoundMinigame();

	UFUNCTION()
	void AssignMapUI(UPlayerMapUI* _mapUI);

	const int MIN_ROUNDS_ANNOUNCED = 3;

	UPROPERTY(EditAnywhere, Category = "Rounds")
	bool GameFinished;
	
	UPROPERTY(EditAnywhere, Category = "Rounds")
	bool EndRoundMinigameAvailable;

	UPROPERTY(EditAnywhere, Category = "Rounds Audio")
	AAudioManager* AudioManager;

	UPROPERTY(EditAnywhere, Category = "Challenge Info")
	AChallengeInformation* ChallengeInfo;

	UPROPERTY(EditAnywhere, Category = "Rounds")
	int MaxRounds;

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere, Category = "Rounds")
	int CurrentRound;
	
	UPROPERTY()
	UPlayerMapUI* MapUI;

	UPROPERTY(EditAnywhere, Category = "ScoresDB")
	AScoreDatabase* ScoresDB;

	UPROPERTY(EditAnywhere, Category = "ChallengeDB")
	AChallengeDatabase* ChallengeDB;

	FTimerHandle TimerHandle;
	const FString END_GAME_SCENE_NAME = "EndGameScene";

	const FString LAST_ROUNDS_SFX = "LastRoundsSFX";

	const float LAST_ROUNDS_SFX_VOLUME = 0.5f;
};
