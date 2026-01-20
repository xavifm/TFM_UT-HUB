#pragma once

#include "GameInstanceAux/GameData.h"

#include "ManagerGameInstance.generated.h"

class AStateManager;
class AInputManager;
class UManagerGameInstance;


/**
 * Event used for the 'Game Manager Loaded' Event.
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(
  FEvent_GameManagerLoaded, // Name of the structure that will be generated
  // Parameters of the delegate (Type, Name):
  UManagerGameInstance* const, a_GameManager // Loaded Manager reference.
);


/**
 * Game Instance created for Game Management.
 */
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
	 * Method called on game Init.
	 */
	void Init() override;
	
	/**
	 * Method called on game scene changed.
	 */
	void OnWorldChanged(UWorld* OldWorld, UWorld* NewWorld) override;

	/**
	 * Method called on game shutdown.
	 */
	void Shutdown() override;

	/**
	 * Sets the StateManager reference.
	 * @param a_StateManager Pointer to an StateManager.
	 */
	void SetStateManager(AStateManager* const a_StateManager);
	
	/**
	 * Sets the InputManager reference.
	 * @param a_InputManager Pointer to an InputManager.
	 */
	void SetInputManager(AInputManager* const a_InputManager);
	
	/**
	 * Gets a reference to the GameManager.
	 * @return Reference to the GameManager.
	 */
	UFUNCTION(BlueprintCallable, Category = "Manager_Functions")
	FGameData& GetGameDataManager() { return m_GameDataManager; }
	
	/**
	 * Gets a reference to the StateManager.
	 * @return Reference to the StateManager.
	 */
	UFUNCTION(BlueprintCallable, Category = "Manager_Functions")
	AStateManager* const GetStateManager() { return m_StateManager; }
	
	/**
	 * Gets a reference to the InputManager.
	 * @return Reference to the InputManager.
	 */
	UFUNCTION(BlueprintCallable, Category = "Manager_Functions")
	AInputManager* const GetInputManager() { return m_InputManager; }

	/**
	 * Gets the 'Game Manager Loaded' Event.
	 * @return 'Game Manager Loaded' Event reference.
	 */
	FEvent_GameManagerLoaded& GetEvent_GameManagerLoaded() { return m_EventGameManagerLoaded; }

	/**
	 * Gets if the Game Manager has finished Loading.
	 * @return True if the Game Manager has finished Loading.
	 */
	bool IsGameManagerReady() { return m_GameManagerReady; }
	
private:
	/**
	 * Checks if the Game Manager has finished Loading.
	 */
	UFUNCTION()
	void CheckGameManagerLoaded();

	/**
	 * Resets the Game Manager's data.
	 */
	UFUNCTION()
	void Reset();
	
	
	UPROPERTY() 
	FGameData m_GameDataManager {FGameData()}; //!< Instance that Manages all the Game's permanent Data.
	
	UPROPERTY() 
	AStateManager* m_StateManager; //!< Instance that Manages all data relating to Game States.
	
	UPROPERTY() 
	AInputManager* m_InputManager; //!< Instance that Manages all data relating to Inputs.
	
	UPROPERTY()
	FEvent_GameManagerLoaded m_EventGameManagerLoaded; //!< 'Game Manager Loaded' Event.
	
	bool m_GameManagerReady {false}; //!< Indicates if the Game Manager has finished Loading.
	
};
