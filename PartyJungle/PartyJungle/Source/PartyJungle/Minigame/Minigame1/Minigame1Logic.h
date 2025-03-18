#pragma once

#include "CoreMinimal.h"
#include "../CrossInfo/MinigameLogic.h"
#include "AirCannon.h"
#include "Minigame1Logic.generated.h"

UCLASS()
class PARTYJUNGLE_API AMinigame1Logic : public AMinigameLogic
{
	GENERATED_BODY()

public:
	AMinigame1Logic();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cannons")
	TArray<AAirCannon*> AirCannons;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cannons_parameters")
	float CannonChargeTime;

	UFUNCTION(BlueprintCallable, Category = "Cannons_functions")
	void SetupAirCannonsInfo();

	void StartMinigame(int _startTime) override;

	UFUNCTION(BlueprintCallable, Category = "Cannons_functions")
	void StartCannonsCharge(float _time);
};
