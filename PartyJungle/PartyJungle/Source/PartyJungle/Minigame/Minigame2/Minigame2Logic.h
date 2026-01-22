// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../CrossInfo/MinigameLogic.h"
#include "./VictimCharacter.h"
#include "./CocoCannon.h"
#include "Minigame2Logic.generated.h"

UCLASS()
class PARTYJUNGLE_API AMinigame2Logic : public AMinigameLogic
{
	GENERATED_BODY()
	
public:	
	AMinigame2Logic();
	
	UPROPERTY(EditAnywhere)
	TArray<AVictimCharacter*> Victims;
	
	UPROPERTY(EditAnywhere)
	ACocoCannon* Attacker;
	
	UFUNCTION(BlueprintCallable)
	void CheckIfAllVictimsAreDeadToStopMinigame();

protected:
	void Tick(float DeltaTime);
	void SetTeamScores();
	void StopMinigame();
	void StartMinigame(int _startTime) override;
	void StartMinigamePlay();
	void FinishMinigame(TArray<int32> _winners) override;
	void SetTeamScore(int _team, int _score) override;
	void ResetMinigameScene() override;
	void SetupRunnersInfo();
	
private:
	FTimerHandle TimerHandle;
	
	const float BASE_MINIGAME_TIME = 30;
	bool MinigameRunning = false;
	float MinigameTime = BASE_MINIGAME_TIME; 
	
};
