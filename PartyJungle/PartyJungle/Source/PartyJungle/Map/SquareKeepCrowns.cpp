#include "./SquareKeepCrowns.h"

bool ASquareKeepCrowns::ExecuteEvent(AMinion* _minion)
{
	int minionTeam = static_cast<int>(_minion->Team);

	if(_minion->GetCrowns() <= 0 || !MapMenuCameraRef || minionTeam != Team)
		return false;

	MapMenuCameraRef->SwitchStoreCrownsUI(true);

	return true;
}
