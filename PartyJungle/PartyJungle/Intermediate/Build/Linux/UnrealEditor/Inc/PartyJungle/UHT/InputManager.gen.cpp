// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Managers/InputManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInputManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APawn();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AInputManager();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AInputManager_NoRegister();
PARTYJUNGLE_API UEnum* Z_Construct_UEnum_PartyJungle_EInputAxes();
PARTYJUNGLE_API UEnum* Z_Construct_UEnum_PartyJungle_EInputKeys();
PARTYJUNGLE_API UEnum* Z_Construct_UEnum_PartyJungle_ETriggerEvents();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EInputKeys ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputKeys;
static UEnum* EInputKeys_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInputKeys.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInputKeys.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PartyJungle_EInputKeys, (UObject*)Z_Construct_UPackage__Script_PartyJungle(), TEXT("EInputKeys"));
	}
	return Z_Registration_Info_UEnum_EInputKeys.OuterSingleton;
}
template<> PARTYJUNGLE_API UEnum* StaticEnum<EInputKeys>()
{
	return EInputKeys_StaticEnum();
}
struct Z_Construct_UEnum_PartyJungle_EInputKeys_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Button_Down.DisplayName", "Button_Down" },
		{ "Button_Down.Name", "EInputKeys::Button_Down" },
		{ "Button_Left.DisplayName", "Button_Left" },
		{ "Button_Left.Name", "EInputKeys::Button_Left" },
		{ "Button_Right.DisplayName", "Button_Right" },
		{ "Button_Right.Name", "EInputKeys::Button_Right" },
		{ "Button_Select.DisplayName", "Button_Select" },
		{ "Button_Select.Name", "EInputKeys::Button_Select" },
		{ "Button_Start.DisplayName", "Button_Start" },
		{ "Button_Start.Name", "EInputKeys::Button_Start" },
		{ "Button_Up.DisplayName", "Button_Up" },
		{ "Button_Up.Name", "EInputKeys::Button_Up" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enum with all possible Key Inputs.\n */" },
#endif
		{ "COUNT.Name", "EInputKeys::COUNT" },
		{ "Cross_Down.DisplayName", "Cross_Down" },
		{ "Cross_Down.Name", "EInputKeys::Cross_Down" },
		{ "Cross_Left.DisplayName", "Cross_Left" },
		{ "Cross_Left.Name", "EInputKeys::Cross_Left" },
		{ "Cross_Right.DisplayName", "Cross_Right" },
		{ "Cross_Right.Name", "EInputKeys::Cross_Right" },
		{ "Cross_Up.DisplayName", "Cross_Up" },
		{ "Cross_Up.Name", "EInputKeys::Cross_Up" },
		{ "ModuleRelativePath", "Managers/InputManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum with all possible Key Inputs." },
#endif
		{ "Trigger1_Left.DisplayName", "Trigger1_Left" },
		{ "Trigger1_Left.Name", "EInputKeys::Trigger1_Left" },
		{ "Trigger1_Right.DisplayName", "Trigger1_Right" },
		{ "Trigger1_Right.Name", "EInputKeys::Trigger1_Right" },
		{ "Trigger2_Left.DisplayName", "Trigger2_Left" },
		{ "Trigger2_Left.Name", "EInputKeys::Trigger2_Left" },
		{ "Trigger2_Right.DisplayName", "Trigger2_Right" },
		{ "Trigger2_Right.Name", "EInputKeys::Trigger2_Right" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInputKeys::Button_Start", (int64)EInputKeys::Button_Start },
		{ "EInputKeys::Button_Select", (int64)EInputKeys::Button_Select },
		{ "EInputKeys::Button_Down", (int64)EInputKeys::Button_Down },
		{ "EInputKeys::Button_Up", (int64)EInputKeys::Button_Up },
		{ "EInputKeys::Button_Right", (int64)EInputKeys::Button_Right },
		{ "EInputKeys::Button_Left", (int64)EInputKeys::Button_Left },
		{ "EInputKeys::Cross_Down", (int64)EInputKeys::Cross_Down },
		{ "EInputKeys::Cross_Up", (int64)EInputKeys::Cross_Up },
		{ "EInputKeys::Cross_Right", (int64)EInputKeys::Cross_Right },
		{ "EInputKeys::Cross_Left", (int64)EInputKeys::Cross_Left },
		{ "EInputKeys::Trigger1_Right", (int64)EInputKeys::Trigger1_Right },
		{ "EInputKeys::Trigger1_Left", (int64)EInputKeys::Trigger1_Left },
		{ "EInputKeys::Trigger2_Right", (int64)EInputKeys::Trigger2_Right },
		{ "EInputKeys::Trigger2_Left", (int64)EInputKeys::Trigger2_Left },
		{ "EInputKeys::COUNT", (int64)EInputKeys::COUNT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PartyJungle_EInputKeys_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PartyJungle,
	nullptr,
	"EInputKeys",
	"EInputKeys",
	Z_Construct_UEnum_PartyJungle_EInputKeys_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PartyJungle_EInputKeys_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PartyJungle_EInputKeys_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PartyJungle_EInputKeys_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PartyJungle_EInputKeys()
{
	if (!Z_Registration_Info_UEnum_EInputKeys.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputKeys.InnerSingleton, Z_Construct_UEnum_PartyJungle_EInputKeys_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInputKeys.InnerSingleton;
}
// ********** End Enum EInputKeys ******************************************************************

// ********** Begin Enum EInputAxes ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputAxes;
static UEnum* EInputAxes_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInputAxes.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInputAxes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PartyJungle_EInputAxes, (UObject*)Z_Construct_UPackage__Script_PartyJungle(), TEXT("EInputAxes"));
	}
	return Z_Registration_Info_UEnum_EInputAxes.OuterSingleton;
}
template<> PARTYJUNGLE_API UEnum* StaticEnum<EInputAxes>()
{
	return EInputAxes_StaticEnum();
}
struct Z_Construct_UEnum_PartyJungle_EInputAxes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AxisX_Left.DisplayName", "AxisX_Left" },
		{ "AxisX_Left.Name", "EInputAxes::AxisX_Left" },
		{ "AxisX_Right.DisplayName", "AxisX_Right" },
		{ "AxisX_Right.Name", "EInputAxes::AxisX_Right" },
		{ "AxisY_Left.DisplayName", "AxisY_Left" },
		{ "AxisY_Left.Name", "EInputAxes::AxisY_Left" },
		{ "AxisY_Right.DisplayName", "AxisY_Right" },
		{ "AxisY_Right.Name", "EInputAxes::AxisY_Right" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enum with all possible Axis Inputs.\n */" },
#endif
		{ "COUNT.Name", "EInputAxes::COUNT" },
		{ "ModuleRelativePath", "Managers/InputManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum with all possible Axis Inputs." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInputAxes::AxisX_Left", (int64)EInputAxes::AxisX_Left },
		{ "EInputAxes::AxisY_Left", (int64)EInputAxes::AxisY_Left },
		{ "EInputAxes::AxisX_Right", (int64)EInputAxes::AxisX_Right },
		{ "EInputAxes::AxisY_Right", (int64)EInputAxes::AxisY_Right },
		{ "EInputAxes::COUNT", (int64)EInputAxes::COUNT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PartyJungle_EInputAxes_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PartyJungle,
	nullptr,
	"EInputAxes",
	"EInputAxes",
	Z_Construct_UEnum_PartyJungle_EInputAxes_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PartyJungle_EInputAxes_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PartyJungle_EInputAxes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PartyJungle_EInputAxes_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PartyJungle_EInputAxes()
{
	if (!Z_Registration_Info_UEnum_EInputAxes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputAxes.InnerSingleton, Z_Construct_UEnum_PartyJungle_EInputAxes_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInputAxes.InnerSingleton;
}
// ********** End Enum EInputAxes ******************************************************************

// ********** Begin Enum ETriggerEvents ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETriggerEvents;
static UEnum* ETriggerEvents_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETriggerEvents.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETriggerEvents.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PartyJungle_ETriggerEvents, (UObject*)Z_Construct_UPackage__Script_PartyJungle(), TEXT("ETriggerEvents"));
	}
	return Z_Registration_Info_UEnum_ETriggerEvents.OuterSingleton;
}
template<> PARTYJUNGLE_API UEnum* StaticEnum<ETriggerEvents>()
{
	return ETriggerEvents_StaticEnum();
}
struct Z_Construct_UEnum_PartyJungle_ETriggerEvents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Axis.Name", "ETriggerEvents::Axis" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enum with all the Trigger Events.\n */" },
#endif
		{ "COUNT.Name", "ETriggerEvents::COUNT" },
		{ "DoubleClick.Name", "ETriggerEvents::DoubleClick" },
		{ "ModuleRelativePath", "Managers/InputManager.h" },
		{ "Pressed.Name", "ETriggerEvents::Pressed" },
		{ "Released.Name", "ETriggerEvents::Released" },
		{ "Repeat.Name", "ETriggerEvents::Repeat" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum with all the Trigger Events." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETriggerEvents::Pressed", (int64)ETriggerEvents::Pressed },
		{ "ETriggerEvents::Released", (int64)ETriggerEvents::Released },
		{ "ETriggerEvents::Repeat", (int64)ETriggerEvents::Repeat },
		{ "ETriggerEvents::DoubleClick", (int64)ETriggerEvents::DoubleClick },
		{ "ETriggerEvents::Axis", (int64)ETriggerEvents::Axis },
		{ "ETriggerEvents::COUNT", (int64)ETriggerEvents::COUNT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PartyJungle_ETriggerEvents_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PartyJungle,
	nullptr,
	"ETriggerEvents",
	"ETriggerEvents",
	Z_Construct_UEnum_PartyJungle_ETriggerEvents_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PartyJungle_ETriggerEvents_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PartyJungle_ETriggerEvents_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PartyJungle_ETriggerEvents_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PartyJungle_ETriggerEvents()
{
	if (!Z_Registration_Info_UEnum_ETriggerEvents.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETriggerEvents.InnerSingleton, Z_Construct_UEnum_PartyJungle_ETriggerEvents_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETriggerEvents.InnerSingleton;
}
// ********** End Enum ETriggerEvents **************************************************************

// ********** Begin Class AInputManager ************************************************************
void AInputManager::StaticRegisterNativesAInputManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AInputManager;
UClass* AInputManager::GetPrivateStaticClass()
{
	using TClass = AInputManager;
	if (!Z_Registration_Info_UClass_AInputManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InputManager"),
			Z_Registration_Info_UClass_AInputManager.InnerSingleton,
			StaticRegisterNativesAInputManager,
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
	return Z_Registration_Info_UClass_AInputManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AInputManager_NoRegister()
{
	return AInputManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AInputManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Manager for all Game Inputs.\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Managers/InputManager.h" },
		{ "ModuleRelativePath", "Managers/InputManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Manager for all Game Inputs." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInputManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AInputManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInputManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInputManager_Statics::ClassParams = {
	&AInputManager::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInputManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AInputManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInputManager()
{
	if (!Z_Registration_Info_UClass_AInputManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInputManager.OuterSingleton, Z_Construct_UClass_AInputManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInputManager.OuterSingleton;
}
AInputManager::AInputManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInputManager);
AInputManager::~AInputManager() {}
// ********** End Class AInputManager **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_InputManager_h__Script_PartyJungle_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInputKeys_StaticEnum, TEXT("EInputKeys"), &Z_Registration_Info_UEnum_EInputKeys, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3280045900U) },
		{ EInputAxes_StaticEnum, TEXT("EInputAxes"), &Z_Registration_Info_UEnum_EInputAxes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2786531377U) },
		{ ETriggerEvents_StaticEnum, TEXT("ETriggerEvents"), &Z_Registration_Info_UEnum_ETriggerEvents, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3990706575U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInputManager, AInputManager::StaticClass, TEXT("AInputManager"), &Z_Registration_Info_UClass_AInputManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInputManager), 3917920202U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_InputManager_h__Script_PartyJungle_3673789363(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_InputManager_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_InputManager_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_InputManager_h__Script_PartyJungle_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_InputManager_h__Script_PartyJungle_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
