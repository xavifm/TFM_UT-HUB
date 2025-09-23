#include "./Inventory.h"

AInventory::AInventory()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AInventory::InitializeInventory(int _team)
{
	TArray<AItem*>& InventoryArray = Inventories.FindOrAdd(_team);
	
	if (InventoryArray.Num() == 0)
	{
		InventoryArray.Init(EmptyItemDice, 2);
		
		//test every item
			InventoryArray[0] = DiceItem;
		//
		
		InventoryArray[1] = EmptyItemMisc;
	}
	
	SortedInventory = GetSortedInventory(_team);
	InventoryIndex = 0;
	int loopIndex = 0;
	
	for (auto Item : SortedInventory)
	{
		SetItemToSlot(loopIndex, Item);
		loopIndex++;
	}

	SwitchSelectedInventoryItem(0);
}

void AInventory::SwitchSelectedInventoryItem(int _direction)
{
	InventoryIndex += _direction;
	InventoryIndex = FMath::Clamp(InventoryIndex, 0, Inventories[0].Num() - 1);
	SetSelectedItemFeedback(InventoryIndex);
}

void AInventory::UseItem(AItem* _item, AMinion* _minion)
{
	bool itemExistsQuery = CheckIfItemExists(static_cast<int>(_minion->Team), _item);

	if (itemExistsQuery)
	{
		_item->ExecuteItem(_minion);
		RemoveItem(static_cast<int>(_minion->Team), _item);
	}
}

void AInventory::UseItemFromUI(AMinion* _minion)
{
	int minionTeam = static_cast<int>(_minion->Team);
	AItem* itemQuery = Inventories[minionTeam][InventoryIndex];

	if (IsValid(itemQuery))
	{
		itemQuery->ExecuteItem(_minion);
		RemoveItem(static_cast<int>(_minion->Team), itemQuery);
	}
}

bool AInventory::CheckIfThereIsSpaceToStoreItem(int _team, AItem* _item)
{
	bool query = true;
	
	if (!_item) query = false;

	for (auto Element : Inventories[_team])
	{
		if (Element != nullptr && _item->ItemType == Element->ItemType)
			query = false;
	}

	return query;
}

bool AInventory::CheckIfIsEmptySpace(int _team)
{
	return (Inventories[_team][InventoryIndex] == EmptyItemDice || Inventories[_team][InventoryIndex] == EmptyItemMisc);
}

void AInventory::RemoveItem(int _team, AItem* _item)
{
	if (!_item) return;

	for (AItem*& Item : Inventories[_team])
	{
		if (Item == _item)
		{
			if (IsValid(Item))
			{
				EItemType itemType = Item->ItemType;
				Item->Destroy();
				
				switch (itemType)
				{
				case EItemType::DICE:
					Item = EmptyItemDice;
					break;
				case EItemType::MISC:
					Item = EmptyItemMisc;
					break;
				}
			}
			break;
		}
	}
}

bool AInventory::CheckIfItemExists(int _team, AItem* _item)
{
	if (!_item) return false;

	if (const TArray<AItem*>* Inv = Inventories.Find(_team))
	{
		return Inv->Contains(_item);
	}

	return false;
}

TArray<AItem*> AInventory::GetSortedInventory(int _team)
{
	TArray<AItem*> SortedInventoryAux = TArray<AItem*>();
	SortedInventoryAux.SetNumZeroed(2);
	
	for (auto Element : Inventories[_team])
	{
		switch (Element->ItemType)
		{
		case EItemType::DICE:
			SortedInventoryAux[0] = Element;
		case EItemType::MISC:
			SortedInventoryAux[1] = Element;
		}
	}

	return SortedInventoryAux;
}
