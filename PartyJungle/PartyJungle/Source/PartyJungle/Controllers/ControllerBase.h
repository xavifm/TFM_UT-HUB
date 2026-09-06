#pragma once

#include "ControllerBase.generated.h"

class UManagerGameInstance;


/**
 * Base for all Controllers.
 */
UCLASS()
class AControllerBase : public AActor
{
	GENERATED_BODY()
	
public:
	/**
	 * Constructor.
	 */
	AControllerBase() { PrimaryActorTick.bCanEverTick = false; }

	/**
	 * Destructor.
	 */
	~AControllerBase() = default;
	
	/**
	 * Method called when the State and the StateManager are ready. Call instead of BeginPlay().
	 */
	UFUNCTION(BlueprintNativeEvent, CallInEditor, Category = "StateData_Functions")
	void OnBeginState();

	/**
	 * Function called when the State is changed for starting the controller.
	 */
	UFUNCTION(BlueprintNativeEvent, CallInEditor, Category = "StateData_Functions")
	void OnStart();

	/**
	 * Function called when the State is changed for starting the controller and a Context is passed. Executed before OnStart().
	 * @param a_Context Pointer to the Context information.
	 */
	virtual void OnContextStart(void* a_Context) {};
	
	/**
	 * Function called when the State is changed for exiting the controller.
	 */
	UFUNCTION(BlueprintNativeEvent, CallInEditor, Category = "StateData_Functions")
	void OnExit();
	
	/**
	 * Function called when the State is updated.
	 * @param a_DeltaTime Game time elapsed during last frame modified by the time dilation
	 */
	UFUNCTION(BlueprintNativeEvent, CallInEditor, Category = "StateData_Functions")
	void OnUpdateState(float a_DeltaTime);
	
	/**
	 * Gets whether the controller can be entered or not.
	 * @return True if the controller can be entered.
	 */
	UFUNCTION(BlueprintNativeEvent, CallInEditor, Category = "StateData_Functions")
	bool CanEnterController();
	
	/**
	 * Gets whether the controller can be exited or not.
	 * @return True if the controller can be exited.
	 */
	UFUNCTION(BlueprintNativeEvent, CallInEditor, Category = "StateData_Functions")
	bool CanExitController();

	/**
	 * Gets whether the controller must reinitialize when changed the state if the controller hasn't changed.
	 * @return True if must reinitialize the controller when the state is changed, even if the controller is the same.
	 */
	UFUNCTION(BlueprintNativeEvent, CallInEditor, Category = "StateData_Functions")
	bool ReinitIfMatches();
	
	
protected:
	/**
	 * Implementation for OnBeginState() from code. Ignored if the StateData has a BP implementation.
	 */
	virtual void OnBeginState_Implementation() {};
	
	/**
	 * Implementation for OnStart() from code. Ignored if the StateData has a BP implementation.
	 */
	virtual void OnStart_Implementation() {};
	
	/**
	 * Implementation for OnStart() from code. Ignored if the StateData has a BP implementation.
	 */
	template <typename TContextType>
	void OnStart_Implementation(TContextType a_Context) {};
	
	/**
	 * Implementation for OnExit() from code. Ignored if the StateData has a BP implementation.
	 */
	virtual void OnExit_Implementation() {};
	
	/**
	 * Implementation for OnUpdateState() from code. Ignored if the StateData has a BP implementation.
	 */
	virtual void OnUpdateState_Implementation(float a_DeltaTime) {};
	
	/**
	 * Implementation for CanEnterController() from code. Ignored if the StateData has a BP implementation.
	 */
	virtual bool CanEnterController_Implementation() { return true; };
	
	/**
	 * Implementation for CanExitController() from code. Ignored if the StateData has a BP implementation.
	 */
	virtual bool CanExitController_Implementation() { return true; };
	
	/**
	 * Implementation for ReinitIfMatches() from code. Ignored if the StateData has a BP implementation.
	 * @return True if must reinitialize the controller when the state is changed, even if the controller is the same.
	 */
	virtual bool ReinitIfMatches_Implementation() { return m_ReinitIfControllerStaysOnStateChange; };
	
	
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Controller")
	bool m_ReinitIfControllerStaysOnStateChange {false}; //!< Indicates if the controller must be reinitialized if the previous Controller and the target Controller are the same when changing GameState.
	
};
