#include "Dice.h"

ADice::ADice()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ADice::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADice::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int ADice::RollTheDice(bool _reduced)
{
	if (!_reduced)
		DiceValue = FMath::RandRange(RANDOM_NUMBER_MIN, RANDOM_NUMBER_MAX);
	else
		DiceValue = FMath::RandRange(RANDOM_NUMBER_MIN, RANDOM_NUMBER_MAX / 2);
	
	return DiceValue;
}

