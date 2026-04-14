// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Managers/SceneManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSceneManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ASceneManager();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ASceneManager_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UManagerGameInstance_NoRegister();
PARTYJUNGLE_API UFunction* Z_Construct_UDelegateFunction_PartyJungle_Event_SceneChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FEvent_SceneChanged ***************************************************
struct Z_Construct_UDelegateFunction_PartyJungle_Event_SceneChanged__DelegateSignature_Statics
{
	struct _Script_PartyJungle_eventEvent_SceneChanged_Parms
	{
		FString a_PreviousState;
		FString a_CurrentState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Event triggered when the current Scene is changed.\n */// Name of the structure that will be generated\n// Parameters of the delegate (Type, Name):\n// Id of the Previous Scene.\n// Id of the Current Scene.\n" },
#endif
		{ "ModuleRelativePath", "Managers/SceneManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event triggered when the current Scene is changed.\n // Name of the structure that will be generated\n// Parameters of the delegate (Type, Name):\n// Id of the Previous Scene.\n// Id of the Current Scene." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_a_PreviousState;
	static const UECodeGen_Private::FStrPropertyParams NewProp_a_CurrentState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_PartyJungle_Event_SceneChanged__DelegateSignature_Statics::NewProp_a_PreviousState = { "a_PreviousState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PartyJungle_eventEvent_SceneChanged_Parms, a_PreviousState), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_PartyJungle_Event_SceneChanged__DelegateSignature_Statics::NewProp_a_CurrentState = { "a_CurrentState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PartyJungle_eventEvent_SceneChanged_Parms, a_CurrentState), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PartyJungle_Event_SceneChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PartyJungle_Event_SceneChanged__DelegateSignature_Statics::NewProp_a_PreviousState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PartyJungle_Event_SceneChanged__DelegateSignature_Statics::NewProp_a_CurrentState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PartyJungle_Event_SceneChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_PartyJungle_Event_SceneChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_PartyJungle, nullptr, "Event_SceneChanged__DelegateSignature", Z_Construct_UDelegateFunction_PartyJungle_Event_SceneChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PartyJungle_Event_SceneChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_PartyJungle_Event_SceneChanged__DelegateSignature_Statics::_Script_PartyJungle_eventEvent_SceneChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PartyJungle_Event_SceneChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PartyJungle_Event_SceneChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_PartyJungle_Event_SceneChanged__DelegateSignature_Statics::_Script_PartyJungle_eventEvent_SceneChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PartyJungle_Event_SceneChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PartyJungle_Event_SceneChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEvent_SceneChanged_DelegateWrapper(const FMulticastScriptDelegate& Event_SceneChanged, const FString& a_PreviousState, const FString& a_CurrentState)
{
	struct _Script_PartyJungle_eventEvent_SceneChanged_Parms
	{
		FString a_PreviousState;
		FString a_CurrentState;
	};
	_Script_PartyJungle_eventEvent_SceneChanged_Parms Parms;
	Parms.a_PreviousState=a_PreviousState;
	Parms.a_CurrentState=a_CurrentState;
	Event_SceneChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FEvent_SceneChanged *****************************************************

// ********** Begin Class ASceneManager Function ChangeScene ***************************************
struct Z_Construct_UFunction_ASceneManager_ChangeScene_Statics
{
	struct SceneManager_eventChangeScene_Parms
	{
		FString a_TargetState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SceneManager Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Changes the current Scene.\n\x09 * @param a_TargetState Target State for the Scene Change.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Managers/SceneManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Changes the current Scene.\n@param a_TargetState Target State for the Scene Change." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_a_TargetState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_a_TargetState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASceneManager_ChangeScene_Statics::NewProp_a_TargetState = { "a_TargetState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneManager_eventChangeScene_Parms, a_TargetState), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_a_TargetState_MetaData), NewProp_a_TargetState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASceneManager_ChangeScene_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneManager_ChangeScene_Statics::NewProp_a_TargetState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneManager_ChangeScene_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASceneManager_ChangeScene_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASceneManager, nullptr, "ChangeScene", Z_Construct_UFunction_ASceneManager_ChangeScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneManager_ChangeScene_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASceneManager_ChangeScene_Statics::SceneManager_eventChangeScene_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneManager_ChangeScene_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASceneManager_ChangeScene_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASceneManager_ChangeScene_Statics::SceneManager_eventChangeScene_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASceneManager_ChangeScene()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASceneManager_ChangeScene_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASceneManager::execChangeScene)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_a_TargetState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeScene(Z_Param_a_TargetState);
	P_NATIVE_END;
}
// ********** End Class ASceneManager Function ChangeScene *****************************************

// ********** Begin Class ASceneManager Function EndChangingSceneCinematic *************************
struct SceneManager_eventEndChangingSceneCinematic_Parms
{
	FString a_PreviousState;
	FString a_TargetState;
};
static FName NAME_ASceneManager_EndChangingSceneCinematic = FName(TEXT("EndChangingSceneCinematic"));
void ASceneManager::EndChangingSceneCinematic(const FString& a_PreviousState, const FString& a_TargetState)
{
	SceneManager_eventEndChangingSceneCinematic_Parms Parms;
	Parms.a_PreviousState=a_PreviousState;
	Parms.a_TargetState=a_TargetState;
	UFunction* Func = FindFunctionChecked(NAME_ASceneManager_EndChangingSceneCinematic);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ASceneManager_EndChangingSceneCinematic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SceneManager Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Cinematic triggered when the scene has finished changing.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Managers/SceneManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cinematic triggered when the scene has finished changing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_a_PreviousState_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_a_TargetState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_a_PreviousState;
	static const UECodeGen_Private::FStrPropertyParams NewProp_a_TargetState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASceneManager_EndChangingSceneCinematic_Statics::NewProp_a_PreviousState = { "a_PreviousState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneManager_eventEndChangingSceneCinematic_Parms, a_PreviousState), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_a_PreviousState_MetaData), NewProp_a_PreviousState_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASceneManager_EndChangingSceneCinematic_Statics::NewProp_a_TargetState = { "a_TargetState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneManager_eventEndChangingSceneCinematic_Parms, a_TargetState), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_a_TargetState_MetaData), NewProp_a_TargetState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASceneManager_EndChangingSceneCinematic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneManager_EndChangingSceneCinematic_Statics::NewProp_a_PreviousState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneManager_EndChangingSceneCinematic_Statics::NewProp_a_TargetState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneManager_EndChangingSceneCinematic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASceneManager_EndChangingSceneCinematic_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASceneManager, nullptr, "EndChangingSceneCinematic", Z_Construct_UFunction_ASceneManager_EndChangingSceneCinematic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneManager_EndChangingSceneCinematic_Statics::PropPointers), sizeof(SceneManager_eventEndChangingSceneCinematic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneManager_EndChangingSceneCinematic_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASceneManager_EndChangingSceneCinematic_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SceneManager_eventEndChangingSceneCinematic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASceneManager_EndChangingSceneCinematic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASceneManager_EndChangingSceneCinematic_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ASceneManager Function EndChangingSceneCinematic ***************************

// ********** Begin Class ASceneManager Function IsSceneChanging ***********************************
struct Z_Construct_UFunction_ASceneManager_IsSceneChanging_Statics
{
	struct SceneManager_eventIsSceneChanging_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SceneManager Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets if the SceneManager is currently changing the Scene.\n\x09 * @return True if the SceneManager is changing the Scene.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Managers/SceneManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets if the SceneManager is currently changing the Scene.\n@return True if the SceneManager is changing the Scene." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASceneManager_IsSceneChanging_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SceneManager_eventIsSceneChanging_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASceneManager_IsSceneChanging_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SceneManager_eventIsSceneChanging_Parms), &Z_Construct_UFunction_ASceneManager_IsSceneChanging_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASceneManager_IsSceneChanging_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneManager_IsSceneChanging_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneManager_IsSceneChanging_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASceneManager_IsSceneChanging_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASceneManager, nullptr, "IsSceneChanging", Z_Construct_UFunction_ASceneManager_IsSceneChanging_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneManager_IsSceneChanging_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASceneManager_IsSceneChanging_Statics::SceneManager_eventIsSceneChanging_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneManager_IsSceneChanging_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASceneManager_IsSceneChanging_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASceneManager_IsSceneChanging_Statics::SceneManager_eventIsSceneChanging_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASceneManager_IsSceneChanging()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASceneManager_IsSceneChanging_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASceneManager::execIsSceneChanging)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSceneChanging();
	P_NATIVE_END;
}
// ********** End Class ASceneManager Function IsSceneChanging *************************************

// ********** Begin Class ASceneManager Function OnGameManagerLoaded *******************************
struct Z_Construct_UFunction_ASceneManager_OnGameManagerLoaded_Statics
{
	struct SceneManager_eventOnGameManagerLoaded_Parms
	{
		const UManagerGameInstance* a_GameManager;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Method that is triggered when the GameManager finished loading.\n\x09 * @param a_GameManager Reference to the loaded GameManager.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Managers/SceneManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method that is triggered when the GameManager finished loading.\n@param a_GameManager Reference to the loaded GameManager." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASceneManager_OnGameManagerLoaded_Statics::NewProp_a_GameManager = { "a_GameManager", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneManager_eventOnGameManagerLoaded_Parms, a_GameManager), Z_Construct_UClass_UManagerGameInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_a_GameManager_MetaData), NewProp_a_GameManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASceneManager_OnGameManagerLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneManager_OnGameManagerLoaded_Statics::NewProp_a_GameManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneManager_OnGameManagerLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASceneManager_OnGameManagerLoaded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASceneManager, nullptr, "OnGameManagerLoaded", Z_Construct_UFunction_ASceneManager_OnGameManagerLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneManager_OnGameManagerLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASceneManager_OnGameManagerLoaded_Statics::SceneManager_eventOnGameManagerLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneManager_OnGameManagerLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASceneManager_OnGameManagerLoaded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASceneManager_OnGameManagerLoaded_Statics::SceneManager_eventOnGameManagerLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASceneManager_OnGameManagerLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASceneManager_OnGameManagerLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASceneManager::execOnGameManagerLoaded)
{
	P_GET_OBJECT(UManagerGameInstance,Z_Param_a_GameManager);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGameManagerLoaded(Z_Param_a_GameManager);
	P_NATIVE_END;
}
// ********** End Class ASceneManager Function OnGameManagerLoaded *********************************

// ********** Begin Class ASceneManager Function StartChangingSceneCinematic ***********************
struct SceneManager_eventStartChangingSceneCinematic_Parms
{
	FString a_PreviousState;
	FString a_TargetState;
};
static FName NAME_ASceneManager_StartChangingSceneCinematic = FName(TEXT("StartChangingSceneCinematic"));
void ASceneManager::StartChangingSceneCinematic(const FString& a_PreviousState, const FString& a_TargetState)
{
	SceneManager_eventStartChangingSceneCinematic_Parms Parms;
	Parms.a_PreviousState=a_PreviousState;
	Parms.a_TargetState=a_TargetState;
	UFunction* Func = FindFunctionChecked(NAME_ASceneManager_StartChangingSceneCinematic);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ASceneManager_StartChangingSceneCinematic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SceneManager Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Cinematic triggered when the scene starts changing.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Managers/SceneManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cinematic triggered when the scene starts changing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_a_PreviousState_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_a_TargetState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_a_PreviousState;
	static const UECodeGen_Private::FStrPropertyParams NewProp_a_TargetState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASceneManager_StartChangingSceneCinematic_Statics::NewProp_a_PreviousState = { "a_PreviousState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneManager_eventStartChangingSceneCinematic_Parms, a_PreviousState), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_a_PreviousState_MetaData), NewProp_a_PreviousState_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASceneManager_StartChangingSceneCinematic_Statics::NewProp_a_TargetState = { "a_TargetState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneManager_eventStartChangingSceneCinematic_Parms, a_TargetState), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_a_TargetState_MetaData), NewProp_a_TargetState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASceneManager_StartChangingSceneCinematic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneManager_StartChangingSceneCinematic_Statics::NewProp_a_PreviousState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneManager_StartChangingSceneCinematic_Statics::NewProp_a_TargetState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneManager_StartChangingSceneCinematic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASceneManager_StartChangingSceneCinematic_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASceneManager, nullptr, "StartChangingSceneCinematic", Z_Construct_UFunction_ASceneManager_StartChangingSceneCinematic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneManager_StartChangingSceneCinematic_Statics::PropPointers), sizeof(SceneManager_eventStartChangingSceneCinematic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneManager_StartChangingSceneCinematic_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASceneManager_StartChangingSceneCinematic_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SceneManager_eventStartChangingSceneCinematic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASceneManager_StartChangingSceneCinematic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASceneManager_StartChangingSceneCinematic_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ASceneManager Function StartChangingSceneCinematic *************************

// ********** Begin Class ASceneManager ************************************************************
void ASceneManager::StaticRegisterNativesASceneManager()
{
	UClass* Class = ASceneManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeScene", &ASceneManager::execChangeScene },
		{ "IsSceneChanging", &ASceneManager::execIsSceneChanging },
		{ "OnGameManagerLoaded", &ASceneManager::execOnGameManagerLoaded },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASceneManager;
UClass* ASceneManager::GetPrivateStaticClass()
{
	using TClass = ASceneManager;
	if (!Z_Registration_Info_UClass_ASceneManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SceneManager"),
			Z_Registration_Info_UClass_ASceneManager.InnerSingleton,
			StaticRegisterNativesASceneManager,
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
	return Z_Registration_Info_UClass_ASceneManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ASceneManager_NoRegister()
{
	return ASceneManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASceneManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Actor in charge of managing the Scenes.\n */" },
#endif
		{ "IncludePath", "Managers/SceneManager.h" },
		{ "ModuleRelativePath", "Managers/SceneManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor in charge of managing the Scenes." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASceneManager_ChangeScene, "ChangeScene" }, // 3455411922
		{ &Z_Construct_UFunction_ASceneManager_EndChangingSceneCinematic, "EndChangingSceneCinematic" }, // 2256613137
		{ &Z_Construct_UFunction_ASceneManager_IsSceneChanging, "IsSceneChanging" }, // 1918483489
		{ &Z_Construct_UFunction_ASceneManager_OnGameManagerLoaded, "OnGameManagerLoaded" }, // 1770859160
		{ &Z_Construct_UFunction_ASceneManager_StartChangingSceneCinematic, "StartChangingSceneCinematic" }, // 3475131103
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASceneManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASceneManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASceneManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASceneManager_Statics::ClassParams = {
	&ASceneManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASceneManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ASceneManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASceneManager()
{
	if (!Z_Registration_Info_UClass_ASceneManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASceneManager.OuterSingleton, Z_Construct_UClass_ASceneManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASceneManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASceneManager);
ASceneManager::~ASceneManager() {}
// ********** End Class ASceneManager **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_SceneManager_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASceneManager, ASceneManager::StaticClass, TEXT("ASceneManager"), &Z_Registration_Info_UClass_ASceneManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASceneManager), 2494795456U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_SceneManager_h__Script_PartyJungle_2595875092(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_SceneManager_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_SceneManager_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
