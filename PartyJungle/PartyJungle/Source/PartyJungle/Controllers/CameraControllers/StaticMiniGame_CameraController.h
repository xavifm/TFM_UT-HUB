#pragma once

#include <PartyJungle/Controllers/CameraControllers/CameraControllerBase.h>

#include "StaticMiniGame_CameraController.generated.h"


/**
 * Base for the Camera Controller Actors.
 */
UCLASS()
class AStaticMiniGame_CameraController : public ACameraControllerBase
{
	GENERATED_BODY()
	
public:
	/**
	 * Constructor.
	 */
	AStaticMiniGame_CameraController();
	
	/**
	 * Function called when the State is changed for starting the controller.
	 */
	virtual void OnStart_Implementation() override;
	
	
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="CameraData")
	AActor* m_DefaultCameraTarget {nullptr}; //!< Default Target actor of the associated Camera.
	
};
