#pragma once

#include "SceneManager.generated.h"

class AStateManager;
class UManagerGameInstance;


/**
 * Event triggered when the current Scene is changed.
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(
	FEvent_SceneChanged, // Name of the structure that will be generated
	// Parameters of the delegate (Type, Name):
	FString, a_PreviousState, // Id of the Previous Scene.
	FString, a_CurrentState // Id of the Current Scene.
);


/**
 * Actor in charge of managing the Scenes.
 */
UCLASS()
class ASceneManager : public AActor
{
	GENERATED_BODY()
	
public:
	/**
	 * Constructor.
	 */
	ASceneManager();

	/**
	 * Overridable native event for when play begins for this actor.
	 */
	void BeginPlay() override;

	/**
	 * Changes the current Scene.
	 * @param a_TargetState Target State for the Scene Change.
	 */
	UFUNCTION(BlueprintCallable, Category = "SceneManager Functions")
	void ChangeScene(const FString& a_TargetState);

	/**
	 * Gets if the SceneManager is currently changing the Scene.
	 * @return True if the SceneManager is changing the Scene.
	 */
	UFUNCTION(BlueprintCallable, Category = "SceneManager Functions")
	bool IsSceneChanging() { return m_IsSceneChanging;}

	/**
	 * Sets the delay time for exiting a Scene.
	 * @param a_ExitSceneDelay Delay time for exiting a Scene.
	 */
	void SetExitSceneDelay(float a_ExitSceneDelay);
	
	/**
	 * Sets the delay time for entering a Scene.
	 * @param a_EnterSceneDelay Delay time for entering a Scene.
	 */
	void SetEnterSceneDelay(float a_EnterSceneDelay);

	/**
	 * Gets the 'SceneChanged' event.
	 * @return 'SceneChanged' event.
	 */
	FEvent_SceneChanged* const GetEvent_SceneChanged();
	
protected:
	/**
	 * Method that is triggered when the GameManager finished loading.
	 * @param a_GameManager Reference to the loaded GameManager.
	 */
	UFUNCTION()
	void OnGameManagerLoaded(UManagerGameInstance* const a_GameManager);
	
	/**
	 * Cinematic triggered when the scene starts changing.
	 */
	UFUNCTION(BlueprintImplementableEvent, Category = "SceneManager Functions")
	void StartChangingSceneCinematic(const FString& a_PreviousState, const FString& a_TargetState);
	
	/**
	 * Cinematic triggered when the scene has finished changing.
	 */
	UFUNCTION(BlueprintImplementableEvent, Category = "SceneManager Functions")
	void EndChangingSceneCinematic(const FString& a_PreviousState, const FString& a_TargetState);
	
private:
	/**
	 * Changes the current State to the target State.
	 */
	void ChangeToTargetState();

	/**
	 * Method triggered when the Scene has finished changing.
	 */
	void OnFinishChangingScenes();

	// ToDo Capy: 
	//  - Crear lógica de Load i Unload. 
	//  - Preferiblement fer-ho amb multithreating.
	/**
	 * Unloads the previous scene assets.
	 */
	void UnloadPreviousScene() {};
	
	/**
	 * Loads the target scene assets.
	 */
	void LoadTargetScene() {};
	//
	
	
private:
	const FString SCENE_TRANSITION_STATE {"SceneTransition"}; //!< Name of the State used for transitioning between Scenes.
	
	FEvent_SceneChanged m_EventSceneChanged; //!< Event triggered when the scene is changed.
	FString m_PreviousState {""}; //!< State previous of the Scene change.
	FString m_TargetState {""}; //!< State target of the Scene change.
	
	FTimerHandle m_ChangeSceneTimer; //!< Timer used for the scene change.
	float m_ExitSceneDelay {2.0f}; //!< Delay time used for exiting the previous Scene.
	float m_EnterSceneDelay {2.0f}; //!< Delay time used for entering the target Scene.
	
	bool m_IsSceneChanging {false}; //!< Indicates if the scene is being changed.
	
	AStateManager* m_StateManager {nullptr}; //!< Pointer to the StateManager.
	
};
