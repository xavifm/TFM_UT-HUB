#include "./SquareShop.h"
#include "PartyJungle/Player/Map/MapMenuCamera.h"

bool ASquareShop::ExecuteEvent(AMinion* _minion)
{
	if (!ShopEnabled && Camera)
	{
		Camera->SquareShopReference = this;
		SwitchShop();
	}

	return true;
}

void ASquareShop::SwitchShop()
{
	ShopEnabled = !ShopEnabled;
	SwitchShopVisibility(ShopEnabled);
	ShopIndex = 0;
	SwitchShopItem(0);
}

AItem* ASquareShop::GetCurrentShopItem()
{
	return ItemsInShop[ShopIndex];
}

void ASquareShop::SwitchShopItem(int _direction)
{
	ShopIndex += _direction;
	
	if(ShopIndex >= ItemsInShop.Num())
		ShopIndex = 0;
	else if (ShopIndex < 0)
		ShopIndex = ItemsInShop.Num() - 1;
		
	CurrentItemStored = ItemsInShop[ShopIndex];
	SetCurrentShopItem(CurrentItemStored);
	SetCurrentWheelPosition(_direction);
}