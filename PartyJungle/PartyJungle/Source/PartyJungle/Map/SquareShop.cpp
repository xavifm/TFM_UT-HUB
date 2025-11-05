#include "./SquareShop.h"

bool ASquareShop::ExecuteEvent(AMinion* _minion)
{
	if (!ShopEnabled)
		SwitchShop();

	return true;
}

void ASquareShop::SwitchShop()
{
	ShopEnabled = !ShopEnabled;
	SwitchShopVisibility(ShopEnabled);
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
}