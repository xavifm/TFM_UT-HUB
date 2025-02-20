#include "Square.h"

ASquare::ASquare()
{
	PrimaryActorTick.bCanEverTick = true;

}

ASquare* ASquare::GetNextNode(int _pathIndex)
{
	ASquare* squareQuery = ConnectedNodes[_pathIndex];
	return squareQuery;
}

void ASquare::OpenChooseMenu()
{
}

void ASquare::CloseChooseMenu(int _pathIndex)
{
}

void ASquare::AddMinion(AMinion* _minion)
{
	if (_minion && !MinionsList.Contains(_minion))
		MinionsList.Add(_minion);
}

void ASquare::RemoveMinion(AMinion* _minion)
{
	if (_minion && MinionsList.Contains(_minion))
		MinionsList.Remove(_minion);
}


ASquare* ASquare::GetNextSquare()
{
	if(ConnectedNodes.Num() > 0)
	{
		if (ConnectedNodes.Num() == 1)
			return GetNextNode();
		else
			OpenChooseMenu();
	}

	return nullptr;
}

void ASquare::ResetSquare()
{
}

void ASquare::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASquare::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

