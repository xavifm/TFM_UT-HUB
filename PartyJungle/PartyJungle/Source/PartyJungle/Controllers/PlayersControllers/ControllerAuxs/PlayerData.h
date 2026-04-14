#pragma once

#include <PartyJungle/Player/Minion/Minion.h>

#include <CoreMinimal.h>

#include "PlayerData.generated.h"

class APlayersControllerBase;
class APlayerInputsControllerBase;


/**
 * Struct that contains all necessary Data to manage its Player.
 */
USTRUCT(BlueprintType)
struct FPlayerData
{
	GENERATED_BODY()
	
public:
	/**
	 * Constructor.
	 */
	FPlayerData() = default;

	/**
	 * Destructor.
	 */
	~FPlayerData() = default;

	/**
	 * Inits this Player Data struct.
	 * @param a_PlayersController Pointer to the Players Controller.
	 * @param a_PlayerId Id of this Player.
	 */
	void Init(APlayersControllerBase* const a_PlayersController, int a_PlayerId);

	/**
	 * Gets this Players Id.
	 * @return Players Id.
	 */
	int GetPlayerId() const { return m_PlayerId; }
	
	/**
	 * Gets this players Team Id.
	 * @return Team Id.
	 */
	int GetTeamId() const { return m_TeamId; }

	/**
	 * Gets this players Team Id.
	 * @param a_TeamId Team Id.
	 */
	void SetTeamId(int a_TeamId);

	/**
	 * Gets this Players Input Controller.
	 * @return Pointer to the Players Input Controller.
	 */
	APlayerInputsControllerBase* const GetInputsController() { return m_PlayerInputsController; }
	
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerData")
	TArray<AMinion*> m_Minions; //!< Array with all the Minions that controls this Player.
	
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerData")
	UBlueprint* m_PlayerInputsControllerBP; //!< Pointer to the Player Inputs Blueprint.
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerData")
	int m_TeamId {-1}; //!< Id of this players Team.
	
private:
	int m_PlayerId {-1}; //!< Id of this Player.
	
	APlayerInputsControllerBase* m_PlayerInputsController; //!< Pointer to the instanced Player Inputs Controller.
	
};
