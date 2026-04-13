#pragma once

#include <PartyJungle/Controllers/GameLoopControllers/DuelBase_GameLoopController.h>

#include "AirCannon_GLController.generated.h"

class ACameraControllerBase;
class AAirCannon;


/**
 * Controller for the 'AirCannon' GameLoop.
 */
UCLASS()
class AAirCannon_GLController : public ADuelBase_GameLoopController
{
	GENERATED_BODY()

public:
	/**
	 * Function called when the State is changed for starting the controller.
	 */
	virtual void OnStart_Implementation() override;

	/**
	 * Sets the Camera Target.
	 */
	UFUNCTION(BlueprintCallable, Category = "Minigame_functions")
	void SetCameraTarget();

protected:
	/**
	 * Finishes the GameLoop.
	 * @param a_Winner Id of the winner player.
	 */
	virtual void FinishGameLoop(int a_Winner) override;
	
	/**
	 * Sets the Score for the selected Team.
	 * @param a_Team Id of the chosen Team.
	 * @param a_Score Score for the chosen Team.
	 */
	virtual void SetTeamScore(int a_Team, int a_Score) override;
	
	/**
	 * Resets this GameLoop Controller.
	 */
	virtual void ResetGameLoop() override;

	/**
	 * Initializes the Air Cannons Info.
	 */
	UFUNCTION(BlueprintCallable, Category = "Cannons_functions")
	void SetupAirCannonsInfo();

	/**
	 * Starts to charge the AirCannons.
	 * @param a_Time Time to charge the AirCannons.
	 */
	UFUNCTION(BlueprintCallable, Category = "Cannons_functions")
	void StartCannonsCharge(float a_Time);

	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cannons_camera")
	AActor* m_OriginalCameraTarget; //!< Original Target of the Camera.
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cannons")
	TArray<AAirCannon*> m_AirCannons; //!< Array with all the AirCannons.

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cannons_parameters")
	float m_CannonChargeTime {0}; //!< Time to charge the AirCannons.
	
private:
	ACameraControllerBase* m_CameraCtr {nullptr}; //!< Reference to the Camera Controller.
	
	FTimerHandle m_CannonsTimer; //!< Timer Handle for the Cannons.
	
};
