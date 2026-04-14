// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/GameInstance/ManagerGameInstance.h"
#include "PartyJungle/GameInstance/GameInstanceAux/GameData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeManagerGameInstance() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ADuelManager_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AInputManager_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ASceneManager_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AStateManager_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UManagerGameInstance();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UManagerGameInstance_NoRegister();
PARTYJUNGLE_API UFunction* Z_Construct_UDelegateFunction_PartyJungle_Event_GameManagerLoaded__DelegateSignature();
PARTYJUNGLE_API UScriptStruct* Z_Construct_UScriptStruct_FGameData();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FEvent_GameManagerLoaded **********************************************
struct Z_Construct_UDelegateFunction_PartyJungle_Event_GameManagerLoaded__DelegateSignature_Statics
{
	struct _Script_PartyJungle_eventEvent_GameManagerLoaded_Parms
	{
		const UManagerGameInstance* a_GameManager;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Event used for the 'Game Manager Loaded' Event.\n */// Name of the structure that will be generated\n// Parameters of the delegate (Type, Name):\n// Loaded Manager reference.\n" },
#endif
		{ "ModuleRelativePath", "GameInstance/ManagerGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event used for the 'Game Manager Loaded' Event.\n // Name of the structure that will be generated\n// Parameters of the delegate (Type, Name):\n// Loaded Manager reference." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_a_GameManager_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_a_GameManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PartyJungle_Event_GameManagerLoaded__DelegateSignature_Statics::NewProp_a_GameManager = { "a_GameManager", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PartyJungle_eventEvent_GameManagerLoaded_Parms, a_GameManager), Z_Construct_UClass_UManagerGameInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_a_GameManager_MetaData), NewProp_a_GameManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PartyJungle_Event_GameManagerLoaded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PartyJungle_Event_GameManagerLoaded__DelegateSignature_Statics::NewProp_a_GameManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PartyJungle_Event_GameManagerLoaded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_PartyJungle_Event_GameManagerLoaded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_PartyJungle, nullptr, "Event_GameManagerLoaded__DelegateSignature", Z_Construct_UDelegateFunction_PartyJungle_Event_GameManagerLoaded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PartyJungle_Event_GameManagerLoaded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_PartyJungle_Event_GameManagerLoaded__DelegateSignature_Statics::_Script_PartyJungle_eventEvent_GameManagerLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PartyJungle_Event_GameManagerLoaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PartyJungle_Event_GameManagerLoaded__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_PartyJungle_Event_GameManagerLoaded__DelegateSignature_Statics::_Script_PartyJungle_eventEvent_GameManagerLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PartyJungle_Event_GameManagerLoaded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PartyJungle_Event_GameManagerLoaded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEvent_GameManagerLoaded_DelegateWrapper(const FMulticastScriptDelegate& Event_GameManagerLoaded, const UManagerGameInstance* a_GameManager)
{
	struct _Script_PartyJungle_eventEvent_GameManagerLoaded_Parms
	{
		const UManagerGameInstance* a_GameManager;
	};
	_Script_PartyJungle_eventEvent_GameManagerLoaded_Parms Parms;
	Parms.a_GameManager=a_GameManager;
	Event_GameManagerLoaded.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FEvent_GameManagerLoaded ************************************************

// ********** Begin Class UManagerGameInstance Function CheckGameManagerLoaded *********************
struct Z_Construct_UFunction_UManagerGameInstance_CheckGameManagerLoaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if the Game Manager has finished Loading.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "GameInstance/ManagerGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the Game Manager has finished Loading." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManagerGameInstance_CheckGameManagerLoaded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UManagerGameInstance, nullptr, "CheckGameManagerLoaded", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManagerGameInstance_CheckGameManagerLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManagerGameInstance_CheckGameManagerLoaded_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UManagerGameInstance_CheckGameManagerLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManagerGameInstance_CheckGameManagerLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManagerGameInstance::execCheckGameManagerLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckGameManagerLoaded();
	P_NATIVE_END;
}
// ********** End Class UManagerGameInstance Function CheckGameManagerLoaded ***********************

// ********** Begin Class UManagerGameInstance Function GetDuelManager *****************************
struct Z_Construct_UFunction_UManagerGameInstance_GetDuelManager_Statics
{
	struct ManagerGameInstance_eventGetDuelManager_Parms
	{
		const ADuelManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Manager_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets a reference to the DuelManager.\n\x09 * @return Reference to the DuelManager.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "GameInstance/ManagerGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a reference to the DuelManager.\n@return Reference to the DuelManager." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManagerGameInstance_GetDuelManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManagerGameInstance_eventGetDuelManager_Parms, ReturnValue), Z_Construct_UClass_ADuelManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManagerGameInstance_GetDuelManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManagerGameInstance_GetDuelManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManagerGameInstance_GetDuelManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManagerGameInstance_GetDuelManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UManagerGameInstance, nullptr, "GetDuelManager", Z_Construct_UFunction_UManagerGameInstance_GetDuelManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManagerGameInstance_GetDuelManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManagerGameInstance_GetDuelManager_Statics::ManagerGameInstance_eventGetDuelManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManagerGameInstance_GetDuelManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManagerGameInstance_GetDuelManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UManagerGameInstance_GetDuelManager_Statics::ManagerGameInstance_eventGetDuelManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManagerGameInstance_GetDuelManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManagerGameInstance_GetDuelManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManagerGameInstance::execGetDuelManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const ADuelManager**)Z_Param__Result=P_THIS->GetDuelManager();
	P_NATIVE_END;
}
// ********** End Class UManagerGameInstance Function GetDuelManager *******************************

// ********** Begin Class UManagerGameInstance Function GetGameDataManager *************************
struct Z_Construct_UFunction_UManagerGameInstance_GetGameDataManager_Statics
{
	struct ManagerGameInstance_eventGetGameDataManager_Parms
	{
		FGameData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Manager_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets a reference to the GameManager.\n\x09 * @return Reference to the GameManager.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "GameInstance/ManagerGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a reference to the GameManager.\n@return Reference to the GameManager." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManagerGameInstance_GetGameDataManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManagerGameInstance_eventGetGameDataManager_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameData, METADATA_PARAMS(0, nullptr) }; // 2351023519
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManagerGameInstance_GetGameDataManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManagerGameInstance_GetGameDataManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManagerGameInstance_GetGameDataManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManagerGameInstance_GetGameDataManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UManagerGameInstance, nullptr, "GetGameDataManager", Z_Construct_UFunction_UManagerGameInstance_GetGameDataManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManagerGameInstance_GetGameDataManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManagerGameInstance_GetGameDataManager_Statics::ManagerGameInstance_eventGetGameDataManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManagerGameInstance_GetGameDataManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManagerGameInstance_GetGameDataManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UManagerGameInstance_GetGameDataManager_Statics::ManagerGameInstance_eventGetGameDataManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManagerGameInstance_GetGameDataManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManagerGameInstance_GetGameDataManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManagerGameInstance::execGetGameDataManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameData*)Z_Param__Result=P_THIS->GetGameDataManager();
	P_NATIVE_END;
}
// ********** End Class UManagerGameInstance Function GetGameDataManager ***************************

