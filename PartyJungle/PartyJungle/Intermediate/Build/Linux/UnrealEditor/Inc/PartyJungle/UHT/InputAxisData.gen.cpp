// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Controllers/PlayersControllers/ControllerAuxs/InputAxisData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInputAxisData() {}

// ********** Begin Cross Module References ********************************************************
PARTYJUNGLE_API UFunction* Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputAxis__DelegateSignature();
PARTYJUNGLE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisData();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FEvent_PlayerInputAxis ************************************************
struct Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputAxis__DelegateSignature_Statics
{
	struct _Script_PartyJungle_eventEvent_PlayerInputAxis_Parms
	{
		float a_Axis;
		int32 a_PlayerId;
		bool a_WasActive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Event used for Input Axis Events.\n */// Name of the structure that will be generated\n// Parameters of the delegate (Type, Name):\n// Value of the received axis.\n// Id of the Player who has triggered the event.\n// Indicates if the axis was active on the previous frame.\n" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/ControllerAuxs/InputAxisData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event used for Input Axis Events.\n // Name of the structure that will be generated\n// Parameters of the delegate (Type, Name):\n// Value of the received axis.\n// Id of the Player who has triggered the event.\n// Indicates if the axis was active on the previous frame." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_a_Axis;
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_PlayerId;
	static void NewProp_a_WasActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_a_WasActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputAxis__DelegateSignature_Statics::NewProp_a_Axis = { "a_Axis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PartyJungle_eventEvent_PlayerInputAxis_Parms, a_Axis), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputAxis__DelegateSignature_Statics::NewProp_a_PlayerId = { "a_PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PartyJungle_eventEvent_PlayerInputAxis_Parms, a_PlayerId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputAxis__DelegateSignature_Statics::NewProp_a_WasActive_SetBit(void* Obj)
{
	((_Script_PartyJungle_eventEvent_PlayerInputAxis_Parms*)Obj)->a_WasActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputAxis__DelegateSignature_Statics::NewProp_a_WasActive = { "a_WasActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_PartyJungle_eventEvent_PlayerInputAxis_Parms), &Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputAxis__DelegateSignature_Statics::NewProp_a_WasActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputAxis__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputAxis__DelegateSignature_Statics::NewProp_a_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputAxis__DelegateSignature_Statics::NewProp_a_PlayerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputAxis__DelegateSignature_Statics::NewProp_a_WasActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputAxis__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputAxis__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_PartyJungle, nullptr, "Event_PlayerInputAxis__DelegateSignature", Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputAxis__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputAxis__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputAxis__DelegateSignature_Statics::_Script_PartyJungle_eventEvent_PlayerInputAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputAxis__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputAxis__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputAxis__DelegateSignature_Statics::_Script_PartyJungle_eventEvent_PlayerInputAxis_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputAxis__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputAxis__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEvent_PlayerInputAxis_DelegateWrapper(const FMulticastScriptDelegate& Event_PlayerInputAxis, float a_Axis, int32 a_PlayerId, bool a_WasActive)
{
	struct _Script_PartyJungle_eventEvent_PlayerInputAxis_Parms
	{
		float a_Axis;
		int32 a_PlayerId;
		bool a_WasActive;
	};
	_Script_PartyJungle_eventEvent_PlayerInputAxis_Parms Parms;
	Parms.a_Axis=a_Axis;
	Parms.a_PlayerId=a_PlayerId;
	Parms.a_WasActive=a_WasActive ? true : false;
	Event_PlayerInputAxis.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FEvent_PlayerInputAxis **************************************************

// ********** Begin ScriptStruct FInputAxisData ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInputAxisData;
class UScriptStruct* FInputAxisData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInputAxisData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInputAxisData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputAxisData, (UObject*)Z_Construct_UPackage__Script_PartyJungle(), TEXT("InputAxisData"));
	}
	return Z_Registration_Info_UScriptStruct_FInputAxisData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInputAxisData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Input data used to manage Axes.\n */" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/ControllerAuxs/InputAxisData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input data used to manage Axes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_AxisReceivedEvent_MetaData[] = {
		{ "ModuleRelativePath", "Controllers/PlayersControllers/ControllerAuxs/InputAxisData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_AxisReleasedEvent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Event triggered when an axis is actioned.\n" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/ControllerAuxs/InputAxisData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Event triggered when an axis is actioned." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_IsAxisActiveFlag_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Event triggered when an axis is released.\n" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/ControllerAuxs/InputAxisData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Event triggered when an axis is released." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_AxisReceivedEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_AxisReleasedEvent;
	static void NewProp_m_IsAxisActiveFlag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_m_IsAxisActiveFlag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputAxisData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UScriptStruct_FInputAxisData_Statics::NewProp_m_AxisReceivedEvent = { "m_AxisReceivedEvent", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputAxisData, m_AxisReceivedEvent), Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputAxis__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_AxisReceivedEvent_MetaData), NewProp_m_AxisReceivedEvent_MetaData) }; // 140928363
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UScriptStruct_FInputAxisData_Statics::NewProp_m_AxisReleasedEvent = { "m_AxisReleasedEvent", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputAxisData, m_AxisReleasedEvent), Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputAxis__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_AxisReleasedEvent_MetaData), NewProp_m_AxisReleasedEvent_MetaData) }; // 140928363
void Z_Construct_UScriptStruct_FInputAxisData_Statics::NewProp_m_IsAxisActiveFlag_SetBit(void* Obj)
{
	((FInputAxisData*)Obj)->m_IsAxisActiveFlag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputAxisData_Statics::NewProp_m_IsAxisActiveFlag = { "m_IsAxisActiveFlag", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputAxisData), &Z_Construct_UScriptStruct_FInputAxisData_Statics::NewProp_m_IsAxisActiveFlag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_IsAxisActiveFlag_MetaData), NewProp_m_IsAxisActiveFlag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputAxisData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAxisData_Statics::NewProp_m_AxisReceivedEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAxisData_Statics::NewProp_m_AxisReleasedEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAxisData_Statics::NewProp_m_IsAxisActiveFlag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputAxisData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
	nullptr,
	&NewStructOps,
	"InputAxisData",
	Z_Construct_UScriptStruct_FInputAxisData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisData_Statics::PropPointers),
	sizeof(FInputAxisData),
	alignof(FInputAxisData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputAxisData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputAxisData()
{
	if (!Z_Registration_Info_UScriptStruct_FInputAxisData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInputAxisData.InnerSingleton, Z_Construct_UScriptStruct_FInputAxisData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInputAxisData.InnerSingleton;
}
// ********** End ScriptStruct FInputAxisData ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_ControllerAuxs_InputAxisData_h__Script_PartyJungle_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInputAxisData::StaticStruct, Z_Construct_UScriptStruct_FInputAxisData_Statics::NewStructOps, TEXT("InputAxisData"), &Z_Registration_Info_UScriptStruct_FInputAxisData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputAxisData), 1515854337U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_ControllerAuxs_InputAxisData_h__Script_PartyJungle_3499291261(TEXT("/Script/PartyJungle"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_ControllerAuxs_InputAxisData_h__Script_PartyJungle_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_ControllerAuxs_InputAxisData_h__Script_PartyJungle_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
