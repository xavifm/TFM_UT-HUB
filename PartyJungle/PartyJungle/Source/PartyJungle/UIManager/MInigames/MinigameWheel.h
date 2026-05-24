#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <PartyJungle/Player/UI/PlayerMapUI.h>
#include "MinigameWheel.generated.h"

UCLASS()
class PARTYJUNGLE_API AMinigameWheel : public AActor
{
	GENERATED_BODY()
	
public:
	AMinigameWheel();
	void InitializeUI(UPlayerMapUI* _ui) { PlayerMapUI = _ui; }
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	AAudioManager* AudioManager;
	
	void SwitchUiVisibility(bool _visibility);
	
	int GetSpinValue() { return WheelValue; }
	
	void InitializeUiValues(TArray<FText> _values);
	void SpinWheel(float _time);
	void SpinStep();
	void StopSpin();

private:
	UPlayerMapUI* PlayerMapUI;
	TArray<FText> Values;
	bool Spinning = false;
	float SpinningTime = 0.0f;
	int WheelValue = 0;
	int OldWheelValue = -1;
	
	FTimerHandle SpinStepTimerHandle;
	FTimerHandle SpinStopTimerHandle;
	
	const float WHEEL_SPAN_TIME = 0.2f;
	int MAX_SCREEN_ELEMENTS = 5;
};
