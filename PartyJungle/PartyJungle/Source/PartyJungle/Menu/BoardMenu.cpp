#include "./BoardMenu.h"

#include <PartyJungle/GameInstance/ManagerGameInstance.h>


ABoardMenu::ABoardMenu()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ABoardMenu::SwitchMenuPosition(int _direction)
{
	CurrentMenuPosition += -_direction;

	if(PlayMenuMode)
	{
		SwitchBoardVisibleOption(_direction);
		return;
	}

	if (CurrentMenuPosition < 0)
		CurrentMenuPosition = 0;
	if (CurrentMenuPosition > MAX_MENU_POSITIONS)
		CurrentMenuPosition = MAX_MENU_POSITIONS;

	SwitchBoardVisibleOption(CurrentMenuPosition);
}

void ABoardMenu::SwitchPartyMenuPosition(int _direction)
{
	CurrentPartyMenuPosition += -_direction;

	if (CurrentPartyMenuPosition < 0)
		CurrentPartyMenuPosition = 0;
	if (CurrentPartyMenuPosition > MAX_PLAY_MENU_POSITIONS)
		CurrentPartyMenuPosition = MAX_PLAY_MENU_POSITIONS;

	SwitchBoardPartyCurrentOption(CurrentPartyMenuPosition);
}

void ABoardMenu::SwitchPartyValues(int _position)
{
	switch (_position)
	{
		case 0:
		{
			PlayersQ++;
			if (PlayersQ > MAX_PLAYERS) 
				PlayersQ = MIN_PLAYERS;

			break;
		}
		case 1:
		{
			GameRounds++;
			if (GameRounds > MAX_ROUNDS) 
				GameRounds = MIN_ROUNDS;

			break;
		}
	}
}

void ABoardMenu::PerformPartyAction()
{
	switch(CurrentPartyMenuPosition) 
	{
		case 0: 
		{
			SwitchPartyValues(CurrentPartyMenuPosition);
			SwitchMenuNumber(CurrentPartyMenuPosition, PlayersQ);

			break;
		}
		case 1: 
		{
			SwitchPartyValues(CurrentPartyMenuPosition);
			SwitchMenuNumber(CurrentPartyMenuPosition, GameRounds);

			break;
		}
		case 2: 
		{
			StartGame();

			break;
		}
	}
}

void ABoardMenu::StartGame() 
{
	auto GameInstance {GetGameInstance<UManagerGameInstance>()};

	if(GameInstance) 
	{
		GameInstance->GetGameManager()->PlayersInBoard = PlayersQ;
		GameInstance->GetGameManager()->RoundsInBoard = GameRounds;

		StartGameSequence();
	}
}

int ABoardMenu::GetCurrentMenuPosition()
{
	return CurrentMenuPosition;
}

