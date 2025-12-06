#include "ManagerGameInstance.h"

UManagerGameInstance::UManagerGameInstance() :
	UGameInstance(),
	m_StateManager {NewObject<UStateManager>()},
	m_GameManager {NewObject<UGameManager>()}
{
}
