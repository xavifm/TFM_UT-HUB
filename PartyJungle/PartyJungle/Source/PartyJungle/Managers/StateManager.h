#pragma once

#ifndef include_GameStateData
	#define include_GameStateData
	#include <PartyJungle/GameStates/GameStateData.h>
#endif

#include "StateManager.generated.h"

class AGameStateData;
class AControllerBase;
enum class EGameControllers : uint8;


/**
 * Event triggered when the current GameState is changed.
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(
	FEvent_GameStateChanged, // Name of the structure that will be generated
	// Parameters of the delegate (Type, Name):
	AGameStateData* const, a_PreviousState, // Id of the previous GameState.
	AGameStateData* const, a_CurrentState // Id of the current GameState.
);


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
	 * Function called every frame on this Actor. Override this function to implement custom logic to be executed every frame.
	 * @param a_DeltaTime Game time elapsed during last frame modified by the time dilation
	 */
	virtual void Tick(float a_DeltaTime) override;
	
	/**
	 * Changes to the indicated state.
	 * @param a_TargetState Indicated state id.
	 * @return True if the state was changed successfully.
	 */
	UFUNCTION(BlueprintCallable, Category = "GameState_Functions")
	bool ChangeState(const FString& a_TargetState);

	/**
	* Changes to the indicated state.
	 * @param a_TargetState Indicated state id.
	 * @param a_Context Pointer to a context information.
	 * @return True if the state was changed successfully.
	 */
	bool ChangeState(const FString& a_TargetState, void* a_Context);
	
	/**
	 * Adds a new State to the StateManager.
	 * @param a_State GameState id.
	 * @param a_StateData Pointer to the GameState Data.
	 * @return True if the state was successfully added.
	 */
	bool AddState(const FString& a_State, AGameStateData* const a_StateData);
	
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
	const FString& GetGameStateId();
	
	/**
	 * Gets the default GameState Id.
	 * @return Default GameState Id.
	 */
	const FString& GetDefaultGameStateId() { return m_DefaultState; };

	/**
	 * Gets the 'GameStateChanged' event.
	 * @return Reference to the 'GameStateChanged' event.
	 */
	FEvent_GameStateChanged& GetEvent_GameStateChanged() { return m_EventStateChanged; }

private:
	/**
	 * Triggers the Start() function for all controllers of the passed game state.
	 * @param a_PreviousGameState GameStateData that contains all the controllers to start.
	 * @param a_Context Pointer to a context information.
	 */
	void StartCurrentControllers(AGameStateData* a_PreviousGameState, void* a_Context);
	
	/**
	* Triggers the Exit() function for all current controllers.
	* @param a_NextGameState GameStateData that contains the controllers of the next game state.
	 */
	void ExitCurrentControllers(AGameStateData* a_NextGameState);

	/**
	 * Start the passed controller.
	 * @param a_PreviousGameState Game state of the target controller.
	 * @param a_ControllerId Target controller id.
	 * @param a_Context Pointer to a context information.
	 */
	void StartController(AGameStateData* const a_PreviousGameState, EGameControllers a_ControllerId, void* a_Context);
	
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
	
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "StateManager")
	FString m_DefaultState; //!< Default GameState of the StateManager.
	
private:
	UPROPERTY()
	TObjectPtr<AGameStateData> m_CurrentState {nullptr}; //!< Pointer to the current state data.
	
	UPROPERTY()
	TMap<FString, AGameStateData*> m_GameStates; //!< Map with every type of AStateData, identified by a unique GameState id.
	
	FEvent_GameStateChanged m_EventStateChanged; //!< Event triggered when the GameState is changed.
};
