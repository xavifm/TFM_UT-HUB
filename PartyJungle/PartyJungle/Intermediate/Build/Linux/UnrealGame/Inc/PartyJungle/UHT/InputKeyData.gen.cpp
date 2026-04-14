// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Controllers/PlayersControllers/ControllerAuxs/InputKeyData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInputKeyData() {}

// ********** Begin Cross Module References ********************************************************
PARTYJUNGLE_API UEnum* Z_Construct_UEnum_PartyJungle_EInputKeys();
PARTYJUNGLE_API UEnum* Z_Construct_UEnum_PartyJungle_ETriggerEvents();
PARTYJUNGLE_API UFunction* Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputKey__DelegateSignature();
PARTYJUNGLE_API UScriptStruct* Z_Construct_UScriptStruct_FInputKeyData();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FEvent_PlayerInputKey *************************************************
struct Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputKey__DelegateSignature_Statics
{
	struct _Script_PartyJungle_eventEvent_PlayerInputKey_Parms
	{
		EInputKeys a_InputKey;
		ETriggerEvents a_InputEvent;
		int32 a_PlayerId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Event used for Input Key Events.\n */// Name of the structure that will be generated\n// Parameters of the delegate (Type, Name):\n// Key pressed.\n// Input event.\n// Id of the Player who has triggered the event.\n" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/ControllerAuxs/InputKeyData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event used for Input Key Events.\n // Name of the structure that will be generated\n// Parameters of the delegate (Type, Name):\n// Key pressed.\n// Input event.\n// Id of the Player who has triggered the event." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_a_InputKey_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_a_InputKey;
	static const UECodeGen_Private::FBytePropertyParams NewProp_a_InputEvent_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_a_InputEvent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_PlayerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputKey__DelegateSignature_Statics::NewProp_a_InputKey_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputKey__DelegateSignature_Statics::NewProp_a_InputKey = { "a_InputKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PartyJungle_eventEvent_PlayerInputKey_Parms, a_InputKey), Z_Construct_UEnum_PartyJungle_EInputKeys, METADATA_PARAMS(0, nullptr) }; // 3280045900
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputKey__DelegateSignature_Statics::NewProp_a_InputEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputKey__DelegateSignature_Statics::NewProp_a_InputEvent = { "a_InputEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PartyJungle_eventEvent_PlayerInputKey_Parms, a_InputEvent), Z_Construct_UEnum_PartyJungle_ETriggerEvents, METADATA_PARAMS(0, nullptr) }; // 3990706575
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputKey__DelegateSignature_Statics::NewProp_a_PlayerId = { "a_PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PartyJungle_eventEvent_PlayerInputKey_Parms, a_PlayerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputKey__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputKey__DelegateSignature_Statics::NewProp_a_InputKey_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputKey__DelegateSignature_Statics::NewProp_a_InputKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputKey__DelegateSignature_Statics::NewProp_a_InputEvent_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputKey__DelegateSignature_Statics::NewProp_a_InputEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputKey__DelegateSignature_Statics::NewProp_a_PlayerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputKey__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputKey__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_PartyJungle, nullptr, "Event_PlayerInputKey__DelegateSignature", Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputKey__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputKey__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputKey__DelegateSignature_Statics::_Script_PartyJungle_eventEvent_PlayerInputKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputKey__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputKey__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputKey__DelegateSignature_Statics::_Script_PartyJungle_eventEvent_PlayerInputKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputKey__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputKey__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEvent_PlayerInputKey_DelegateWrapper(const FMulticastScriptDelegate& Event_PlayerInputKey, EInputKeys a_InputKey, ETriggerEvents a_InputEvent, int32 a_PlayerId)
{
	struct _Script_PartyJungle_eventEvent_PlayerInputKey_Parms
	{
		EInputKeys a_InputKey;
		ETriggerEvents a_InputEvent;
		int32 a_PlayerId;
	};
	_Script_PartyJungle_eventEvent_PlayerInputKey_Parms Parms;
	Parms.a_InputKey=a_InputKey;
	Parms.a_InputEvent=a_InputEvent;
	Parms.a_PlayerId=a_PlayerId;
	Event_PlayerInputKey.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FEvent_PlayerInputKey ***************************************************

// ********** Begin ScriptStruct FInputKeyData *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInputKeyData;
class UScriptStruct* FInputKeyData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInputKeyData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInputKeyData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputKeyData, (UObject*)Z_Construct_UPackage__Script_PartyJungle(), TEXT("InputKeyData"));
	}
	return Z_Registration_Info_UScriptStruct_FInputKeyData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInputKeyData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Struct with the Data of both, the Input Key and the Trigger Event.\n */" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/ControllerAuxs/InputKeyData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct with the Data of both, the Input Key and the Trigger Event." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_InputKey_MetaData[] = {
		{ "Category", "PlayerInputs" },
		{ "ModuleRelativePath", "Controllers/PlayersControllers/ControllerAuxs/InputKeyData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_TriggerEvent_MetaData[] = {
		{ "Category", "PlayerInputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Input Pair's Input Key.\n" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/ControllerAuxs/InputKeyData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Input Pair's Input Key." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_m_InputKey_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_m_InputKey;
	static const UECodeGen_Private::FBytePropertyParams NewProp_m_TriggerEvent_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_m_TriggerEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputKeyData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInputKeyData_Statics::NewProp_m_InputKey_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInputKeyData_Statics::NewProp_m_InputKey = { "m_InputKey", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputKeyData, m_InputKey), Z_Construct_UEnum_PartyJungle_EInputKeys, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_InputKey_MetaData), NewProp_m_InputKey_MetaData) }; // 3280045900
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInputKeyData_Statics::NewProp_m_TriggerEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInputKeyData_Statics::NewProp_m_TriggerEvent = { "m_TriggerEvent", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputKeyData, m_TriggerEvent), Z_Construct_UEnum_PartyJungle_ETriggerEvents, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_TriggerEvent_MetaData), NewProp_m_TriggerEvent_MetaData) }; // 3990706575
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputKeyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputKeyData_Statics::NewProp_m_InputKey_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputKeyData_Statics::NewProp_m_InputKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputKeyData_Statics::NewProp_m_TriggerEvent_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputKeyData_Statics::NewProp_m_TriggerEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputKeyData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputKeyData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
	nullptr,
	&NewStructOps,
	"InputKeyData",
	Z_Construct_UScriptStruct_FInputKeyData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputKeyData_Statics::PropPointers),
	sizeof(FInputKeyData),
	alignof(FInputKeyData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputKeyData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputKeyData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputKeyData()
{
	if (!Z_Registration_Info_UScriptStruct_FInputKeyData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInputKeyData.InnerSingleton, Z_Construct_UScriptStruct_FInputKeyData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInputKeyData.InnerSingleton;
}
// ********** End ScriptStruct FInputKeyData *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_ControllerAuxs_InputKeyData_h__Script_PartyJungle_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInputKeyData::StaticStruct, Z_Construct_UScriptStruct_FInputKeyData_Statics::NewStructOps, TEXT("InputKeyData"), &Z_Registration_Info_UScriptStruct_FInputKeyData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputKeyData), 2910492042U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_ControllerAuxs_InputKeyData_h__Script_PartyJungle_1412566799(TEXT("/Script/PartyJungle"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_ControllerAuxs_InputKeyData_h__Script_PartyJungle_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_ControllerAuxs_InputKeyData_h__Script_PartyJungle_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
