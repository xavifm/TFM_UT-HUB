#pragma once

#include "CoreMinimal.h"
#include "../CrossInfo/MinigameLogic.h"
#include "AirCannon.h"
#include "CannonMinigameCamera.h"
#include "Minigame1Logic.generated.h"

UCLASS()
class PARTYJUNGLE_API AMinigame1Logic : public AMinigameLogic
{
	GENERATED_BODY()

public:
	AMinigame1Logic();

	UFUNCTION(BlueprintCallable, Category = "Minigame_functions")
	void SetCameraTarget();

protected:
	void StartMinigame(int _startTime) override;
	void FinishMinigame(int _winner) override;
	void SetTeamScore(int _team, int _score) override;
	void ResetMinigameScene() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cannons")
	ACannonMinigameCamera* MinigameCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cannons")
	TArray<AAirCannon*> AirCannons;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cannons_parameters")
	float CannonChargeTime;

	UFUNCTION(BlueprintCallable, Category = "Cannons_functions")
	void SetupAirCannonsInfo();

	UFUNCTION(BlueprintCallable, Category = "Cannons_functions")
	void StartCannonsCharge(float _time);
};
