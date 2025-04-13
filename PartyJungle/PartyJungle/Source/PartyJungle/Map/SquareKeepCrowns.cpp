#include "./SquareKeepCrowns.h"

bool ASquareKeepCrowns::ExecuteEvent(AMinion* _minion)
{
	int minionTeam = static_cast<int>(_minion->Team);

	if(_minion->GetCrowns() <= 0 || !Camera || minionTeam != Team)
		return false;

	Camera->SwitchStoreCrownsUI(true);

	return true;
}
