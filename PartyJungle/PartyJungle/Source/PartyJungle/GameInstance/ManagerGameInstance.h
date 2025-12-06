#pragma once

#include "../Managers/StateManager.h"
#include "../Managers/GameManager.h"

#include "ManagerGameInstance.generated.h"


UCLASS()
class UManagerGameInstance : public UGameInstance
{
GENERATED_BODY()
	
public:
	/**
	 * Constructor.
	 */
	UManagerGameInstance();
	
	/**
	 * Gets a reference to the StateManager.
	 * @return Reference to the StateManager.
	 */
	UFUNCTION(BlueprintCallable, Category = "Manager_Functions")
	UStateManager* const GetStateManager() { return m_StateManager; }
	
	/**
	 * Gets a reference to the GameManager.
	 * @return Reference to the GameManager.
	 */
	UFUNCTION(BlueprintCallable, Category = "Manager_Functions")
	UGameManager* const GetGameManager() { return m_GameManager; }
	
	
private:
	UStateManager* m_StateManager; //!< Instance that manages all data relating to game states.
	UGameManager* m_GameManager; //!< Instance that manages all data relating to game states.
	
};
