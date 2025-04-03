#include "./SquareStar.h"

bool ASquareStar::ExecuteEvent(AMinion* _minion)
{
	if (!ShopEnabled || !_minion || _minion->GetCoins() < MIN_BUY_COINS)
		return false;

	Camera->SwitchCrownsShop(true);

	return true;
}

void ASquareStar::SwitchStar(bool _enabled)
{
	ShopEnabled = _enabled;
	SwitchStarVisibility(_enabled);
}
