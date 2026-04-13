#pragma once

#include <Kismet/GameplayStatics.h>
#include <CoreMinimal.h>
#include <Modules/ModuleManager.h>
#include <string>

#include "InputManager.generated.h"

class FEvent_PlayerInputAxis;
class FEvent_PlayerInputKey;
class UManagerGameInstance;
class AInputControllerBase;


#pragma region Enums

/**
 * Enum with all possible Key Inputs.
 */
UENUM() 
enum class EInputKeys : uint8
{
	Button_Start = 0 UMETA(DisplayName = "Button_Start"),	Button_Select UMETA(DisplayName = "Button_Select"),
	Button_Down UMETA(DisplayName = "Button_Down"),			Button_Up UMETA(DisplayName = "Button_Up"),			Button_Right UMETA(DisplayName = "Button_Right"),		Button_Left UMETA(DisplayName = "Button_Left"), 
	Cross_Down UMETA(DisplayName = "Cross_Down"),			Cross_Up UMETA(DisplayName = "Cross_Up"),			Cross_Right UMETA(DisplayName = "Cross_Right"),			Cross_Left UMETA(DisplayName = "Cross_Left"), 
	Trigger1_Right UMETA(DisplayName = "Trigger1_Right"),	Trigger1_Left UMETA(DisplayName = "Trigger1_Left"),	Trigger2_Right UMETA(DisplayName = "Trigger2_Right"),	Trigger2_Left UMETA(DisplayName = "Trigger2_Left"),
	COUNT
};

/**
 * Enum with all possible Axis Inputs.
 */
UENUM() 
enum class EInputAxes : uint8
{
	AxisX_Left = 0 UMETA(DisplayName = "AxisX_Left"),		AxisY_Left UMETA(DisplayName = "AxisY_Left"),		AxisX_Right UMETA(DisplayName = "AxisX_Right"),			AxisY_Right UMETA(DisplayName = "AxisY_Right"),
	COUNT
};

/**
 * Enum with all the Trigger Events.
 */
UENUM()
enum class ETriggerEvents : uint8 { Pressed = 0, Released, Repeat, DoubleClick, Axis, COUNT };

#pragma endregion Enums


#pragma region ClassDeclaration

/**
 * Manager for all Game Inputs.
 */
UCLASS()
class AInputManager : public APawn
{
	GENERATED_BODY()
	
public:
	/** 
	 * Overridable native event for when play begins for this actor. 
	 */
	void BeginPlay() override;

	/**
	 * Allows a Pawn to set up custom input bindings. Called upon possession by a PlayerController.
	 * @param PlayerInputComponent InputComponent created by CreatePlayerInputComponent().
	 */
	void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	/**
	 * Checks if the Input Manager has been completely loaded.
	 */
	void CheckInputManagerLoaded();

	/**
	 * Resets InputManager data.
	 */
	void ResetInputs();
	
	// ToDo Capy: Revisar que tot el tema de "Players Possessed" funcioni.
	/*
	void SetAllPlayersPossessed();
	
	void SetPossessions(TArray<int> a_PlayerIds);
	
	void AddPossessions(TArray<int> a_PlayerIds);
	
	void RemovePossessions(TArray<int> a_PlayerIds);
	
	void ResetPossessions();
	*/

	/**
	 * Gets the indicated Input Key Event from the chosen Player.
	 * @param a_PlayerId Chosen Player Id.
	 * @param a_InputKey Id of the chosen Input Key.
	 * @param a_TriggerEvent Id of the chosen Trigger Event.
	 * @return Pointer to the Player's Input Key Event.
	 */
	FEvent_PlayerInputKey* const GetPlayerKeyEvent(int a_PlayerId, EInputKeys a_InputKey, ETriggerEvents a_TriggerEvent);
	
	/**
	 * Gets the indicated Input Axis Event from the chosen Player.
	 * @param a_PlayerId Chosen Player Id.
	 * @param a_InputAxis Id of the chosen Input Axis.
	 * @return Pointer to the Player's Input Axis Event.
	 */
	FEvent_PlayerInputAxis* const GetPlayerAxisEvent(int a_PlayerId, EInputAxes a_InputAxis);
	
