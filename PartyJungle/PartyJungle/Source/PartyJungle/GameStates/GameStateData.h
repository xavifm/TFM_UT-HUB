#pragma once

#include "CoreMinimal.h"

#include "GameStateData.generated.h"

class AControllerBase;
class AUIControllerBase;
class APlayersControllerBase;
class ACameraControllerBase;
class AGameLoopControllerBase;
class UManagerGameInstance;
enum class EGameStates : uint8;


/**
 * Enum with all Game Controllers Types.
 */
UENUM()
enum class EGameControllers : uint8 { GameLoop = 0U, Camera, Players, UI, COUNT };


/**
 * Actor that contains and manages each State Data, including all its Controllers.
 */
UCLASS()
class AGameStateData : public AActor
{
	GENERATED_BODY()
	
public:
	/**
	 * Constructor.
	 */
	AGameStateData();

	/**
	 * Gets the Game State id.
	 * @return Id of the Game State.
	 */
	UFUNCTION(BlueprintCallable, Category = "StateData_Functions")
	const FString& GetGameStateId() const { return m_GameStateId; }
	
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
	 * Returns True if all the controllers can be entered.
	 * @return True if all the controllers can be entered.
	 */
	UFUNCTION(BlueprintCallable, Category = "StateData_Functions")
	bool CanEnterControllers() const;
	
	/**
	 * Returns True if all the controllers can be exited.
	 * @return True if all the controllers can be exited.
	 */
	UFUNCTION(BlueprintCallable, Category = "StateData_Functions")
	bool CanExitControllers() const;
	
	/**
	 * Gets a reference to the InputController.
	 * @param a_ControllerId Selected controller id.
	 * @return Reference to the InputController.
	 */
	UFUNCTION(BlueprintCallable, Category = "StateData_Functions")
	AControllerBase* const GetController(EGameControllers a_ControllerId);
	
	
protected:
	/**
	 * Method called when the State and the StateManager are ready. Call instead of BeginPlay().
	 */
	UFUNCTION(BlueprintCallable, Category = "StateData_Functions")
	void BeginState();
	
	/**
	 * Implementation for OnBeginState from code. Ignored if the StateData has a BP implementation.
	 */
	virtual void OnBeginState_Implementation() {};
	
	/**
	 * Implementation for CanEnterState from code. Ignored if the StateData has a BP implementation.
	 * @return True if the conditions to enter a state are accomplished.
	 */
	virtual bool CanEnterState_Implementation() const;
	
	/**
	 * Implementation for CanExitState from code. Ignored if the StateData has a BP implementation.
	 * @return True if the conditions to exit a state are accomplished.
	 */
	virtual bool CanExitState_Implementation() const;
	
private:
	/** 
	 * Overridable native event for when play begins for this actor.
	 */
	virtual void BeginPlay() override;
	
	/**
	 * Initializes the State from the StateData instance.
	 */
	UFUNCTION(BlueprintCallable, Category = "StateData_Functions")
	void InitState();
	
	/**
	 * Adds this StateData to the StateManager.
	 * @param a_GameManager Reference to the GameManager.
	 */
	UFUNCTION()
	void AddToStateManager(UManagerGameInstance* const a_GameManager);
	
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StateData")
	FString m_GameStateId; //!< Enum used as an id for each GameState type.
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StateData")
	AGameLoopControllerBase* m_GameLoopController; //!< Pointer to the state's GameLoop Controller.
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StateData")
	ACameraControllerBase* m_CameraController; //!< Pointer to the state's Camera Controller.
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StateData")
	APlayersControllerBase* m_PlayersController; //!< Pointer to the state's Players Controller.
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StateData")
	AUIControllerBase* m_UIController; //!< Pointer to the state's UI Controller.
	
	UPROPERTY(BlueprintReadWrite, meta = (EditConditionHides))
	TMap<uint8, AControllerBase*> m_GameControllers; //!< Map with the GameState's Game Controllers references
};
