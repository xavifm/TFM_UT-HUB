#include "./Item.h"

AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AItem::BeginPlay()
{
	Super::BeginPlay();
	
}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AItem::ExecuteItem(AMinion* _minion)
{
}

FString AItem::GetName()
{
	return ItemName;
}

FString AItem::GetDescription()
{
	return ItemDescription;
}

