#pragma once

#include "UIControllerBase.h"

#include "Default_UIController.generated.h"


UCLASS()
class ADefault_UIController : public AUIControllerBase
{
	GENERATED_BODY()
	
public:
	/**
	 * Function called when the State is changed for starting the controller.
	 */
	virtual void OnStart_Implementation() override;
	
	/**
	 * Function called when the State is changed for exiting the controller.
	 */
	virtual void OnExit_Implementation() override;
	
};
