#include "Square.h"
#include "SquareOptional.h"
#include "SquareKeepCrowns.h"
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

bool ASquare::CheckIfSquareIsBlocked(AMinion* _minion)
{
	bool blockedQuery = false;

	for (AMinion* otherMinion : MinionsList)
	{
		if (otherMinion && otherMinion != _minion && otherMinion->Team == _minion->Team)
		{
			blockedQuery = true;
			break;
		}
	}

	return blockedQuery;
}

TMap<int, TArray<AMinion*>> ASquare::GetDisposableMinions()
{
	TMap<int, TArray<AMinion*>> OutMap;
	TMap<int, TArray<AMinion*>> TeamToMinionsMap;

	for (AMinion* Minion : MinionsList)
	{
		if (Minion)
		{
			int TeamId = static_cast<int>(Minion->Team);
			TeamToMinionsMap.FindOrAdd(TeamId).Add(Minion);
		}
	}

	for (const TPair<int, TArray<AMinion*>>& Pair : TeamToMinionsMap)
	{
		if (Pair.Value.Num() >= 2)
			OutMap.Add(Pair.Key, Pair.Value);
	}

	return OutMap;
}

bool ASquare::SwitchDuelSquare(bool _toggle)
{
	bool operationDone = true;

	IsChallengeEnabled = _toggle;

	DisposableMinionsList = GetDisposableMinions();

	if(DisposableMinionsList.Num() > 0)
		operationDone = false;

	return operationDone;
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

