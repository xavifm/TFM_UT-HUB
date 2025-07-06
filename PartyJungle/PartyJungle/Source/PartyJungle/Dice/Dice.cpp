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

int ADice::RollTheDice()
{
	DiceValue = FMath::RandRange(RANDOM_NUMBER_MIN, RANDOM_NUMBER_MAX);
	return DiceValue;
}

