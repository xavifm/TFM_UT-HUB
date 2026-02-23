#pragma once

#include "CoreMinimal.h"
#include "../CrossInfo/MinigameLogic.h"
#include "../Minigame3/PlayerPalette.h"
#include "Minigame3Logic.generated.h"

UCLASS()
class PARTYJUNGLE_API AMinigame3Logic : public AMinigameLogic
{
	public:
	
	GENERATED_BODY()
	AMinigame3Logic();
	
	virtual void StartMinigame(int _startTime) override;
	virtual void ShowWinnerScene(int32 _endMinigameTime, TArray<int32> _winners) override;
	virtual void FinishMinigame(TArray<int32> _winners) override;
	virtual void ResetMinigameScene() override;
	
	UFUNCTION(BlueprintImplementableEvent)
	void SwitchBallMovement(bool _mode);
	
	UFUNCTION(BlueprintImplementableEvent)
	void ResetBallVelocity();
	
	UFUNCTION(BlueprintImplementableEvent)
	void ResetBallPosition();
	
	UFUNCTION(BlueprintImplementableEvent)
    void SwitchScore(int _team, int _score);
	
	UFUNCTION(BlueprintCallable)
	void SumScore(int _team);
	
	void SetupPlayersInfo();
	void SetTeamScores();
	void StartMinigamePlay();
	void StopMinigame();
	void Tick(float DeltaTime);
	
	int ScoreTeamOne = 0;
	int ScoreTeamTwo = 0;
	
	UPROPERTY(EditAnywhere)
	TArray<APlayerPalette*> TeamOne;
	UPROPERTY(EditAnywhere)
	TArray<APlayerPalette*> TeamTwo;
	
	FTimerHandle TimerHandle;
	
	const float BASE_MINIGAME_TIME = 30;
	const float BASE_BALL_VELOCITY = 1000;
	bool MinigameRunning = false;
	float MinigameTime = BASE_MINIGAME_TIME;
};
