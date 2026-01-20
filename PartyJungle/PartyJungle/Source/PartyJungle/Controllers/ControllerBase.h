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
	AControllerBase() = default;

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
	 * Function called when the State is changed for exiting the controller.
	 */
	UFUNCTION(BlueprintNativeEvent, CallInEditor, Category = "StateData_Functions")
	void OnExit();

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
	 * Implementation for OnExit() from code. Ignored if the StateData has a BP implementation.
	 */
	virtual void OnExit_Implementation() {};
	
	/**
	 * Implementation for ReinitIfMatches() from code. Ignored if the StateData has a BP implementation.
	 * @return True if must reinitialize the controller when the state is changed, even if the controller is the same.
	 */
	virtual bool ReinitIfMatches_Implementation() { return false; };
	
};