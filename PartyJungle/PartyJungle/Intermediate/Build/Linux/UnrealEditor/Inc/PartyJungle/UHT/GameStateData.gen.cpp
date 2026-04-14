// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/GameStates/GameStateData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGameStateData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ACameraControllerBase_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AControllerBase_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AGameLoopControllerBase_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AGameStateData();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AGameStateData_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_APlayersControllerBase_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AUIControllerBase_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UManagerGameInstance_NoRegister();
PARTYJUNGLE_API UEnum* Z_Construct_UEnum_PartyJungle_EGameControllers();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EGameControllers **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameControllers;
static UEnum* EGameControllers_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameControllers.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameControllers.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PartyJungle_EGameControllers, (UObject*)Z_Construct_UPackage__Script_PartyJungle(), TEXT("EGameControllers"));
	}
	return Z_Registration_Info_UEnum_EGameControllers.OuterSingleton;
}
template<> PARTYJUNGLE_API UEnum* StaticEnum<EGameControllers>()
{
	return EGameControllers_StaticEnum();
}
struct Z_Construct_UEnum_PartyJungle_EGameControllers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Camera.Name", "EGameControllers::Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enum with all Game Controllers Types.\n */" },
#endif
		{ "COUNT.Name", "EGameControllers::COUNT" },
		{ "GameLoop.Name", "EGameControllers::GameLoop" },
		{ "ModuleRelativePath", "GameStates/GameStateData.h" },
		{ "Players.Name", "EGameControllers::Players" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum with all Game Controllers Types." },
#endif
		{ "UI.Name", "EGameControllers::UI" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameControllers::GameLoop", (int64)EGameControllers::GameLoop },
		{ "EGameControllers::Camera", (int64)EGameControllers::Camera },
		{ "EGameControllers::Players", (int64)EGameControllers::Players },
		{ "EGameControllers::UI", (int64)EGameControllers::UI },
		{ "EGameControllers::COUNT", (int64)EGameControllers::COUNT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PartyJungle_EGameControllers_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PartyJungle,
	nullptr,
	"EGameControllers",
	"EGameControllers",
	Z_Construct_UEnum_PartyJungle_EGameControllers_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PartyJungle_EGameControllers_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PartyJungle_EGameControllers_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PartyJungle_EGameControllers_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PartyJungle_EGameControllers()
{
	if (!Z_Registration_Info_UEnum_EGameControllers.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameControllers.InnerSingleton, Z_Construct_UEnum_PartyJungle_EGameControllers_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameControllers.InnerSingleton;
}
// ********** End Enum EGameControllers ************************************************************

// ********** Begin Class AGameStateData Function AddToStateManager ********************************
struct Z_Construct_UFunction_AGameStateData_AddToStateManager_Statics
{
	struct GameStateData_eventAddToStateManager_Parms
	{
		const UManagerGameInstance* a_GameManager;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds this StateData to the StateManager.\n\x09 * @param a_GameManager Reference to the GameManager.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "GameStates/GameStateData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds this StateData to the StateManager.\n@param a_GameManager Reference to the GameManager." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_a_GameManager_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_a_GameManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameStateData_AddToStateManager_Statics::NewProp_a_GameManager = { "a_GameManager", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameStateData_eventAddToStateManager_Parms, a_GameManager), Z_Construct_UClass_UManagerGameInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_a_GameManager_MetaData), NewProp_a_GameManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameStateData_AddToStateManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameStateData_AddToStateManager_Statics::NewProp_a_GameManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateData_AddToStateManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateData_AddToStateManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGameStateData, nullptr, "AddToStateManager", Z_Construct_UFunction_AGameStateData_AddToStateManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateData_AddToStateManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameStateData_AddToStateManager_Statics::GameStateData_eventAddToStateManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateData_AddToStateManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameStateData_AddToStateManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGameStateData_AddToStateManager_Statics::GameStateData_eventAddToStateManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameStateData_AddToStateManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameStateData_AddToStateManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameStateData::execAddToStateManager)
{
	P_GET_OBJECT(UManagerGameInstance,Z_Param_a_GameManager);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddToStateManager(Z_Param_a_GameManager);
	P_NATIVE_END;
}
// ********** End Class AGameStateData Function AddToStateManager **********************************

// ********** Begin Class AGameStateData Function BeginState ***************************************
struct Z_Construct_UFunction_AGameStateData_BeginState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StateData_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Method called when the State and the StateManager are ready. Call instead of BeginPlay().\n\x09 */" },
#endif
		{ "ModuleRelativePath", "GameStates/GameStateData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method called when the State and the StateManager are ready. Call instead of BeginPlay()." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateData_BeginState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGameStateData, nullptr, "BeginState", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateData_BeginState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameStateData_BeginState_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGameStateData_BeginState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameStateData_BeginState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameStateData::execBeginState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginState();
	P_NATIVE_END;
}
// ********** End Class AGameStateData Function BeginState *****************************************

// ********** Begin Class AGameStateData Function CanEnterControllers ******************************
struct Z_Construct_UFunction_AGameStateData_CanEnterControllers_Statics
{
	struct GameStateData_eventCanEnterControllers_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StateData_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns True if all the controllers can be entered.\n\x09 * @return True if all the controllers can be entered.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "GameStates/GameStateData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns True if all the controllers can be entered.\n@return True if all the controllers can be entered." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGameStateData_CanEnterControllers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameStateData_eventCanEnterControllers_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameStateData_CanEnterControllers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameStateData_eventCanEnterControllers_Parms), &Z_Construct_UFunction_AGameStateData_CanEnterControllers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameStateData_CanEnterControllers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameStateData_CanEnterControllers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateData_CanEnterControllers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateData_CanEnterControllers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGameStateData, nullptr, "CanEnterControllers", Z_Construct_UFunction_AGameStateData_CanEnterControllers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateData_CanEnterControllers_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameStateData_CanEnterControllers_Statics::GameStateData_eventCanEnterControllers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateData_CanEnterControllers_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameStateData_CanEnterControllers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGameStateData_CanEnterControllers_Statics::GameStateData_eventCanEnterControllers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameStateData_CanEnterControllers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameStateData_CanEnterControllers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameStateData::execCanEnterControllers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanEnterControllers();
	P_NATIVE_END;
}
// ********** End Class AGameStateData Function CanEnterControllers ********************************

// ********** Begin Class AGameStateData Function CanEnterState ************************************
struct GameStateData_eventCanEnterState_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	GameStateData_eventCanEnterState_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_AGameStateData_CanEnterState = FName(TEXT("CanEnterState"));
bool AGameStateData::CanEnterState() const
{
	GameStateData_eventCanEnterState_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_AGameStateData_CanEnterState);
		const_cast<AGameStateData*>(this)->ProcessEvent(Func,&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_AGameStateData_CanEnterState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "StateData_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns True if the conditions to enter a state are accomplished. True by Default.\n\x09 * @return True if the conditions to enter a state are accomplished.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "GameStates/GameStateData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns True if the conditions to enter a state are accomplished. True by Default.\n@return True if the conditions to enter a state are accomplished." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGameStateData_CanEnterState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameStateData_eventCanEnterState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameStateData_CanEnterState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameStateData_eventCanEnterState_Parms), &Z_Construct_UFunction_AGameStateData_CanEnterState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameStateData_CanEnterState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameStateData_CanEnterState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateData_CanEnterState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateData_CanEnterState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGameStateData, nullptr, "CanEnterState", Z_Construct_UFunction_AGameStateData_CanEnterState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateData_CanEnterState_Statics::PropPointers), sizeof(GameStateData_eventCanEnterState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateData_CanEnterState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameStateData_CanEnterState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(GameStateData_eventCanEnterState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameStateData_CanEnterState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameStateData_CanEnterState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameStateData::execCanEnterState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanEnterState_Implementation();
	P_NATIVE_END;
}
// ********** End Class AGameStateData Function CanEnterState **************************************

// ********** Begin Class AGameStateData Function CanExitControllers *******************************
struct Z_Construct_UFunction_AGameStateData_CanExitControllers_Statics
{
	struct GameStateData_eventCanExitControllers_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StateData_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns True if all the controllers can be exited.\n\x09 * @return True if all the controllers can be exited.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "GameStates/GameStateData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns True if all the controllers can be exited.\n@return True if all the controllers can be exited." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGameStateData_CanExitControllers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameStateData_eventCanExitControllers_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameStateData_CanExitControllers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameStateData_eventCanExitControllers_Parms), &Z_Construct_UFunction_AGameStateData_CanExitControllers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameStateData_CanExitControllers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameStateData_CanExitControllers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateData_CanExitControllers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateData_CanExitControllers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGameStateData, nullptr, "CanExitControllers", Z_Construct_UFunction_AGameStateData_CanExitControllers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateData_CanExitControllers_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameStateData_CanExitControllers_Statics::GameStateData_eventCanExitControllers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateData_CanExitControllers_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameStateData_CanExitControllers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGameStateData_CanExitControllers_Statics::GameStateData_eventCanExitControllers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameStateData_CanExitControllers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameStateData_CanExitControllers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameStateData::execCanExitControllers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanExitControllers();
	P_NATIVE_END;
}
// ********** End Class AGameStateData Function CanExitControllers *********************************

// ********** Begin Class AGameStateData Function CanExitState *************************************
struct GameStateData_eventCanExitState_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	GameStateData_eventCanExitState_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_AGameStateData_CanExitState = FName(TEXT("CanExitState"));
bool AGameStateData::CanExitState() const
{
	GameStateData_eventCanExitState_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_AGameStateData_CanExitState);
		const_cast<AGameStateData*>(this)->ProcessEvent(Func,&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_AGameStateData_CanExitState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "StateData_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns True if the conditions to exit a state are accomplished. True by Default.\n\x09 * @return True if the conditions to exit a state are accomplished.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "GameStates/GameStateData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns True if the conditions to exit a state are accomplished. True by Default.\n@return True if the conditions to exit a state are accomplished." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGameStateData_CanExitState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameStateData_eventCanExitState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameStateData_CanExitState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameStateData_eventCanExitState_Parms), &Z_Construct_UFunction_AGameStateData_CanExitState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameStateData_CanExitState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameStateData_CanExitState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateData_CanExitState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateData_CanExitState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGameStateData, nullptr, "CanExitState", Z_Construct_UFunction_AGameStateData_CanExitState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateData_CanExitState_Statics::PropPointers), sizeof(GameStateData_eventCanExitState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateData_CanExitState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameStateData_CanExitState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(GameStateData_eventCanExitState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameStateData_CanExitState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameStateData_CanExitState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameStateData::execCanExitState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanExitState_Implementation();
	P_NATIVE_END;
}
// ********** End Class AGameStateData Function CanExitState ***************************************

// ********** Begin Class AGameStateData Function GetController ************************************
struct Z_Construct_UFunction_AGameStateData_GetController_Statics
{
	struct GameStateData_eventGetController_Parms
	{
		EGameControllers a_ControllerId;
		const AControllerBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StateData_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets a reference to the InputController.\n\x09 * @param a_ControllerId Selected controller id.\n\x09 * @return Reference to the InputController.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "GameStates/GameStateData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a reference to the InputController.\n@param a_ControllerId Selected controller id.\n@return Reference to the InputController." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_a_ControllerId_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_a_ControllerId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGameStateData_GetController_Statics::NewProp_a_ControllerId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGameStateData_GetController_Statics::NewProp_a_ControllerId = { "a_ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameStateData_eventGetController_Parms, a_ControllerId), Z_Construct_UEnum_PartyJungle_EGameControllers, METADATA_PARAMS(0, nullptr) }; // 1588544072
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameStateData_GetController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameStateData_eventGetController_Parms, ReturnValue), Z_Construct_UClass_AControllerBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameStateData_GetController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameStateData_GetController_Statics::NewProp_a_ControllerId_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameStateData_GetController_Statics::NewProp_a_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameStateData_GetController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateData_GetController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateData_GetController_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGameStateData, nullptr, "GetController", Z_Construct_UFunction_AGameStateData_GetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateData_GetController_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameStateData_GetController_Statics::GameStateData_eventGetController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateData_GetController_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameStateData_GetController_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGameStateData_GetController_Statics::GameStateData_eventGetController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameStateData_GetController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameStateData_GetController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameStateData::execGetController)
{
	P_GET_ENUM(EGameControllers,Z_Param_a_ControllerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const AControllerBase**)Z_Param__Result=P_THIS->GetController(EGameControllers(Z_Param_a_ControllerId));
	P_NATIVE_END;
}
// ********** End Class AGameStateData Function GetController **************************************

// ********** Begin Class AGameStateData Function GetGameStateId ***********************************
struct Z_Construct_UFunction_AGameStateData_GetGameStateId_Statics
{
	struct GameStateData_eventGetGameStateId_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StateData_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the Game State id.\n\x09 * @return Id of the Game State.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "GameStates/GameStateData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Game State id.\n@return Id of the Game State." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGameStateData_GetGameStateId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameStateData_eventGetGameStateId_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameStateData_GetGameStateId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameStateData_GetGameStateId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateData_GetGameStateId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateData_GetGameStateId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGameStateData, nullptr, "GetGameStateId", Z_Construct_UFunction_AGameStateData_GetGameStateId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateData_GetGameStateId_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameStateData_GetGameStateId_Statics::GameStateData_eventGetGameStateId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateData_GetGameStateId_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameStateData_GetGameStateId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGameStateData_GetGameStateId_Statics::GameStateData_eventGetGameStateId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameStateData_GetGameStateId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameStateData_GetGameStateId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameStateData::execGetGameStateId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetGameStateId();
	P_NATIVE_END;
}
// ********** End Class AGameStateData Function GetGameStateId *************************************

// ********** Begin Class AGameStateData Function InitState ****************************************
struct Z_Construct_UFunction_AGameStateData_InitState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StateData_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Initializes the State from the StateData instance.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "GameStates/GameStateData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initializes the State from the StateData instance." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateData_InitState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGameStateData, nullptr, "InitState", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateData_InitState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameStateData_InitState_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGameStateData_InitState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameStateData_InitState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameStateData::execInitState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitState();
	P_NATIVE_END;
}
// ********** End Class AGameStateData Function InitState ******************************************

// ********** Begin Class AGameStateData ***********************************************************
void AGameStateData::StaticRegisterNativesAGameStateData()
{
	UClass* Class = AGameStateData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddToStateManager", &AGameStateData::execAddToStateManager },
		{ "BeginState", &AGameStateData::execBeginState },
		{ "CanEnterControllers", &AGameStateData::execCanEnterControllers },
		{ "CanEnterState", &AGameStateData::execCanEnterState },
		{ "CanExitControllers", &AGameStateData::execCanExitControllers },
		{ "CanExitState", &AGameStateData::execCanExitState },
		{ "GetController", &AGameStateData::execGetController },
		{ "GetGameStateId", &AGameStateData::execGetGameStateId },
		{ "InitState", &AGameStateData::execInitState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGameStateData;
UClass* AGameStateData::GetPrivateStaticClass()
{
	using TClass = AGameStateData;
	if (!Z_Registration_Info_UClass_AGameStateData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GameStateData"),
			Z_Registration_Info_UClass_AGameStateData.InnerSingleton,
			StaticRegisterNativesAGameStateData,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AGameStateData.InnerSingleton;
}
UClass* Z_Construct_UClass_AGameStateData_NoRegister()
{
	return AGameStateData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGameStateData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Actor that contains and manages each State Data, including all its Controllers.\n */" },
#endif
		{ "IncludePath", "GameStates/GameStateData.h" },
		{ "ModuleRelativePath", "GameStates/GameStateData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor that contains and manages each State Data, including all its Controllers." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_GameStateId_MetaData[] = {
		{ "Category", "StateData" },
		{ "ModuleRelativePath", "GameStates/GameStateData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_GameLoopController_MetaData[] = {
		{ "Category", "StateData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Enum used as an id for each GameState type.\n" },
#endif
		{ "ModuleRelativePath", "GameStates/GameStateData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Enum used as an id for each GameState type." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_CameraController_MetaData[] = {
		{ "Category", "StateData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Pointer to the state's GameLoop Controller.\n" },
#endif
		{ "ModuleRelativePath", "GameStates/GameStateData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Pointer to the state's GameLoop Controller." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_PlayersController_MetaData[] = {
		{ "Category", "StateData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Pointer to the state's Camera Controller.\n" },
#endif
		{ "ModuleRelativePath", "GameStates/GameStateData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Pointer to the state's Camera Controller." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_UIController_MetaData[] = {
		{ "Category", "StateData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Pointer to the state's Players Controller.\n" },
#endif
		{ "ModuleRelativePath", "GameStates/GameStateData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Pointer to the state's Players Controller." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_GameControllers_MetaData[] = {
		{ "Category", "GameStateData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Pointer to the state's UI Controller.\n" },
#endif
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "GameStates/GameStateData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Pointer to the state's UI Controller." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_m_GameStateId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_GameLoopController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_CameraController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_PlayersController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_UIController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_GameControllers_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_m_GameControllers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_m_GameControllers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameStateData_AddToStateManager, "AddToStateManager" }, // 3516292500
		{ &Z_Construct_UFunction_AGameStateData_BeginState, "BeginState" }, // 4038077705
		{ &Z_Construct_UFunction_AGameStateData_CanEnterControllers, "CanEnterControllers" }, // 2814058160
		{ &Z_Construct_UFunction_AGameStateData_CanEnterState, "CanEnterState" }, // 118229779
		{ &Z_Construct_UFunction_AGameStateData_CanExitControllers, "CanExitControllers" }, // 966919121
		{ &Z_Construct_UFunction_AGameStateData_CanExitState, "CanExitState" }, // 2321327118
		{ &Z_Construct_UFunction_AGameStateData_GetController, "GetController" }, // 3410246190
		{ &Z_Construct_UFunction_AGameStateData_GetGameStateId, "GetGameStateId" }, // 629273367
		{ &Z_Construct_UFunction_AGameStateData_InitState, "InitState" }, // 325336852
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameStateData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AGameStateData_Statics::NewProp_m_GameStateId = { "m_GameStateId", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameStateData, m_GameStateId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_GameStateId_MetaData), NewProp_m_GameStateId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameStateData_Statics::NewProp_m_GameLoopController = { "m_GameLoopController", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameStateData, m_GameLoopController), Z_Construct_UClass_AGameLoopControllerBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_GameLoopController_MetaData), NewProp_m_GameLoopController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameStateData_Statics::NewProp_m_CameraController = { "m_CameraController", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameStateData, m_CameraController), Z_Construct_UClass_ACameraControllerBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_CameraController_MetaData), NewProp_m_CameraController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameStateData_Statics::NewProp_m_PlayersController = { "m_PlayersController", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameStateData, m_PlayersController), Z_Construct_UClass_APlayersControllerBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_PlayersController_MetaData), NewProp_m_PlayersController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameStateData_Statics::NewProp_m_UIController = { "m_UIController", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameStateData, m_UIController), Z_Construct_UClass_AUIControllerBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_UIController_MetaData), NewProp_m_UIController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameStateData_Statics::NewProp_m_GameControllers_ValueProp = { "m_GameControllers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AControllerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGameStateData_Statics::NewProp_m_GameControllers_Key_KeyProp = { "m_GameControllers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AGameStateData_Statics::NewProp_m_GameControllers = { "m_GameControllers", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameStateData, m_GameControllers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_GameControllers_MetaData), NewProp_m_GameControllers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameStateData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameStateData_Statics::NewProp_m_GameStateId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameStateData_Statics::NewProp_m_GameLoopController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameStateData_Statics::NewProp_m_CameraController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameStateData_Statics::NewProp_m_PlayersController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameStateData_Statics::NewProp_m_UIController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameStateData_Statics::NewProp_m_GameControllers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameStateData_Statics::NewProp_m_GameControllers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameStateData_Statics::NewProp_m_GameControllers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameStateData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameStateData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameStateData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameStateData_Statics::ClassParams = {
	&AGameStateData::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGameStateData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameStateData_Statics::PropPointers),
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameStateData_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameStateData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameStateData()
{
	if (!Z_Registration_Info_UClass_AGameStateData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameStateData.OuterSingleton, Z_Construct_UClass_AGameStateData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameStateData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameStateData);
AGameStateData::~AGameStateData() {}
// ********** End Class AGameStateData *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameStates_GameStateData_h__Script_PartyJungle_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGameControllers_StaticEnum, TEXT("EGameControllers"), &Z_Registration_Info_UEnum_EGameControllers, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1588544072U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameStateData, AGameStateData::StaticClass, TEXT("AGameStateData"), &Z_Registration_Info_UClass_AGameStateData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameStateData), 85908614U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameStates_GameStateData_h__Script_PartyJungle_469210637(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameStates_GameStateData_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameStates_GameStateData_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameStates_GameStateData_h__Script_PartyJungle_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameStates_GameStateData_h__Script_PartyJungle_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
