#pragma once

#include "InputAxisData.generated.h"

class FEvent_PlayerInputAxis;


/**
 * Event used for Input Axis Events.
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(
	FEvent_PlayerInputAxis, // Name of the structure that will be generated
	// Parameters of the delegate (Type, Name):
	float, a_Axis, // Value of the received axis.
	int, a_PlayerId, // Id of the Player who has triggered the event.
	bool, a_WasActive // Indicates if the axis was active on the previous frame.
);


/**
 * Input data used to manage Axes.
 */
USTRUCT(BlueprintType)
struct FInputAxisData
{
	GENERATED_BODY()
	
public:
	/**
	 * Constructor.
	 */
	FInputAxisData() = default;

	/**
	 * Destructor.
	 */
	~FInputAxisData() = default;
	
	/**
	 * Gets the 'AxisReceived' event.
	 * @return Pointer to the 'AxisReceived' event.
	 */
	FEvent_PlayerInputAxis* const GetAxisReceivedEvent() { return &m_AxisReceivedEvent; }
	
	/**
	 * Gets the 'AxisReleased' event.
	 * @return Pointer to the 'AxisReleased' event.
	 */
	FEvent_PlayerInputAxis* const GetAxisReleasedEvent() { return &m_AxisReleasedEvent; }

	/**
	 * Gets if the axis is currently active.
	 * @return True if the axis is active.
	 */
	bool IsAxisActive() const { return m_IsAxisActiveFlag; }

	/**
	 * Sets the axis activated or deactivated.
	 * @param a_IsAxisActive True to activate the axis. False to deactivate it.
	 */
	void SetAxisActive(bool a_IsAxisActive) { m_IsAxisActiveFlag = a_IsAxisActive; }

	/**
	 * Clears the InputAxis events data.
	 */
	void ClearEvents()
	{
		m_AxisReceivedEvent.Clear();
		m_AxisReleasedEvent.Clear();
		m_IsAxisActiveFlag = false;
	}
	
protected:
	UPROPERTY()
	FEvent_PlayerInputAxis m_AxisReceivedEvent; //!< Event triggered when an axis is actioned.
	
	UPROPERTY()
	FEvent_PlayerInputAxis m_AxisReleasedEvent; //!< Event triggered when an axis is released.
	
	UPROPERTY()
	bool m_IsAxisActiveFlag {false}; //!< Flag to indicate if the axis is currently active.
};
