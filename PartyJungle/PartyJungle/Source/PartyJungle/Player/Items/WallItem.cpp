#include "./WallItem.h"

#include "PartyJungle/Player/Map/MapMenuCamera.h"

void AWallItem::ExecuteItem(AMinion* _minion)
{
	Super::ExecuteItem(_minion);
	MapMenuCamera->CurrentMinion->CurrentSquare->SwitchBlockedSquareMode(static_cast<int>(_minion->Team), true);
}
