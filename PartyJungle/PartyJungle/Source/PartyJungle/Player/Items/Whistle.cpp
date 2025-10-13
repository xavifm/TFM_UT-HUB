#include "./Whistle.h"

void AWhistle::ExecuteItem(AMinion* _minion)
{
	Super::ExecuteItem(_minion);

	if (!MapMenuCamera)
		return;

	MapMenuCamera->WorldSceneManager->DisableAllStars();
	MapMenuCamera->WorldSceneManager->EnableStarAtRandomLocation(true);
	MapMenuCamera->SwitchFullMapVision();
}