	/**
	 * Gets the indicated Input Axis Event from the chosen Player.
	 * @param a_PlayerId Chosen Player Id.
	 * @param a_InputAxis Id of the chosen Input Axis.
	 * @return Pointer to the Player's Input Axis Event.
	 */
	FEvent_PlayerInputAxis* const GetPlayerAxisReleasedEvent(int a_PlayerId, EInputAxes a_InputAxis);

	/**
	 * Binds the chosen Input Key to the indicated Function for all Players.
	 * @tparam UserClass Type of the class creating the Input Binding.
	 * @param a_InputKey Id of the chosen Input Key.
	 * @param a_TriggerEvent Id of the chosen Trigger Event.
	 * @param a_Object Pointer to the object creating the Input Binding.
	 * @param a_Function Pointer to the Function to Bind.
	 * @return Array with pointers to the Input Action for each Player.
	 */
	template <typename UserClass>
	TArray<FInputActionBinding*> const BindInput(EInputKeys a_InputKey, ETriggerEvents a_TriggerEvent, UserClass* a_Object, typename FInputActionHandlerSignature::TMethodPtr<UserClass, EInputKeys, ETriggerEvents, int> a_Function);
	
	/**
	 * Binds the chosen Input Key to the indicated Function for the chosen Players.
	 * @tparam UserClass Type of the class creating the Input Binding.
	 * @param a_PlayerIds Ids of the Players which will bind the Input.
	 * @param a_InputKey Id of the chosen Input Key.
	 * @param a_TriggerEvent Id of the chosen Trigger Event.
	 * @param a_Object Pointer to the object creating the Input Binding.
	 * @param a_Function Pointer to the Function to Bind.
	 * @return Array with pointers to the Input Action for each Player.
	 */
	template <typename UserClass>
	TArray<FInputActionBinding*> const BindInput(TArray<int> a_PlayerIds, EInputKeys a_InputKey, ETriggerEvents a_TriggerEvent, UserClass* a_Object, typename FInputActionHandlerSignature::TMethodPtr<UserClass, EInputKeys, ETriggerEvents, int> a_Function);
	
	/**
	 * Binds the chosen Input Axis to the indicated Function for all Players.
	 * @tparam UserClass Type of the class creating the Input Binding.
	 * @param a_InputAxis Id of the chosen Input Axis.
	 * @param a_Object Pointer to the object creating the Input Binding.
	 * @param a_Function Pointer to the Function to Bind.
	 * @return Array with pointers to the Input Action for each Player.
	 */
	template <typename UserClass>
	TArray<FInputAxisBinding*> const BindAxis(EInputAxes a_InputAxis, UserClass* a_Object, TDelegate<void(float)>::TMethodPtr<UserClass> a_Function);
	
	/**
	 * Binds the chosen Input Axis to the indicated Function for the chosen Players.
	 * @tparam UserClass Type of the class creating the Input Binding.
	 * @param a_PlayerIds Ids of the Players which will bind the Input.
	 * @param a_InputAxis Id of the chosen Input Axis.
	 * @param a_Object Pointer to the object creating the Input Binding.
	 * @param a_Function Pointer to the Function to Bind.
	 * @return Array with pointers to the Input Action for each Player.
	 */
	template <typename UserClass>
	TArray<FInputAxisBinding*> const BindAxis(TArray<int> a_PlayerIds, EInputAxes a_InputAxis, UserClass* a_Object, TDelegate<void(float)>::TMethodPtr<UserClass> a_Function);

	/**
	 * Unbinds the chosen Input Key for all Players.
	 * @tparam UserClass Type of the class creating the Input Binding.
	 * @param a_InputKey Id of the chosen Input Key.
	 * @param a_TriggerEvent Id of the chosen Trigger Event.
	 * @param a_Object Pointer to the object Unbinding the Input.
	 * @return True if the Unbind was successful.
	 */
	template <typename UserClass>
	bool UnbindInput(EInputKeys a_InputKey, ETriggerEvents a_TriggerEvent, UserClass* a_Object);
	
