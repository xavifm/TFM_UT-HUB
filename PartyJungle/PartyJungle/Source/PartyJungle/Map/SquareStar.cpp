#include "./SquareStar.h"

bool ASquareStar::ExecuteEvent(AMinion* _minion)
{
	if (!ShopEnabled || !_minion)
		return false;
	
	if (_minion->GetCoins() >= MIN_BUY_COINS)
		Camera->SwitchCrownsShop(true);
	else
		Camera->SwitchCannotAffordCrown(true);

	return true;
}

void ASquareStar::SwitchStar(bool _enabled)
{
	ShopEnabled = _enabled;
	SwitchStarVisibility(_enabled);
}

bool ASquareStar::IsEnabledStar()
{
	return ShopEnabled;
}
