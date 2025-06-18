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
	return FMath::RandRange(RANDOM_NUMBER_MAX, RANDOM_NUMBER_MAX);
}

