#pragma once

#include "../Managers/StateManager.h"
#include "../Controllers/MapControllerBase.h"
#include "../Controllers/CameraControllerBase.h"
#include "../Controllers/CharactersControllerBase.h"
#include "../Controllers/UIControllerBase.h"

#include "CoreMinimal.h"

#include "GameStateData.generated.h"


UCLASS()
class AGameStateData : public AActor
{
	GENERATED_BODY()
	
public:
	AGameStateData();
	
	/** 
	 * Overridable native event for when play begins for this actor.
	 */
	virtual void BeginPlay() override;

	/**
	 * Gets the Game State id.
	 * @return Id of the Game State.
	 */
	UFUNCTION(BlueprintCallable, Category = "StateData_Functions")
	const GameStates GetGameStateId() const { return m_GameStateId; }
	
	/**
	 * Returns True if the conditions to enter a state are accomplished. True by Default.
	 * @return True if the conditions to enter a state are accomplished.
	 */
	UFUNCTION(BlueprintNativeEvent, CallInEditor, Category = "StateData_Functions")
	bool CanEnterState() const;
	
	/**
	 * Returns True if the conditions to exit a state are accomplished. True by Default.
	 * @return True if the conditions to exit a state are accomplished.
	 */
	UFUNCTION(BlueprintNativeEvent, CallInEditor, Category = "StateData_Functions")
	bool CanExitState() const;
	
	/**
	 * Gets a reference to the MapController.
	 * @return Reference to the MapController.
	 */
	UFUNCTION(BlueprintCallable, Category = "StateData_Functions")
	UMapControllerBase* const GetMapController() { return m_MapController; }
	
	/**
	 * Gets a reference to the CameraController.
	 * @return Reference to the CameraController.
	 */
	UFUNCTION(BlueprintCallable, Category = "StateData_Functions")
	UCameraControllerBase* const GetCameraController() { return m_CameraController; }
	
	/**
	 * Gets a reference to the CharactersController.
	 * @return Reference to the CharactersController.
	 */
	UFUNCTION(BlueprintCallable, Category = "StateData_Functions")
	UCharactersControllerBase* const GetCharactersController() { return m_CharactersController; }
	
	/**
	 * Gets a reference to the UIController.
	 * @return Reference to the UIController.
	 */
	UFUNCTION(BlueprintCallable, Category = "StateData_Functions")
	UUIControllerBase* const GetUIController() { return m_UIController; }
	
protected:
	/**
	 * Initializes the State from the StateData instance.
	 */
	UFUNCTION(BlueprintCallable, Category = "StateData_Functions")
	void InitState();
	
	/**
	 * Implementation for CanEnterState from code. Ignored if the StateData has a BP implementation.
	 * @return True if the conditions to enter a state are accomplished.
	 */
	virtual bool CanEnterState_Implementation() const { return true; };
	
	/**
	 * Implementation for CanExitState from code. Ignored if the StateData has a BP implementation.
	 * @return True if the conditions to exit a state are accomplished.
	 */
	virtual bool CanExitState_Implementation() const { return true; };
	
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StateData")
	GameStates m_GameStateId; //!< Enum used as an id for each GameState type.
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StateData")
	UMapControllerBase* m_MapController {nullptr}; //!< Pointer to the MapController.
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StateData")
	UCameraControllerBase* m_CameraController {nullptr}; //!< Pointer to the CameraController.
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StateData")
	UCharactersControllerBase* m_CharactersController {nullptr}; //!< Pointer to the CharactersController.
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StateData")
	UUIControllerBase* m_UIController {nullptr}; //!< Pointer to the UIController.
	
	// ToDo: Crear un GameLoopController, que s'encarregarà de la lògica dins el propi joc i minijocs.
	//	- Lògica de canvis d'estats dins el propi minijoc
	//	- Lògica de condició de victoria/finalització i ChangeState()
	//	- Control de puntuacions propi en cas de necessitar-se diferent al del GameManager
	/// Nota: no se si es millor idea fer canvis de SubEstats com a StateData separats, o millor un control d'estats completament propi...
	///		- Potser implementar un SubStateData i manager..?
};
