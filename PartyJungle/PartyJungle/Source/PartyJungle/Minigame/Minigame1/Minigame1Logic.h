#pragma once

#include "CoreMinimal.h"
#include "../CrossInfo/MinigameLogic.h"
#include "AirCannon.h"
#include "CannonMinigameCamera.h"
#include "../../Player/Map/MapMenuCamera.h"
#include "Minigame1Logic.generated.h"


// ToDo Capy: Treure durant el refactor, un cop ja no es faci servir a cap lloc.
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
	void FinishMinigame(TArray<int32> _winners) override;
	void SetTeamScore(int _team, int _score) override;
	void ResetMinigameScene() override;
	virtual void BeginPlay() override;
	void Tick(float DeltaTime);

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

private:
	FTimerHandle TimerHandle;
	
	float GameTime = 0.0f;
};
