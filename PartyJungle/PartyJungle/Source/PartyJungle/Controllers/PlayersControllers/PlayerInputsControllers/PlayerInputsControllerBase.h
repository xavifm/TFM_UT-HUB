#pragma once

#include <PartyJungle/Controllers/ControllerBase.h>
#include <PartyJungle/Controllers/PlayersControllers/ControllerAuxs/InputKeyData.h>
#include <PartyJungle/Controllers/PlayersControllers/ControllerAuxs/InputAxisData.h>

#include <CoreMinimal.h>

#include "PlayerInputsControllerBase.generated.h"

enum class EInputAxes : uint8;
enum class EInputKeys : uint8;
struct FPlayerData;


/**
* Input Controller for each specific Player.
*/
UCLASS()
class APlayerInputsControllerBase : public AControllerBase
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
	 * Sets the Player Data containing this Player Input Controller.
	 * @param a_PlayerData Pointer to the Player Data containing this Player Input Controller.
	 */
	void SetPlayerData(FPlayerData* const a_PlayerData) { m_PlayerData = a_PlayerData; }

	/**
	 * Gets the Input Key Event from the selected Input Key and Trigger Event.
	 * @param a_InputKey Selected Input Key.
	 * @param a_TriggerEvent Selected Trigger Event.
	 * @return Pointer to the selected Input Key Event.
	 */
	FEvent_PlayerInputKey* const GetInputKeyEvent(EInputKeys a_InputKey, ETriggerEvents a_TriggerEvent);

	/**
	 * Gets the Input Axis Event from the selected Input Axis.
	 * @param a_InputAxis Selected Input Axis.
	 * @return Pointer to the selected Input Axis Event.
	 */
	FEvent_PlayerInputAxis* const GetInputAxisEvent(EInputAxes a_InputAxis);
	
	/**
	 * Gets the Input Axis Event from the selected Input Axis.
	 * @param a_InputAxis Selected Input Axis.
	 * @return Pointer to the selected Input Axis Event.
	 */
	FEvent_PlayerInputAxis* const GetInputAxisReleasedEvent(EInputAxes a_InputAxis);

	/**
	 * Sets the associated Player Inputs enabled.
	 * @param a_Enabled Enables the associated Player Inputs.
	 */
	void SetInputsEnabled(bool a_Enabled) { m_PlayerInputsEnabled = a_Enabled; }

	/**
	 * Gets if the associated Player Inputs enabled.
	 * @return True if the associated Player Inputs enabled.
	 */
	bool GetInputsEnabled() const { return m_PlayerInputsEnabled; }
	
protected:
	/**
	 * Method called when an Input Key Event is received.
	 * @param a_InputKey Input Key of the received Input Event.
	 * @param a_TriggerEvent Trigger Event of the received Input Event.
	 * @param a_PlayerId Id of the Player who triggered the Input Event.
	 */
	UFUNCTION()
	void OnKeyInput(EInputKeys a_InputKey, ETriggerEvents a_TriggerEvent, int a_PlayerId);

	/**
	 * Method called when an Input Axis Event from the X Axis of the Left Joystick is received.
	 * @param a_Axis Value of the received Axis.
	 */
	UFUNCTION()
	void OnAxis_LeftJoystickX(float a_Axis);
	
	/**
	 * Method called when an Input Axis Event from the Y Axis of the Left Joystick is received.
	 * @param a_Axis Value of the received Axis.
	 */
	UFUNCTION()
	void OnAxis_LeftJoystickY(float a_Axis);
	
	/**
	 * Method called when an Input Axis Event from the X Axis of the Right Joystick is received.
	 * @param a_Axis Value of the received Axis.
	 */
	UFUNCTION()
	void OnAxis_RightJoystickX(float a_Axis);
	
	/**
	 * Method called when an Input Axis Event from the Y Axis of the Right Joystick is received.
	 * @param a_Axis Value of the received Axis.
	 */
	UFUNCTION()
	void OnAxis_RightJoystickY(float a_Axis);

	/**
	 * Gets if the selected Axis value is valid. 
	 * @param a_Axis Value of the selected Axis.
	 * @return True if the selected Axis is valid.
	 */
	bool IsValidAxis(float a_Axis);

	/**
	 * Method called when an Input Axis Event is received.
	 * @param a_AxisId Id of the received Input Axis Event.
	 * @param a_Axis Value of the received Input Axis Event.
	 */
	void OnAxisInput(EInputAxes a_AxisId, float a_Axis);

	
protected:
	UPROPERTY() float AXIS_THRESHOLD {0.1f}; //!< Threshold for an Axis to be considered valid.
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerInputs")
	TArray<FInputKeyData> m_KeyMap; //!< All the combinations of Input Keys and Trigger Events needed by the Player Inputs Controller in the current State.
	
	UPROPERTY()
	TMap<FString, FEvent_PlayerInputKey> m_KeyEvents; //!< Map with all the Input Key Events active in the current state, and their Ids.
	
	UPROPERTY()
	TMap<uint8, FInputAxisData> m_AxisEvents; //!< Map with all the Input Axis Events active in the current state, and their Ids.
	
	FPlayerData* m_PlayerData {nullptr}; //!< Pointer to the Player Data associated to this Player Inputs Controller.
	
	bool m_PlayerInputsEnabled {false}; //!< Indicates if the associated Player has its inputs enabled.
};
