#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <PartyJungle/Player/UI/PlayerMapUI.h>
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
	void HandleEndRound(bool _minigame = false);

	UFUNCTION()
	void StartNextRound();

	UFUNCTION()
	int GetRoundsLeft();

	UFUNCTION()
	void FinishGame();

	UFUNCTION()
	void StartEndRoundMinigame();

	UFUNCTION()
	void AssignMapUI(UPlayerMapUI* _mapUI);

	const int MIN_ROUNDS_ANNOUNCED = 3;

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere, Category = "Rounds")
	int CurrentRound;

	UPROPERTY(EditAnywhere, Category = "Rounds")
	int MaxRounds;
	
	UPROPERTY()
	UPlayerMapUI* MapUI;
};
