#include "./MinigameWheel.h"

AMinigameWheel::AMinigameWheel()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AMinigameWheel::InitializeUiValues(TArray<FText> _values)
{
	Values.Empty(); 
	Values = _values;
	int index = 0;
	
	if (!PlayerMapUI)
		return;
	
	for (auto Element : Values)
	{
		PlayerMapUI->InitializeWheelValue(index, Element);
		index++;
	}
}

void AMinigameWheel::SpinWheel(float _time)
{
	Spinning = true;
	SpinningTime = _time;
	
	GetWorldTimerManager().SetTimer(
	SpinStepTimerHandle,
	this,
	&AMinigameWheel::SpinStep,
	WHEEL_SPAN_TIME,
	true
	);
	
	GetWorldTimerManager().SetTimer(
		SpinStopTimerHandle,
		this,
		&AMinigameWheel::StopSpin,
		SpinningTime,
		false
	);
}

void AMinigameWheel::SpinStep()
{
	if (!Spinning || Values.Num() == 0) return;

	PlayerMapUI->SwitchWheelValueSelected(WheelValue, false);
	WheelValue = (WheelValue + 1) % Values.Num();
	PlayerMapUI->SwitchWheelValueSelected(WheelValue, true);
	
}

void AMinigameWheel::StopSpin()
{
	Spinning = false;

	GetWorldTimerManager().ClearTimer(SpinStepTimerHandle);
	GetWorldTimerManager().ClearTimer(SpinStopTimerHandle);
}

