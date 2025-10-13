#pragma once

#include "CoreMinimal.h"
#include "./Base/Item.h"
#include "PartyJungle/Player/Map/MapMenuCamera.h"
#include "ReducedDice.generated.h"

UCLASS()
class PARTYJUNGLE_API AReducedDice : public AItem
{
	GENERATED_BODY()

public:
	void ExecuteItem(AMinion* _minion) override;

	UPROPERTY(EditAnywhere)
	AMapMenuCamera* MapMenuCamera;
};