// ********** Begin Class UManagerGameInstance Function GetInputManager ****************************
struct Z_Construct_UFunction_UManagerGameInstance_GetInputManager_Statics
{
	struct ManagerGameInstance_eventGetInputManager_Parms
	{
		const AInputManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Manager_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets a reference to the InputManager.\n\x09 * @return Reference to the InputManager.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "GameInstance/ManagerGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a reference to the InputManager.\n@return Reference to the InputManager." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManagerGameInstance_GetInputManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManagerGameInstance_eventGetInputManager_Parms, ReturnValue), Z_Construct_UClass_AInputManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManagerGameInstance_GetInputManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManagerGameInstance_GetInputManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManagerGameInstance_GetInputManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManagerGameInstance_GetInputManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UManagerGameInstance, nullptr, "GetInputManager", Z_Construct_UFunction_UManagerGameInstance_GetInputManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManagerGameInstance_GetInputManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManagerGameInstance_GetInputManager_Statics::ManagerGameInstance_eventGetInputManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManagerGameInstance_GetInputManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManagerGameInstance_GetInputManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UManagerGameInstance_GetInputManager_Statics::ManagerGameInstance_eventGetInputManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManagerGameInstance_GetInputManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManagerGameInstance_GetInputManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManagerGameInstance::execGetInputManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const AInputManager**)Z_Param__Result=P_THIS->GetInputManager();
	P_NATIVE_END;
}
// ********** End Class UManagerGameInstance Function GetInputManager ******************************

// ********** Begin Class UManagerGameInstance Function GetSceneManager ****************************
struct Z_Construct_UFunction_UManagerGameInstance_GetSceneManager_Statics
{
	struct ManagerGameInstance_eventGetSceneManager_Parms
	{
		const ASceneManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Manager_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets a reference to the SceneManager.\n\x09 * @return Reference to the SceneManager.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "GameInstance/ManagerGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a reference to the SceneManager.\n@return Reference to the SceneManager." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManagerGameInstance_GetSceneManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManagerGameInstance_eventGetSceneManager_Parms, ReturnValue), Z_Construct_UClass_ASceneManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManagerGameInstance_GetSceneManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManagerGameInstance_GetSceneManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManagerGameInstance_GetSceneManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManagerGameInstance_GetSceneManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UManagerGameInstance, nullptr, "GetSceneManager", Z_Construct_UFunction_UManagerGameInstance_GetSceneManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManagerGameInstance_GetSceneManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManagerGameInstance_GetSceneManager_Statics::ManagerGameInstance_eventGetSceneManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManagerGameInstance_GetSceneManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManagerGameInstance_GetSceneManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UManagerGameInstance_GetSceneManager_Statics::ManagerGameInstance_eventGetSceneManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManagerGameInstance_GetSceneManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManagerGameInstance_GetSceneManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManagerGameInstance::execGetSceneManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const ASceneManager**)Z_Param__Result=P_THIS->GetSceneManager();
	P_NATIVE_END;
}
// ********** End Class UManagerGameInstance Function GetSceneManager ******************************

