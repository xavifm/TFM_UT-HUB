#pragma once

#include <CoreMinimal.h>
#include <PartyJungle/Controllers/ControllerAuxs/InputPair.h>
#include "PartyJungle/Controllers/ControllerBase.h"

#include "PlayerInputs.generated.h"

enum class EInputAxes : uint8;
enum class EInputKeys : uint8;
struct FPlayerData;


/**
 * Event used for Input Key Events.
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(
	FEvent_PlayerInputKey, // Name of the structure that will be generated
	// Parameters of the delegate (Type, Name):
	EInputKeys, a_InputKey, // Key pressed.
	ETriggerEvents, a_InputEvent, // Input event.
	int, a_PlayerId // Id of the Player who has triggered the event.
);

/**
 * Event used for Input Axis Events.
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(
  FEvent_PlayerInputAxis, // Name of the structure that will be generated
  // Parameters of the delegate (Type, Name):
  float, a_Axis, // Value of the received axis.
  int, a_PlayerId // Id of the Player who has triggered the event.
);


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
	FEvent_PlayerInputKey* const GetInputEvent(EInputKeys a_InputKey, ETriggerEvents a_TriggerEvent);

	/**
	 * Gets the Input Axis Event from the selected Input Axis.
	 * @param a_InputAxis Selected Input Axis.
	 * @return Pointer to the selected Input Axis Event.
	 */
	FEvent_PlayerInputAxis* const GetInputEvent(EInputAxes a_InputAxis);
	
protected:
	/**
	 * Method called when an Input Key Event is received.
	 * @param a_InputKey Input Key of the received Input Event.
	 * @param a_TriggerEvent Trigger Event of the received Input Event.
	 * @param a_PlayerId Id of the Player who triggered the Input Event.
	 */
	void OnKeyInput(EInputKeys a_InputKey, ETriggerEvents a_TriggerEvent, int a_PlayerId);

	/**
	 * Method called when an Input Axis Event from the X Axis of the Left Joystick is received.
	 * @param a_Axis Value of the received Axis.
	 */
	void OnAxis_LeftJoystickX(float a_Axis);
	
	/**
	 * Method called when an Input Axis Event from the Y Axis of the Left Joystick is received.
	 * @param a_Axis Value of the received Axis.
	 */
	void OnAxis_LeftJoystickY(float a_Axis);
	
	/**
	 * Method called when an Input Axis Event from the X Axis of the Right Joystick is received.
	 * @param a_Axis Value of the received Axis.
	 */
	void OnAxis_RightJoystickX(float a_Axis);
	
	/**
	 * Method called when an Input Axis Event from the Y Axis of the Right Joystick is received.
	 * @param a_Axis Value of the received Axis.
	 */
	void OnAxis_RightJoystickY(float a_Axis);

	/**
	 * Gets if the selected Axis value is valid. 
	 * @param a_Axis Value of the selected Axis.
	 * @return True if the selected Axis is valid.
	 */
	bool IsValidAxis(float a_Axis) { return (FMath::Abs(a_Axis) > 0.1f); }
	
	
	UPROPERTY() float AXIS_THRESHOLD {0.1f}; //!< Threshold for an Axis to be considered valid.
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerInputs")
	TArray<FInputPair> m_KeyMap; //!< All the combinations of Input Keys and Trigger Events needed by the Player Inputs Controller in the current State.
	
	UPROPERTY()
	TMap<FString, FEvent_PlayerInputKey> m_KeyEvents; //!< Map with all the Input Key Events active in the current state, and their Ids.
	
	UPROPERTY()
	TMap<uint8, FEvent_PlayerInputAxis> m_AxisEvents; //!< Map with all the Input Axis Events active in the current state, and their Ids.
	
	FPlayerData* m_PlayerData {nullptr}; //!< Pointer to the Player Data associated to this Player Inputs Controller.
};
