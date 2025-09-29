#include "./DiceItem.h"

void ADiceItem::ExecuteItem(AMinion* _minion)
{
	Super::ExecuteItem(_minion);

	if (!MapMenuCamera)
		return;
	
	RollTheDice();
}

void ADiceItem::RollTheDice()
{
	MapMenuCamera->ItemExecuted = true;
	MapMenuCamera->RollTheDice();
	MapMenuCamera->Dice->HideDice();
	MapMenuCamera->Dice->ShowDiceFeedbackNumber(MapMenuCamera->Dice->DiceValue);
	MapMenuCamera->ExecuteMinionMovement(true);
}

