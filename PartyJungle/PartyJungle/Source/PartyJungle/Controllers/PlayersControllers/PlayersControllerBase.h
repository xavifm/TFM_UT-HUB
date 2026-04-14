#pragma once

#include <PartyJungle/Controllers/ControllerBase.h>
#include <PartyJungle/Controllers/PlayersControllers/ControllerAuxs/PlayerData.h>

#include "PlayersControllerBase.generated.h"

enum class ETriggerEvents : uint8;
enum class EInputKeys : uint8;
class AMinion;
class UManagerGameInstance;
struct FInputActionValue;


/**
 * Event triggered when the Current Played is Changed.
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(
	FEvent_PlayerChanged, // Name of the structure that will be generated
	// Parameters of the delegate (Type, Name):
	int, a_OldPlayerId, // Id of the Old Player.
	int, a_NewPlayerId // Id of the New Player.
);

/**
 * Event triggered when the Current Minion is Changed.
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(
	FEvent_MinionChanged, // Name of the structure that will be generated
	// Parameters of the delegate (Type, Name):
	int, a_PlayerId, // Id of the Player that own the Minion.
	int, a_OldMinionId, // Id of the Old Minion.
	int, a_NewMinionId // Id of the New Minion.
);


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
	 * Called to select a Player by its Id.
	 * @param a_PlayerId Id of the selected Player.
	 */
	UFUNCTION(BlueprintCallable, Category = "PlayersController_Functions")
	void SetPlayerById(int a_PlayerId);
	
	/**
	 * Called to select the next Player.
	 */
	UFUNCTION(BlueprintCallable, Category = "PlayersController_Functions")
	void NextPlayer();
	
	/**
	 * Called to select a Minion by its Id.
	 * @param a_MinionId Id of the selected Minion.
	 */
	UFUNCTION(BlueprintCallable, Category = "PlayersController_Functions")
	void SetMinionById(int a_MinionId);
	
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
	 * Gets a pointer to the current Minion.
	 * @return Pointer to the current Minion.
	 */
	UFUNCTION(BlueprintCallable, Category = "PlayersController_Functions")
	FPlayerData& GetCurrentPlayer();
	
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
	AMinion* const GetCurrentMinion();

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
	
	UFUNCTION(BlueprintCallable, Category = "PlayersController_Functions")
	TArray<int> GetPlayersByTeamId(int a_TeamId);
	
	UFUNCTION(BlueprintCallable, Category = "PlayersController_Functions")
	int GetPlayersAmount() { return m_Players.Num();}
	
	UFUNCTION(BlueprintCallable, Category = "PlayersController_Functions")
	void SetPlayerInputsEnabled(int a_PlayerId, bool a_Enabled);
	
	UFUNCTION(BlueprintCallable, Category = "PlayersController_Functions")
	void SetAllPlayersInputsEnabled(bool a_Enabled);
	
	UFUNCTION(BlueprintCallable, Category = "PlayersController_Functions")
	bool AssignPlayerToTeam(const int a_PlayerId, const int a_TeamId);

	/**
	 * Gets the 'Player Changed' Event.
	 * @return Pointer to the 'Player Changed' Event.
	 */
	FEvent_PlayerChanged* const GetEvent_PlayerChanged() { return &m_EventPlayerChanged; }
	
	/**
	 * Gets the 'Minion Changed' Event.
	 * @return Pointer to the 'Player Changed' Event.
	 */
	FEvent_MinionChanged* const GetEvent_MinionChanged() { return &m_EventMinionChanged; }

protected:
	/**
	 * Set the inputs for this Controller enabled.
	 * @param a_Enable True if enabled. False if disabled.
	 */
	UFUNCTION()
	virtual void SetInputsEnabled(bool a_Enable) {}
	
	/**
	 * Set the events for this Controller enabled.
	 * @param a_Enable True if enabled. False if disabled.
	 */
	UFUNCTION()
	virtual void SetEventsEnabled(bool a_Enable) {}
	
	
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayersController")
	TArray<FPlayerData> m_Players; //< Array of Players' data.
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayersController")
	int m_CurrentPlayerId {0}; //!< Id of the current Player.
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayersController")
	int m_CurrentMinionId {0}; //!< Id of the current Minion.
	
	UPROPERTY()
	FEvent_PlayerChanged m_EventPlayerChanged; //!< Event triggered when the player is changed.
	
	UPROPERTY()
	FEvent_MinionChanged m_EventMinionChanged; //!< Event triggered when a player's minion is changed.
	
};
