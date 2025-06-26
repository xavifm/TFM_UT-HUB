#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapDatabase.generated.h"

class AMinion;

UCLASS()
class PARTYJUNGLE_API AMapDatabase : public AActor
{
	GENERATED_BODY()
	
public:	
	AMapDatabase();
	TArray<AMinion*> GetMinions(int _team);
	TArray<AMinion*> GetAllMinions();
	AMinion* GetMinion(int _team, int _index);


protected:
	virtual void BeginPlay() override;

	void InitializeDatabase();

	TArray<AMinion*> GetAllSceneMinions();

	TMap<int, TArray<AMinion*>> GetSortedMinions();

private:
	TArray<AMinion*> Minions;
	TMap<int, TArray<AMinion*>> MinionsSortedByTeams;
};
