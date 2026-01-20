#pragma once

#include <string>

#include "InputPair.generated.h"

enum class EInputKeys : uint8;
enum class ETriggerEvents : uint8;


/**
 * Struct with the Data of both, the Input Key and the Trigger Event.
 */
USTRUCT(BlueprintType)
struct FInputPair
{
	GENERATED_BODY()
	
public:
	/**
	 * Constructor.
	 */
	FInputPair() = default;

	/**
	 * Destructor.
	 */
	~FInputPair() = default;

	/**
	 * Gets the Input Key.
	 * @return Input Key.
	 */
	EInputKeys GetInputKey() const { return m_InputKey; }
	
	/**
	 * Gets the Trigger Event.
	 * @return Trigger Event.
	 */
	ETriggerEvents GetTriggerEvent() const { return m_TriggerEvent; }

	/**
	 * Gets the Input Id for the indicated InputPair.
	 * @param a_InputKey Selected Input Key.
	 * @param a_TriggerEvent Selected Trigger Event.
	 * @return Input Id for the indicated InputPair.
	 */
	static FString GetInputId(EInputKeys a_InputKey, ETriggerEvents a_TriggerEvent) { return GetInputId(static_cast<uint8>(a_InputKey), static_cast<uint8>(a_TriggerEvent)); }
	
	/**
	 * Gets the Input Id for the indicated InputPair.
	 * @param a_InputKey Selected Input Key.
	 * @param a_TriggerEvent Selected Trigger Event.
	 * @return Input Id for the indicated InputPair.
	 */
	static FString GetInputId(uint8 a_InputKey, uint8 a_TriggerEvent) { return UTF8_TO_TCHAR((std::to_string(a_InputKey) + '.' + std::to_string(a_TriggerEvent)).c_str()); }
	
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerInputs")
	EInputKeys m_InputKey; //!< Input Pair's Input Key.
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerInputs")
	ETriggerEvents m_TriggerEvent; //!< Input Pair's Triger Event.
};