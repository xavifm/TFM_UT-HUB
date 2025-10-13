#include "./Inventory.h"

#include "PartyJungle/Map/Square.h"

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
		InventoryArray[1] = EmptyItemMisc;
		
		//test every item
			InventoryArray[0] = DiceItem;
			InventoryArray[1] = WhistleItem;
		//
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

bool AInventory::UseItemFromUI(AMinion* _minion, bool _instantUse, int _throwTeam)
{
	int minionTeam = static_cast<int>(_minion->Team);
	AItem* itemQuery = (_throwTeam == -1) ? Inventories[minionTeam][InventoryIndex] : Inventories[_throwTeam][InventoryIndex];

	bool executeItem = true;

	if (_instantUse)
	{
		executeItem = false;
		
		if (itemQuery->ItemType == EItemType::MISC &&
			(itemQuery->UseMode == EUseMode::INSTANT))
		{
			executeItem = true;
		}
	}

	if (IsValid(itemQuery) && executeItem)
	{
		itemQuery->ExecuteItem(_minion);

		if (_throwTeam == -1)
			RemoveItem(static_cast<int>(_minion->Team), itemQuery);
		else
			RemoveItem(_throwTeam, itemQuery);
	}

	return executeItem;
}

EUseMode AInventory::GetItemUseModeFromUI(int _team)
{
	AItem* itemQuery = Inventories[_team][InventoryIndex];
	EUseMode useMode = EUseMode::SELECT;

	if(itemQuery)
		useMode = itemQuery->UseMode;

	return useMode;
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

int AInventory::SwitchItemThrowPlayer(int _direction, int _maxPlayers, bool _reset)
{
	PlayerThrowIndex += _direction;

	if (PlayerThrowIndex < 0)
		PlayerThrowIndex = _maxPlayers - 1;
	else if (PlayerThrowIndex >= _maxPlayers)
		PlayerThrowIndex = 0;

	if(_reset)
		PlayerThrowIndex = 0;
	
	return PlayerThrowIndex;
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