	/**
	 * Unbinds the chosen Input Key for the chosen Players.
	 * @tparam UserClass Type of the class creating the Input Binding.
	 * @param a_PlayerIds Ids of the Players which will Unbind the Input.
	 * @param a_InputKey Id of the chosen Input Key.
	 * @param a_TriggerEvent Id of the chosen Trigger Event.
	 * @param a_Object Pointer to the object Unbinding the Input.
	 * @return True if the Unbind was successful.
	 */
	template <typename UserClass>
	bool UnbindInput(TArray<int> a_PlayerIds, EInputKeys a_InputKey, ETriggerEvents a_TriggerEvent, UserClass* a_Object);
	
	/**
	 * Unbinds the chosen Input Axis for the chosen Players.
	 * @tparam UserClass Type of the class creating the Input Binding.
	 * @param a_InputAxis Id of the chosen Input Axis.
	 * @param a_Object Pointer to the object Unbinding the Input.
	 * @return True if the Unbind was successful.
	 */
	template <typename UserClass>
	bool UnbindAxis(EInputAxes a_InputAxis, UserClass* a_Object);
	
	/**
	 * Unbinds the chosen Input Axis for the chosen Players.
	 * @tparam UserClass Type of the class creating the Input Binding.
	 * @param a_PlayerIds Ids of the Players which will Unbind the Input.
	 * @param a_InputAxis Id of the chosen Input Axis.
	 * @param a_Object Pointer to the object Unbinding the Input.
	 * @return True if the Unbind was successful.
	 */
	template <typename UserClass>
	bool UnbindAxis(TArray<int> a_PlayerIds, EInputAxes a_InputAxis, UserClass* a_Object);
	
private:
	/**
	 * Gets the Input Bind Key for the selected Input Event.
	 * @tparam UserClass Type of the Binded class.
	 * @param a_PlayerId Id of the Binded Player.
	 * @param a_InputKey Id of the Binded Input Key.
	 * @param a_TriggerEvent Id of the Binded Trigger Event.
	 * @param a_Object Pointer to the Binded Object.
	 * @return Bind Key for the selected Input Event.
	 */
	template <typename UserClass>
	FString GetInputBindKey(int a_PlayerId, EInputKeys a_InputKey, ETriggerEvents a_TriggerEvent, UserClass* a_Object);
	
	/**
	 * Gets the Input Bind Axis for the selected Input Event.
	 * @tparam UserClass Type of the Binded class.
	 * @param a_PlayerId Id of the Binded Player.
	 * @param a_InputAxis Id of the Binded Input Axis.
	 * @param a_TriggerEvent Id of the Binded Trigger Event.
	 * @param a_Object Pointer to the Binded Object.
	 * @return Bind Key for the selected Input Event.
	 */
	template <typename UserClass>
	FString GetInputBindKey(int a_PlayerId, EInputAxes a_InputAxis, EInputEvent a_TriggerEvent, UserClass* a_Object);

	/**
	 * Gets all of the Players Ids.
	 * @return Array with each Player Id.
	 */
	TArray<int> GetAllPlayerIds();

	
protected:
	TMap<FString, FInputActionBinding*> m_InputBindings; //!< Map with all the current Input Key Bindings.
	TMap<FString, FInputAxisBinding*> m_AxisBindings; //!< Map with all the current Input Axis Bindings.
	
private:
	bool m_InputManagerReady {false}; //!< Indicates if the Input Manager is Ready to Load.
	
	bool m_InputManagerLoaded {false}; //!< Indicates if the Input Manager has been Loaded.
	
	TArray<int> m_PossessedPlayers {0}; //!< Array with all the current Possessed Players.
};

#pragma endregion ClassDeclaration


/* ************************************************************************************************************************************************************************** */

#pragma region TemplatesLogic

