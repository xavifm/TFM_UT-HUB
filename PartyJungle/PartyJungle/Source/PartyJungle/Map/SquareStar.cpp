#include "./SquareStar.h"

bool ASquareStar::ExecuteEvent(AMinion* _minion)
{
	if (!ShopEnabled || !_minion || _minion->GetCoins() < 20)
		return false;

	MapMenuCameraRef->SwitchCrownsShop(true);

	return true;
}

void ASquareStar::SwitchStar(bool _enabled)
{
	ShopEnabled = _enabled;
}
