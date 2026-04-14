#pragma once

#include <PartyJungle/Controllers/CameraControllers/CameraModeControllers/CameraModeControllerBase.h>

#include "Cinematic_CameraModeController.generated.h"


/**
 * Enum with the Cinematic End modes.
 */
UENUM()
enum class ECinematicEndMode { Time, Event };


/**
 * Controller for each Camera in Cinematic Camera Mode.
 */
UCLASS(BlueprintType)
class ACinematic_CameraModeController : public ACameraModeControllerBase
{
	GENERATED_BODY()
	
public:
	/**
	 * Constructor.
	 */
	ACinematic_CameraModeController();
	
	/**
	 * Activates the associated Camera Mode.
	 */
	virtual void ActivateCameraMode() override;

	/**
	 * Starts the associated cinematic.
	 */
	void StartCinematic();

	/**
	 * Triggers the 'CinematicEnd' event, which triggers the cinematic end if ECinematicEndMode::Event is select.
	 */
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "CinematicCamera_Functions")
	void TriggerEvent_CinematicEnd();
	
	/**
	 * Method called for playing the cinematic.
	 */
	UFUNCTION(BlueprintNativeEvent, CallInEditor, Category = "StateData_Functions")
	void PlayCinematic();
	
	/**
	 * Method called when the Cinematic ends.
	 */
	UFUNCTION(BlueprintNativeEvent, CallInEditor, Category = "StateData_Functions")
	void OnCinematicEnd();
	
protected:
	/**
	 * Ends the cinematic.
	 */
	virtual void EndCinematic();
	
	/**
	 * Implementation for PlayCinematic() from code. Ignored if the StateData has a BP implementation.
	 */
	void PlayCinematic_Implementation() {}
	
	/**
	 * Implementation for OnCinematicEnd() from code. Ignored if the StateData has a BP implementation.
	 */
	void OnCinematicEnd_Implementation() {}
	
	
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="CinematicCamera")
	ECinematicEndMode m_CinematicEndMode; //!< Cinematic camera End mode.
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="CinematicCamera")
	float m_EndCinematicTime {-1}; //!< Delay time to end the cinematic, if ECinematicEndMode::Time is selected.
	
private:
	FTimerHandle m_EndCinematicTimer; //!< Timer for ending the cinematic.
	
	bool m_IsPlayingCinematic {false}; //!< Indicates if a cinematic is being played.
	
};