template <typename UserClass>
TArray<FInputActionBinding*> const AInputManager::BindInput(EInputKeys a_InputKey, ETriggerEvents a_TriggerEvent, UserClass* a_Object, TDelegate<void()>::TMethodPtr<UserClass, EInputKeys, ETriggerEvents, int> a_Function)
{
	return BindInput(GetAllPlayerIds(), a_InputKey, a_TriggerEvent, a_Object, a_Function);
}

template <typename UserClass>
TArray<FInputActionBinding*> const AInputManager::BindInput(TArray<int> a_PlayerIds, EInputKeys a_InputKey, ETriggerEvents a_TriggerEvent, UserClass* a_Object, TDelegate<void()>::TMethodPtr<UserClass, EInputKeys, ETriggerEvents, int> a_Function)
{
	TArray<FInputActionBinding*> BindActions;
	
	for (auto PlayerId : a_PlayerIds)
	{
		APlayerController* PlayerController {UGameplayStatics::GetPlayerController(GetWorld(), PlayerId)};
		auto BindKey {GetInputBindKey<UserClass>(PlayerId, a_InputKey, a_TriggerEvent, a_Object)};
		
		if (!m_InputBindings.Contains(BindKey))
		{
			FInputActionBinding* BindAction = &PlayerController->InputComponent->BindAction<TDelegate<void(EInputKeys, ETriggerEvents, int)>, UserClass, EInputKeys, ETriggerEvents, int>
				(FName(*UEnum::GetDisplayValueAsText(a_InputKey).ToString()), static_cast<EInputEvent>(a_TriggerEvent), a_Object, a_Function, a_InputKey, a_TriggerEvent, PlayerId);
			if (BindAction)
			{
				BindActions.Add(BindAction);
				m_InputBindings.Add(BindKey, BindAction);
			}
		}
	}
	
	return BindActions;
}

template <typename UserClass>
TArray<FInputAxisBinding*> const AInputManager::BindAxis(EInputAxes a_InputAxis, UserClass* a_Object, TDelegate<void(float)>::TMethodPtr<UserClass> a_Function)
{
	return BindInput(GetAllPlayerIds(), a_InputAxis, a_Object, a_Function);
}

template <typename UserClass>
TArray<FInputAxisBinding*> const AInputManager::BindAxis(TArray<int> a_PlayerIds, EInputAxes a_InputAxis, UserClass* a_Object, TDelegate<void(float)>::TMethodPtr<UserClass> a_Function)
{
	TArray<FInputAxisBinding*> BindActions;
	
	for (auto PlayerId : a_PlayerIds)
	{
		APlayerController* PlayerController {UGameplayStatics::GetPlayerController(GetWorld(), PlayerId)};
		auto BindKey {GetInputBindKey<UserClass>(PlayerId, a_InputAxis, EInputEvent::IE_Axis, a_Object)};
		
		if (!m_InputBindings.Contains(BindKey))
		{
			FInputAxisBinding* BindAxis = &PlayerController->InputComponent->BindAxis(FName(*UEnum::GetDisplayValueAsText(a_InputAxis).ToString()), a_Object, a_Function);
			if (BindAxis)
			{
				BindActions.Add(BindAxis);
				m_AxisBindings.Add(BindKey, BindAxis);
			}
		}
	}
	
	return BindActions;
}

template <typename UserClass>
bool AInputManager::UnbindInput(EInputKeys a_InputKey, ETriggerEvents a_TriggerEvent, UserClass* a_Object)
{
	bool UnbindSuccessful {false};
	
	auto GameData {GetGameInstance<UManagerGameInstance>()->GetGameDataManager()};
	for (int PlayerId {0}; PlayerId < GameData.GetPlayersInBoard(); ++PlayerId)
	{
		APlayerController* PlayerController {UGameplayStatics::GetPlayerController(GetWorld(), PlayerId)};
		auto BindKey {GetInputBindKey<UserClass>(PlayerId, a_InputKey, a_TriggerEvent, a_Object)};
		
		if (m_InputBindings.Contains(BindKey))
		{
			PlayerController->InputComponent->RemoveActionBindingForHandle(m_InputBindings[BindKey]->GetHandle());
			m_InputBindings.Remove(BindKey);
			UnbindSuccessful = true;
		}
	}
		
	return UnbindSuccessful;
}

