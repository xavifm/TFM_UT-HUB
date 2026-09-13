#pragma once

#include <PartyJungle/Controllers/UIControllers/Default_UIController.h>

#include "Test_UIController.generated.h"


UCLASS()
class ATest_UIController : public ADefault_UIController
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
