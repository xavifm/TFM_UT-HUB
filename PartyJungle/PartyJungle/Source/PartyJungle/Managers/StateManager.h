#pragma once

#include <functional>


class AGameStateData;

// ToDo: Implementar EventClass
class Event { public: void Broadcast(){}; bool Subscribe(bool, std::function<void>* a_Function) { return true; }; };

UENUM(BlueprintType)
enum class GameStates : uint8 { MainMenu = 0U, GameMenu, MainGame, MiniGame_1, Credits };

class UStateManager
{
	
public:
	/**
	 * Constructor
	 */
	UStateManager() { };
	
	/**
	 * Destructor
	 */
	~UStateManager() = default;
	
	/**
	 * Changes to the indicated state.
	 * @param a_State Indicated state id.
	 * @return True if the state was changed successfully.
	 */
	UFUNCTION(BlueprintCallable, Category = "GameState_Functions")
	bool ChangeState(GameStates a_State);
	
	/**
	 * Adds a new State to the StateManager.
	 * @param a_State GameState id.
	 * @param a_StateData Pointer to the GameState Data.
	 * @return True if the state was successfully added.
	 */
	bool AddState(GameStates a_State, AGameStateData* const a_StateData);
	
	static GameStates GetDefaultGameState() { return GameStates::MainMenu; };
	
	/**
	 * Subscribes a function to the StateChanged Event.
	 * @param a_Subscribe True to subscribe. False to unsubscribe.
	 * @param a_Function Function to subscribe to the Event.
	 * @return True if the function was subscribed properly.
	 */
	static bool SubscribeToEventStateChanged(bool a_Subscribe, std::function<void>* a_Function) { return m_EventStateChanged.Subscribe(a_Subscribe, a_Function); }
	
	
private:
	/**
	 * Triggers the Start() function for all controllers.
	 */
	void StartControllers();
	
	/**
	 * Triggers the Exit() function for all controllers.
	 */
	void ExitControllers();
	
	
	AGameStateData* m_CurrentState {nullptr};
	std::unordered_map<GameStates, AGameStateData* const> m_GameStates; //!< Map with every type of AStateData, identified by a unique GameState id.
	
	static Event m_EventStateChanged; //!< Event played when the GameState change has finished.
	
};