template <typename UserClass>
bool AInputManager::UnbindInput(TArray<int> a_PlayerIds, EInputKeys a_InputKey, ETriggerEvents a_TriggerEvent, UserClass* a_Object)
{
	bool UnbindSuccessful {true};
	
	for (auto PlayerId : a_PlayerIds)
	{
		APlayerController* PlayerController {UGameplayStatics::GetPlayerController(GetWorld(), PlayerId)};
		auto BindKey {GetInputBindKey<UserClass>(PlayerId, a_InputKey, a_TriggerEvent, a_Object)};
		
		if (m_InputBindings.Contains(BindKey))
		{
			PlayerController->InputComponent->RemoveActionBindingForHandle(m_InputBindings[BindKey]->GetHandle());
			m_InputBindings.Remove(BindKey);
		}
		else
		{
			UnbindSuccessful = false;
		}
	}
		
	return UnbindSuccessful;
}

template <typename UserClass>
bool AInputManager::UnbindAxis(EInputAxes a_InputAxis, UserClass* a_Object)
{
	bool UnbindSuccessful {true};
	
	auto GameData {GetGameInstance<UManagerGameInstance>()->GetGameDataManager()};
	for (int PlayerId {0}; PlayerId < GameData.GetPlayersInBoard(); ++PlayerId)
	{
		APlayerController* PlayerController {UGameplayStatics::GetPlayerController(GetWorld(), PlayerId)};
		auto BindKey {GetInputBindKey<UserClass>(PlayerId, a_InputAxis, EInputEvent::IE_Axis, a_Object)};
		
		if (m_AxisBindings.Contains(BindKey))
		{
			PlayerController->InputComponent->RemoveAxisBinding(m_AxisBindings[BindKey]->AxisName);
			m_AxisBindings.Remove(BindKey);
			UnbindSuccessful = true;
		}
	}
		
	return UnbindSuccessful;
}

template <typename UserClass>
bool AInputManager::UnbindAxis(TArray<int> a_PlayerIds, EInputAxes a_InputAxis, UserClass* a_Object)
{
	bool UnbindSuccessful {true};
	
	for (auto PlayerId : a_PlayerIds)
	{
		APlayerController* PlayerController {UGameplayStatics::GetPlayerController(GetWorld(), PlayerId)};
		auto BindKey {GetInputBindKey<UserClass>(PlayerId, a_InputAxis, EInputEvent::IE_Axis, a_Object)};
		
		if (m_AxisBindings.Contains(BindKey))
		{
			PlayerController->InputComponent->RemoveAxisBinding(m_AxisBindings[BindKey]->AxisName);
			m_AxisBindings.Remove(BindKey);
		}
		else
		{
			UnbindSuccessful = false;
		}
	}
		
	return UnbindSuccessful;
}

template <typename UserClass>
FString AInputManager::GetInputBindKey(int a_PlayerId, EInputKeys a_InputKey, ETriggerEvents a_TriggerEvent, UserClass* a_Object)
{
	/*uint64 MultiplyValue {1U}; 
	for (uint32 i = 0; i < std::to_string((uint64)a_Object).length(); ++i)
	{
		MultiplyValue *= 10U;
	}*/
	
	return UTF8_TO_TCHAR((std::to_string(a_PlayerId) + ".K" + std::to_string((uint32)a_InputKey) + '.' + std::to_string((uint32)a_TriggerEvent) + '.' + std::to_string((uint64)a_Object) + '.').c_str());
}

template <typename UserClass>
FString AInputManager::GetInputBindKey(int a_PlayerId, EInputAxes a_InputAxis, EInputEvent a_TriggerEvent, UserClass* a_Object)
{
	return UTF8_TO_TCHAR((std::to_string(a_PlayerId) + ".A" + std::to_string((uint32)a_InputAxis) + '.' + std::to_string((uint32)a_TriggerEvent) + '.' + std::to_string((uint64)a_Object) + '.').c_str());
}

#pragma endregion TemplatesLogic
