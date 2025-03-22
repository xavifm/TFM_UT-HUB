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

	UFUNCTION(BlueprintCallable, Category = "Cannons_functions")
	void SetCameraTarget();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cannons")
	ACannonMinigameCamera* MinigameCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cannons")
	TArray<AAirCannon*> AirCannons;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cannons_parameters")
	float CannonChargeTime;

	void StartMinigame(int _startTime) override;

	void SetTeamScore(int _team, int _score) override;

	UFUNCTION(BlueprintCallable, Category = "Cannons_functions")
	void SetupAirCannonsInfo();

	UFUNCTION(BlueprintCallable, Category = "Cannons_functions")
	void StartCannonsCharge(float _time);
};
