#include "Square.h"
#include "SquareOptional.h"
#include <PartyJungle/Player/Map/MapMenuCamera.h>

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
	TArray<ASquareOptional*> paths;

	for (ASquare* square : ConnectedNodes) 
	{
		ASquareOptional* squareQuery = (ASquareOptional*) square;

		if (squareQuery)
			paths.Add(squareQuery);
	}

	if (paths.Num() > 0 && paths[0]->Camera)
		paths[0]->Camera->SwitchPathMenu(true, paths);
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

bool ASquare::ExecuteEvent(AMinion* _minion)
{
	return false;
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

