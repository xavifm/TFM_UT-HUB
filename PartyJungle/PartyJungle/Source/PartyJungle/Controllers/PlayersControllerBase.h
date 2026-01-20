#pragma once

#include "ControllerBase.h"
#include "ControllerAuxs/PlayerData.h"

#include "PlayersControllerBase.generated.h"

enum class ETriggerEvents : uint8;
enum class EInputKeys : uint8;
class AMinion;
class UManagerGameInstance;
struct FInputActionValue;


/**
 * Base Controller for the Data of all Players in the Game.
 */
UCLASS()
class APlayersControllerBase : public AControllerBase
{
	GENERATED_BODY()
	
public:
	/**
	 * Method called when the State and the StateManager are ready. Call instead of BeginPlay().
	 */
	virtual void OnBeginState_Implementation() override;
	
	/**
	 * Function called when the State is changed for starting the controller.
	 */
	virtual void OnStart_Implementation() override;
	
	/**
	 * Function called when the State is changed for exiting the controller.
	 */
	virtual void OnExit_Implementation() override;

	/**
	 * Called to select the next Player.
	 */
	UFUNCTION(BlueprintCallable, Category = "PlayersController_Functions")
	void NextPlayer();
	
	/**
	 * Called to select the next Minion for the current Player.
	 */
	UFUNCTION(BlueprintCallable, Category = "PlayersController_Functions")
	void NextMinion();
	
	/**
	 * Called to select the previous Minion for the current Player.
	 */
	UFUNCTION(BlueprintCallable, Category = "PlayersController_Functions")
	void PreviousMinion();

	/**
	 * Gets the id of the current Player.
	 * @return Id of the current Player.
	 */
	UFUNCTION(BlueprintCallable, Category = "PlayersController_Functions")
	int GetCurrentPlayerId() const;
	
	/**
	 * Gets the id of the current Minion.
	 * @return Id of the current Minion.
	 */
	UFUNCTION(BlueprintCallable, Category = "PlayersController_Functions")
	int GetCurrentMinionId() const;

	/**
	 * Gets a pointer to the current Minion.
	 * @return Pointer to the current Minion.
	 */
	UFUNCTION(BlueprintCallable, Category = "PlayersController_Functions")
	AMinion* const GetCurrentMinion() const;

	/**
	 * Gets the Minion with the chosen id.
	 * @param a_MinionId Id of the chosen Minion.
	 * @param a_PlayerId Id of the chosen Player. Current Player by default.
	 * @return Pointer to the Minion with the chosen id.
	 */
	UFUNCTION(BlueprintCallable, Category = "PlayersController_Functions")
	AMinion* const GetMinionById(int a_MinionId, int a_PlayerId = -1) const;
	
	/**
	 * Gets the Player with the chosen id.
	 * @param a_PlayerId Id of the chosen Player.
	 * @return Pointer to the Player with the chosen id.
	 */
	UFUNCTION(BlueprintCallable, Category = "PlayersController_Functions")
	FPlayerData& GetPlayerById(int a_PlayerId);

protected:
	// ToDo Capy: Erase when refactor finished. They're temporary functions to test Inputs
	UFUNCTION()
	void HandleConfirmInput(EInputKeys a_InputKey, ETriggerEvents a_TriggerEvent, int a_PlayerId);
	
	UFUNCTION()
	void HandleLeftJoystickInputX(float a_AxisX, int a_PlayerId);
	//
	
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayersController")
	TArray<FPlayerData> m_Players; //< Array of Players' data.
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayersController")
	int m_CurrentPlayerId {0}; //!< Id of the current Player.
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayersController")
	int m_CurrentMinionId {0}; //!< Id of the current Minion.
	
};
