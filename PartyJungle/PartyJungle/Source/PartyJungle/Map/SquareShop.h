#pragma once

#include "CoreMinimal.h"
#include "./Square.h"
#include "PartyJungle/Player/Items/Base/Item.h"
#include "SquareShop.generated.h"

UCLASS()
class PARTYJUNGLE_API ASquareShop : public ASquare
{
	GENERATED_BODY()
	
public:
	virtual bool ExecuteEvent(AMinion* _minion);

	UFUNCTION(BlueprintImplementableEvent)
	void SwitchShopVisibility(bool _shopEnabled);

	UFUNCTION(BlueprintImplementableEvent)
	void SetCurrentShopItem(AItem* _item);

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<AItem*> ItemsInShop;

	UPROPERTY()
	AItem* CurrentItemStored;
	
	UFUNCTION()
	void SwitchShopItem(int _direction);

private:
	UFUNCTION()
	void SwitchShop();
	
	UPROPERTY()
	bool ShopEnabled;

	UPROPERTY()
	int ShopIndex;
};
