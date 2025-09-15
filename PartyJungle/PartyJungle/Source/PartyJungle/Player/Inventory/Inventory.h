#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PartyJungle/Player/Items/Base/Item.h"
#include "PartyJungle/Player/Minion/Minion.h"
#include "Inventory.generated.h"

UCLASS()
class PARTYJUNGLE_API AInventory : public AActor
{
	GENERATED_BODY()
	
public:	
	AInventory();

	UPROPERTY()
	int InventoryIndex;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	AItem* EmptyItemDice;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	AItem* EmptyItemMisc;
	
	UPROPERTY()
	TArray<AItem*> SortedInventory;
	
	TMap<int, TArray<AItem*>> Inventories;
	
	void InitializeInventory(int _team);
	
	void SwitchSelectedInventoryItem(int _direction);

	UFUNCTION()
	void UseItem(AItem* _item, AMinion* _minion);
	
	UFUNCTION()
	void UseItemFromUI(AMinion* _minion);

	UFUNCTION()
	bool CheckIfThereIsSpaceToStoreItem(int _team, AItem* _item);
	
	void RemoveItem(int _team, AItem* _item);

	UFUNCTION()
	TArray<AItem*> GetSortedInventory(int _team);
	
	UFUNCTION()
	bool CheckIfItemExists(int _team, AItem* _item);

	UFUNCTION(BlueprintImplementableEvent)
	void SwitchInventoryVisibility(bool _visible);

	UFUNCTION(BlueprintImplementableEvent)
	void SetInventoryPosition(AMinion* _minion);

	UFUNCTION(BlueprintImplementableEvent)
	void SetItemToSlot(int _slot, AItem* _item);

	UFUNCTION(BlueprintImplementableEvent)
	void SetSelectedItemFeedback(int _slot);

	UFUNCTION(BlueprintImplementableEvent)
	void SwitchSelectedItemVisibility(bool _visible);
};
