#pragma once

#include "CoreMinimal.h"
#include "./Base/Item.h"
#include "PartyJungle/Player/Map/MapMenuCamera.h"
#include "Whistle.generated.h"

UCLASS()
class PARTYJUNGLE_API AWhistle : public AItem
{
	GENERATED_BODY()
	
	void ExecuteItem(AMinion* _minion) override;

	UPROPERTY(EditAnywhere)
	AMapMenuCamera* MapMenuCamera;
};
