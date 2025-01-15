#include "PlayerMapUI.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "./PlayerMapUI.h"


void UPlayerMapUI::RollAction(int _movements)
{
	InitializeMinionList();

	AssignMinionMovements(MinionsList[0], _movements);
}

void UPlayerMapUI::AssignMinionMovements(AMinion* _targetMinion, int _movements)
{
	if (_targetMinion)
		_targetMinion->SetMinionsMovements(_movements);
}

void UPlayerMapUI::InitializeMinionList()
{
	if (MinionsList.Num() <= 0)
	{
		TArray<AActor*> FoundActors;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMinion::StaticClass(), FoundActors);

		for (AActor* Actor : FoundActors)
		{
			if (AMinion* Minion = Cast<AMinion>(Actor))
			{
				MinionsList.Add(Minion);
			}
		}
	}
}
