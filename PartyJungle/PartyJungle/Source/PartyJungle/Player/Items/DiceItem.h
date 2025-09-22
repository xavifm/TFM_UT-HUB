#pragma once

#include "CoreMinimal.h"
#include "./Base/Item.h"
#include "DiceItem.generated.h"

UCLASS()
class PARTYJUNGLE_API ADiceItem : public AItem
{
	GENERATED_BODY()
	
	void ExecuteItem(AMinion* _minion) override; 
	
};