// ********** Begin Class UManagerGameInstance Function GetStateManager ****************************
struct Z_Construct_UFunction_UManagerGameInstance_GetStateManager_Statics
{
	struct ManagerGameInstance_eventGetStateManager_Parms
	{
		const AStateManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Manager_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets a reference to the StateManager.\n\x09 * @return Reference to the StateManager.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "GameInstance/ManagerGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a reference to the StateManager.\n@return Reference to the StateManager." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManagerGameInstance_GetStateManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManagerGameInstance_eventGetStateManager_Parms, ReturnValue), Z_Construct_UClass_AStateManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManagerGameInstance_GetStateManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManagerGameInstance_GetStateManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManagerGameInstance_GetStateManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManagerGameInstance_GetStateManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UManagerGameInstance, nullptr, "GetStateManager", Z_Construct_UFunction_UManagerGameInstance_GetStateManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManagerGameInstance_GetStateManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManagerGameInstance_GetStateManager_Statics::ManagerGameInstance_eventGetStateManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManagerGameInstance_GetStateManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManagerGameInstance_GetStateManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UManagerGameInstance_GetStateManager_Statics::ManagerGameInstance_eventGetStateManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManagerGameInstance_GetStateManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManagerGameInstance_GetStateManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManagerGameInstance::execGetStateManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const AStateManager**)Z_Param__Result=P_THIS->GetStateManager();
	P_NATIVE_END;
}
// ********** End Class UManagerGameInstance Function GetStateManager ******************************

// ********** Begin Class UManagerGameInstance Function Reset **************************************
struct Z_Construct_UFunction_UManagerGameInstance_Reset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Resets the Game Manager's data.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "GameInstance/ManagerGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resets the Game Manager's data." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManagerGameInstance_Reset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UManagerGameInstance, nullptr, "Reset", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManagerGameInstance_Reset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManagerGameInstance_Reset_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UManagerGameInstance_Reset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManagerGameInstance_Reset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManagerGameInstance::execReset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reset();
	P_NATIVE_END;
}
// ********** End Class UManagerGameInstance Function Reset ****************************************

