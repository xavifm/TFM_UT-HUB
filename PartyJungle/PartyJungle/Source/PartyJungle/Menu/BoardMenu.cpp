#include "./BoardMenu.h"

ABoardMenu::ABoardMenu()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ABoardMenu::SwitchMenuPosition(int _direction)
{
	CurrentMenuPosition += -_direction;

	if (CurrentMenuPosition < 0)
		CurrentMenuPosition = 0;
	if (CurrentMenuPosition > MAX_MENU_POSITIONS)
		CurrentMenuPosition = MAX_MENU_POSITIONS;

	SwitchBoardVisibleOption(CurrentMenuPosition);
}

