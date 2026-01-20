#pragma once

#ifndef _INCLUDE_GameStateData_
	#define _INCLUDE_GameStateData_
	#include <PartyJungle/GameStates/GameStateData.h>
#endif

#include <functional>

#include "StateManager.generated.h"

class AGameStateData;
class AControllerBase;
enum class EGameControllers : uint8;


// ToDo Capy: Change for Unreal Event.
class Event { public: void Broadcast(){}; bool Subscribe(bool, std::function<void>* a_Function) { return true; }; };


/**
 * Enum with all the possible Game States.
 */
UENUM(BlueprintType)
enum class EGameStates : uint8 { None, MainMenu, GameMenu, MainGame, MiniGame_1, Credits };


/**
 * Actor in charge of managing the Game States.
 */
UCLASS()
class AStateManager : public AActor
{
	GENERATED_BODY()
	
public:
	/**
	 * Constructor.
	 */
	AStateManager();
	
	/** 
	 * Overridable native event for when play begins for this actor. 
	 */
	void BeginPlay() override;
	
	/**
	 * Changes to the indicated state.
	 * @param a_State Indicated state id.
	 * @return True if the state was changed successfully.
	 */
	UFUNCTION(BlueprintCallable, Category = "GameState_Functions")
	bool ChangeState(EGameStates a_State);
	
	/**
	 * Adds a new State to the StateManager.
	 * @param a_State GameState id.
	 * @param a_StateData Pointer to the GameState Data.
	 * @return True if the state was successfully added.
	 */
	bool AddState(EGameStates a_State, AGameStateData* const a_StateData);
	
	/**
	 * Gets the selected controller.
	 * @param a_ControllerId Selected controller id.
	 * @return Pointer to the selected controller.
	 */
	template <typename TControllerType = AControllerBase>
	UFUNCTION(BlueprintCallable, Category = "GameState_Functions")
	TControllerType* const GetController(EGameControllers a_ControllerId) { return dynamic_cast<TControllerType*>(m_CurrentState->GetController(a_ControllerId)); }

	/**
	 * Resets all the states data.
	 */
	void ResetStates();

	/**
	 * Gets the default GameState Id.
	 * @return Default GameState Id.
	 */
	static EGameStates GetDefaultGameState() { return EGameStates::MainMenu; };
	
	/**
	 * Subscribes a function to the StateChanged Event.
	 * @param a_Subscribe True to subscribe. False to unsubscribe.
	 * @param a_Function Function to subscribe to the Event.
	 * @return True if the function was subscribed properly.
	 */
	static bool SubscribeToEventStateChanged(bool a_Subscribe, std::function<void>* a_Function) { return m_EventStateChanged.Subscribe(a_Subscribe, a_Function); }

private:
	/**
	 * Triggers the Start() function for all controllers of the passed game state.
	 * @param a_GameState GameStateData that contains all the controllers to start.
	 */
	void StartCurrentControllers(AGameStateData* a_PreviousGameState);
	
	/**
	* Triggers the Exit() function for all current controllers.
	* @param a_GameState GameStateData that contains the controllers of the next game state.
	 */
	void ExitCurrentControllers(AGameStateData* a_NextGameState);

	/**
	 * Start the passed controller.
	 * @param a_TargetGameState Game state of the target controller.
	 * @param a_ControllerId Target controller id.
	 */
	void StartController(AGameStateData* const a_PreviousGameState, EGameControllers a_ControllerId);
	
	/**
	 * Exit the passed controller.
	 * @param a_NextGameState Game state of the next controller.
	 * @param a_ControllerId Target controller id.
	 */
	void ExitController(AGameStateData* const a_NextGameState, EGameControllers a_ControllerId);

	/**
	 * Gets if the passed GameState is valid.
	 * @param a_GameState Target GameState.
	 * @return True if the passed GameState is valid.
	 */
	bool IsValidGameState(AGameStateData* const a_GameState);
	
	
	UPROPERTY()
	TObjectPtr<AGameStateData> m_CurrentState {nullptr}; //!< Pointer to the current state data.
	
	UPROPERTY()
	TMap<uint8, AGameStateData*> m_GameStates; //!< Map with every type of AStateData, identified by a unique GameState id.
	
	static Event m_EventStateChanged; //!< Event played when the GameState change has finished.
	
};
