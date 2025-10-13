#include "./ReducedDice.h"

void AReducedDice::ExecuteItem(AMinion* _minion)
{
	Super::ExecuteItem(_minion);

	if (MapMenuCamera)
		MapMenuCamera->TeamWithDiceSlowed = static_cast<int>(_minion->Team);
}
