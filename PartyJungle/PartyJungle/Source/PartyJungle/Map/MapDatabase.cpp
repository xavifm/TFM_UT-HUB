#include "./MapDatabase.h"
#include <Kismet/GameplayStatics.h>

AMapDatabase::AMapDatabase()
{
	PrimaryActorTick.bCanEverTick = true;

}

TArray<AMinion*> AMapDatabase::GetMinions(int _team)
{
	if (MinionsSortedByTeams.Contains(_team))
		return MinionsSortedByTeams[_team];

	return TArray<AMinion*>();
}

TArray<AMinion*> AMapDatabase::GetAllMinions()
{
	return Minions;
}

AMinion* AMapDatabase::GetMinion(int _team, int _index)
{
	if (MinionsSortedByTeams.Contains(_team))
	{
		auto& teamMinions = MinionsSortedByTeams[_team];

		if (_index >= 0 && _index < teamMinions.Num())
		{
			return teamMinions[_index];
		}
	}

	return nullptr;
}


void AMapDatabase::BeginPlay()
{
	Super::BeginPlay();
	InitializeDatabase();
}

void AMapDatabase::InitializeDatabase() 
{
	Minions = GetAllSceneMinions();
	MinionsSortedByTeams = GetSortedMinions();
}

TArray<AMinion*> AMapDatabase::GetAllSceneMinions() 
{
	TArray<AActor*> FoundActors;
	TArray<AMinion*> MinionsQuery;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMinion::StaticClass(), FoundActors);

	for (AActor* Actor : FoundActors)
	{
		if (AMinion* Minion = Cast<AMinion>(Actor))
		{
			MinionsQuery.Add(Minion);
		}
	}

	return MinionsQuery;
}

TMap<int, TArray<AMinion*>> AMapDatabase::GetSortedMinions() 
{
	TMap<int, TArray<AMinion*>> SortedMinions;

	for (AMinion* Minion : Minions)
	{
		if (Minion)
		{
			int32 TeamIndex = static_cast<int32>(Minion->Team);

			if (!SortedMinions.Contains(TeamIndex))
				SortedMinions.Add(TeamIndex, TArray<AMinion*>());

			SortedMinions[TeamIndex].Add(Minion);
		}
	}

	return SortedMinions;
}

