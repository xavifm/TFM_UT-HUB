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
	DiceValue = FMath::RandRange(5, 5);
	return DiceValue;
}