// ********** Begin Class UManagerGameInstance *****************************************************
void UManagerGameInstance::StaticRegisterNativesUManagerGameInstance()
{
	UClass* Class = UManagerGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckGameManagerLoaded", &UManagerGameInstance::execCheckGameManagerLoaded },
		{ "GetDuelManager", &UManagerGameInstance::execGetDuelManager },
		{ "GetGameDataManager", &UManagerGameInstance::execGetGameDataManager },
		{ "GetInputManager", &UManagerGameInstance::execGetInputManager },
		{ "GetSceneManager", &UManagerGameInstance::execGetSceneManager },
		{ "GetStateManager", &UManagerGameInstance::execGetStateManager },
		{ "Reset", &UManagerGameInstance::execReset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UManagerGameInstance;
UClass* UManagerGameInstance::GetPrivateStaticClass()
{
	using TClass = UManagerGameInstance;
	if (!Z_Registration_Info_UClass_UManagerGameInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ManagerGameInstance"),
			Z_Registration_Info_UClass_UManagerGameInstance.InnerSingleton,
			StaticRegisterNativesUManagerGameInstance,
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
	return Z_Registration_Info_UClass_UManagerGameInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UManagerGameInstance_NoRegister()
{
	return UManagerGameInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UManagerGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Game Instance created for Game Management.\n */" },
#endif
		{ "IncludePath", "GameInstance/ManagerGameInstance.h" },
		{ "ModuleRelativePath", "GameInstance/ManagerGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Game Instance created for Game Management." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_GameDataManager_MetaData[] = {
		{ "ModuleRelativePath", "GameInstance/ManagerGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_StateManager_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Instance that Manages all the Game's permanent Data.\n" },
#endif
		{ "ModuleRelativePath", "GameInstance/ManagerGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Instance that Manages all the Game's permanent Data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_InputManager_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Instance that Manages all data relating to Game States.\n" },
#endif
		{ "ModuleRelativePath", "GameInstance/ManagerGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Instance that Manages all data relating to Game States." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_DuelManager_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Instance that Manages all data relating to Inputs.\n" },
#endif
		{ "ModuleRelativePath", "GameInstance/ManagerGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Instance that Manages all data relating to Inputs." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_SceneManager_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Instance that Manages all data relating to Duels.\n" },
#endif
		{ "ModuleRelativePath", "GameInstance/ManagerGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Instance that Manages all data relating to Duels." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_EventGameManagerLoaded_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Instance that Manages all data relating to Scenes.\n" },
#endif
		{ "ModuleRelativePath", "GameInstance/ManagerGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Instance that Manages all data relating to Scenes." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_m_GameDataManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_StateManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_InputManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_DuelManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_SceneManager;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_EventGameManagerLoaded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UManagerGameInstance_CheckGameManagerLoaded, "CheckGameManagerLoaded" }, // 1130725501
		{ &Z_Construct_UFunction_UManagerGameInstance_GetDuelManager, "GetDuelManager" }, // 2061493568
		{ &Z_Construct_UFunction_UManagerGameInstance_GetGameDataManager, "GetGameDataManager" }, // 2108306034
		{ &Z_Construct_UFunction_UManagerGameInstance_GetInputManager, "GetInputManager" }, // 304274381
		{ &Z_Construct_UFunction_UManagerGameInstance_GetSceneManager, "GetSceneManager" }, // 2448760876
		{ &Z_Construct_UFunction_UManagerGameInstance_GetStateManager, "GetStateManager" }, // 2947785206
		{ &Z_Construct_UFunction_UManagerGameInstance_Reset, "Reset" }, // 3184115611
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManagerGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManagerGameInstance_Statics::NewProp_m_GameDataManager = { "m_GameDataManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManagerGameInstance, m_GameDataManager), Z_Construct_UScriptStruct_FGameData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_GameDataManager_MetaData), NewProp_m_GameDataManager_MetaData) }; // 2351023519
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UManagerGameInstance_Statics::NewProp_m_StateManager = { "m_StateManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManagerGameInstance, m_StateManager), Z_Construct_UClass_AStateManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_StateManager_MetaData), NewProp_m_StateManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UManagerGameInstance_Statics::NewProp_m_InputManager = { "m_InputManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManagerGameInstance, m_InputManager), Z_Construct_UClass_AInputManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_InputManager_MetaData), NewProp_m_InputManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UManagerGameInstance_Statics::NewProp_m_DuelManager = { "m_DuelManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManagerGameInstance, m_DuelManager), Z_Construct_UClass_ADuelManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_DuelManager_MetaData), NewProp_m_DuelManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UManagerGameInstance_Statics::NewProp_m_SceneManager = { "m_SceneManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManagerGameInstance, m_SceneManager), Z_Construct_UClass_ASceneManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_SceneManager_MetaData), NewProp_m_SceneManager_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManagerGameInstance_Statics::NewProp_m_EventGameManagerLoaded = { "m_EventGameManagerLoaded", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManagerGameInstance, m_EventGameManagerLoaded), Z_Construct_UDelegateFunction_PartyJungle_Event_GameManagerLoaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_EventGameManagerLoaded_MetaData), NewProp_m_EventGameManagerLoaded_MetaData) }; // 3074383102
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UManagerGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManagerGameInstance_Statics::NewProp_m_GameDataManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManagerGameInstance_Statics::NewProp_m_StateManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManagerGameInstance_Statics::NewProp_m_InputManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManagerGameInstance_Statics::NewProp_m_DuelManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManagerGameInstance_Statics::NewProp_m_SceneManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManagerGameInstance_Statics::NewProp_m_EventGameManagerLoaded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManagerGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UManagerGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManagerGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UManagerGameInstance_Statics::ClassParams = {
	&UManagerGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UManagerGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UManagerGameInstance_Statics::PropPointers),
	0,
	0x008000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManagerGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UManagerGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UManagerGameInstance()
{
	if (!Z_Registration_Info_UClass_UManagerGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManagerGameInstance.OuterSingleton, Z_Construct_UClass_UManagerGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UManagerGameInstance.OuterSingleton;
}
UManagerGameInstance::UManagerGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UManagerGameInstance);
UManagerGameInstance::~UManagerGameInstance() {}
// ********** End Class UManagerGameInstance *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameInstance_ManagerGameInstance_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UManagerGameInstance, UManagerGameInstance::StaticClass, TEXT("UManagerGameInstance"), &Z_Registration_Info_UClass_UManagerGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManagerGameInstance), 2431008921U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameInstance_ManagerGameInstance_h__Script_PartyJungle_3018184939(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameInstance_ManagerGameInstance_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameInstance_ManagerGameInstance_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
