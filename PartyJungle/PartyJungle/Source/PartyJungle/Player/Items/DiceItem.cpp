#include "./DiceItem.h"

void ADiceItem::ExecuteItem(AMinion* _minion)
{
	Super::ExecuteItem(_minion);
	RollTheDice();
}

void ADiceItem::RollTheDice()
{
	MapMenuCamera->ItemExecuted = true;
	MapMenuCamera->RollTheDice();
	MapMenuCamera->ExecuteMinionMovement(true);
}

