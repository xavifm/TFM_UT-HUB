// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Controllers/PlayersControllers/PlayerInputsControllers/PlayerInputsControllerBase.h"
#include "PartyJungle/Controllers/PlayersControllers/ControllerAuxs/InputAxisData.h"
#include "PartyJungle/Controllers/PlayersControllers/ControllerAuxs/InputKeyData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlayerInputsControllerBase() {}

// ********** Begin Cross Module References ********************************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_AControllerBase();
PARTYJUNGLE_API UClass* Z_Construct_UClass_APlayerInputsControllerBase();
PARTYJUNGLE_API UClass* Z_Construct_UClass_APlayerInputsControllerBase_NoRegister();
PARTYJUNGLE_API UFunction* Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputKey__DelegateSignature();
PARTYJUNGLE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisData();
PARTYJUNGLE_API UScriptStruct* Z_Construct_UScriptStruct_FInputKeyData();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APlayerInputsControllerBase **********************************************
void APlayerInputsControllerBase::StaticRegisterNativesAPlayerInputsControllerBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APlayerInputsControllerBase;
UClass* APlayerInputsControllerBase::GetPrivateStaticClass()
{
	using TClass = APlayerInputsControllerBase;
	if (!Z_Registration_Info_UClass_APlayerInputsControllerBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayerInputsControllerBase"),
			Z_Registration_Info_UClass_APlayerInputsControllerBase.InnerSingleton,
			StaticRegisterNativesAPlayerInputsControllerBase,
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
	return Z_Registration_Info_UClass_APlayerInputsControllerBase.InnerSingleton;
}
UClass* Z_Construct_UClass_APlayerInputsControllerBase_NoRegister()
{
	return APlayerInputsControllerBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APlayerInputsControllerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Input Controller for each specific Player.\n*/" },
#endif
		{ "IncludePath", "Controllers/PlayersControllers/PlayerInputsControllers/PlayerInputsControllerBase.h" },
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayerInputsControllers/PlayerInputsControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Controller for each specific Player." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AXIS_THRESHOLD_MetaData[] = {
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayerInputsControllers/PlayerInputsControllerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_KeyMap_MetaData[] = {
		{ "Category", "PlayerInputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Threshold for an Axis to be considered valid.\n" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayerInputsControllers/PlayerInputsControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Threshold for an Axis to be considered valid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_KeyEvents_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< All the combinations of Input Keys and Trigger Events needed by the Player Inputs Controller in the current State.\n" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayerInputsControllers/PlayerInputsControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< All the combinations of Input Keys and Trigger Events needed by the Player Inputs Controller in the current State." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_AxisEvents_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Map with all the Input Key Events active in the current state, and their Ids.\n" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayerInputsControllers/PlayerInputsControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Map with all the Input Key Events active in the current state, and their Ids." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AXIS_THRESHOLD;
	static const UECodeGen_Private::FStructPropertyParams NewProp_m_KeyMap_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_m_KeyMap;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_KeyEvents_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_m_KeyEvents_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_m_KeyEvents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_m_AxisEvents_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_m_AxisEvents_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_m_AxisEvents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerInputsControllerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_AXIS_THRESHOLD = { "AXIS_THRESHOLD", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerInputsControllerBase, AXIS_THRESHOLD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AXIS_THRESHOLD_MetaData), NewProp_AXIS_THRESHOLD_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_m_KeyMap_Inner = { "m_KeyMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputKeyData, METADATA_PARAMS(0, nullptr) }; // 2910492042
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_m_KeyMap = { "m_KeyMap", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerInputsControllerBase, m_KeyMap), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_KeyMap_MetaData), NewProp_m_KeyMap_MetaData) }; // 2910492042
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_m_KeyEvents_ValueProp = { "m_KeyEvents", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputKey__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1455493997
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_m_KeyEvents_Key_KeyProp = { "m_KeyEvents_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_m_KeyEvents = { "m_KeyEvents", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerInputsControllerBase, m_KeyEvents), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_KeyEvents_MetaData), NewProp_m_KeyEvents_MetaData) }; // 1455493997
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_m_AxisEvents_ValueProp = { "m_AxisEvents", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FInputAxisData, METADATA_PARAMS(0, nullptr) }; // 1515854337
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_m_AxisEvents_Key_KeyProp = { "m_AxisEvents_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_m_AxisEvents = { "m_AxisEvents", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerInputsControllerBase, m_AxisEvents), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_AxisEvents_MetaData), NewProp_m_AxisEvents_MetaData) }; // 1515854337
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerInputsControllerBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_AXIS_THRESHOLD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_m_KeyMap_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_m_KeyMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_m_KeyEvents_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_m_KeyEvents_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_m_KeyEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_m_AxisEvents_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_m_AxisEvents_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_m_AxisEvents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerInputsControllerBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerInputsControllerBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AControllerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerInputsControllerBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerInputsControllerBase_Statics::ClassParams = {
	&APlayerInputsControllerBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APlayerInputsControllerBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerInputsControllerBase_Statics::PropPointers),
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerInputsControllerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerInputsControllerBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerInputsControllerBase()
{
	if (!Z_Registration_Info_UClass_APlayerInputsControllerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerInputsControllerBase.OuterSingleton, Z_Construct_UClass_APlayerInputsControllerBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerInputsControllerBase.OuterSingleton;
}
APlayerInputsControllerBase::APlayerInputsControllerBase() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerInputsControllerBase);
APlayerInputsControllerBase::~APlayerInputsControllerBase() {}
// ********** End Class APlayerInputsControllerBase ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_PlayerInputsControllers_PlayerInputsControllerBase_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerInputsControllerBase, APlayerInputsControllerBase::StaticClass, TEXT("APlayerInputsControllerBase"), &Z_Registration_Info_UClass_APlayerInputsControllerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerInputsControllerBase), 2464077939U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_PlayerInputsControllers_PlayerInputsControllerBase_h__Script_PartyJungle_540842145(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_PlayerInputsControllers_PlayerInputsControllerBase_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_PlayerInputsControllers_PlayerInputsControllerBase_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
