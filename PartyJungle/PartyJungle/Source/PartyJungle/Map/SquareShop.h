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
	
	UFUNCTION(BlueprintImplementableEvent)
	void SetCurrentWheelPosition(int _position);

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<AItem*> ItemsInShop;

	UPROPERTY()
	AItem* CurrentItemStored;
	
	UFUNCTION()
	void SwitchShopItem(int _direction);

	UFUNCTION()
	AItem* GetCurrentShopItem();

	UFUNCTION()
	void SwitchShop();
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool ShopEnabled;

private:
	UPROPERTY()
	int ShopIndex;
};
