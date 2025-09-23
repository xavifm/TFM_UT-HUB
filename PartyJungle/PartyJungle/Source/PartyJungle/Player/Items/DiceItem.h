#pragma once

#include "CoreMinimal.h"
#include "./Base/Item.h"
#include "PartyJungle/Player/Map/MapMenuCamera.h"
#include "DiceItem.generated.h"

UCLASS()
class PARTYJUNGLE_API ADiceItem : public AItem
{
	GENERATED_BODY()

public:
	
	void ExecuteItem(AMinion* _minion) override;
	void RollTheDice();

	UPROPERTY(EditAnywhere)
	AMapMenuCamera* MapMenuCamera;
};
