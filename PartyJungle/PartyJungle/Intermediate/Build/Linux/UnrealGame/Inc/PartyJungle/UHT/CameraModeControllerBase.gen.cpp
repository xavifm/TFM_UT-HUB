// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Controllers/CameraControllers/CameraModeControllers/CameraModeControllerBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCameraModeControllerBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ACameraModeControllerBase();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ACameraModeControllerBase_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AControllerBase();
PARTYJUNGLE_API UEnum* Z_Construct_UEnum_PartyJungle_ECameraModes();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ECameraModes **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraModes;
static UEnum* ECameraModes_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECameraModes.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECameraModes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PartyJungle_ECameraModes, (UObject*)Z_Construct_UPackage__Script_PartyJungle(), TEXT("ECameraModes"));
	}
	return Z_Registration_Info_UEnum_ECameraModes.OuterSingleton;
}
template<> PARTYJUNGLE_API UEnum* StaticEnum<ECameraModes>()
{
	return ECameraModes_StaticEnum();
}
struct Z_Construct_UEnum_PartyJungle_ECameraModes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Cinematic.Name", "ECameraModes::Cinematic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enum with all possible Camera Modes.\n */" },
#endif
		{ "Focused.Name", "ECameraModes::Focused" },
		{ "FullView.Name", "ECameraModes::FullView" },
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraModeControllers/CameraModeControllerBase.h" },
		{ "Static.Name", "ECameraModes::Static" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum with all possible Camera Modes." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECameraModes::FullView", (int64)ECameraModes::FullView },
		{ "ECameraModes::Focused", (int64)ECameraModes::Focused },
		{ "ECameraModes::Cinematic", (int64)ECameraModes::Cinematic },
		{ "ECameraModes::Static", (int64)ECameraModes::Static },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PartyJungle_ECameraModes_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PartyJungle,
	nullptr,
	"ECameraModes",
	"ECameraModes",
	Z_Construct_UEnum_PartyJungle_ECameraModes_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PartyJungle_ECameraModes_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PartyJungle_ECameraModes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PartyJungle_ECameraModes_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PartyJungle_ECameraModes()
{
	if (!Z_Registration_Info_UEnum_ECameraModes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraModes.InnerSingleton, Z_Construct_UEnum_PartyJungle_ECameraModes_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECameraModes.InnerSingleton;
}
// ********** End Enum ECameraModes ****************************************************************

// ********** Begin Class ACameraModeControllerBase ************************************************
void ACameraModeControllerBase::StaticRegisterNativesACameraModeControllerBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACameraModeControllerBase;
UClass* ACameraModeControllerBase::GetPrivateStaticClass()
{
	using TClass = ACameraModeControllerBase;
	if (!Z_Registration_Info_UClass_ACameraModeControllerBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CameraModeControllerBase"),
			Z_Registration_Info_UClass_ACameraModeControllerBase.InnerSingleton,
			StaticRegisterNativesACameraModeControllerBase,
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
	return Z_Registration_Info_UClass_ACameraModeControllerBase.InnerSingleton;
}
UClass* Z_Construct_UClass_ACameraModeControllerBase_NoRegister()
{
	return ACameraModeControllerBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACameraModeControllerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base Controller for each Camera Mode.\n */" },
#endif
		{ "IncludePath", "Controllers/CameraControllers/CameraModeControllers/CameraModeControllerBase.h" },
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraModeControllers/CameraModeControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base Controller for each Camera Mode." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_CameraActor_MetaData[] = {
		{ "Category", "CameraData" },
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraModeControllers/CameraModeControllerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_CameraTarget_MetaData[] = {
		{ "Category", "CameraData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Associated Camera actor.\n" },
#endif
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraModeControllers/CameraModeControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Associated Camera actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_CameraMode_MetaData[] = {
		{ "Category", "CameraData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Target Actor of the associated Camera.\n" },
#endif
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraModeControllers/CameraModeControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Target Actor of the associated Camera." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_MinCameraBounds_MetaData[] = {
		{ "Category", "CameraData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Camera Mode of the associated Camera.\n" },
#endif
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraModeControllers/CameraModeControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Camera Mode of the associated Camera." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_MaxCameraBounds_MetaData[] = {
		{ "Category", "CameraData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Minimum Bounds for the associated Camera.\n" },
#endif
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraModeControllers/CameraModeControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Minimum Bounds for the associated Camera." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_CameraActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_CameraTarget;
	static const UECodeGen_Private::FBytePropertyParams NewProp_m_CameraMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_m_CameraMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_m_MinCameraBounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_m_MaxCameraBounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraModeControllerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraModeControllerBase_Statics::NewProp_m_CameraActor = { "m_CameraActor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraModeControllerBase, m_CameraActor), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_CameraActor_MetaData), NewProp_m_CameraActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraModeControllerBase_Statics::NewProp_m_CameraTarget = { "m_CameraTarget", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraModeControllerBase, m_CameraTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_CameraTarget_MetaData), NewProp_m_CameraTarget_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACameraModeControllerBase_Statics::NewProp_m_CameraMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACameraModeControllerBase_Statics::NewProp_m_CameraMode = { "m_CameraMode", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraModeControllerBase, m_CameraMode), Z_Construct_UEnum_PartyJungle_ECameraModes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_CameraMode_MetaData), NewProp_m_CameraMode_MetaData) }; // 682944729
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACameraModeControllerBase_Statics::NewProp_m_MinCameraBounds = { "m_MinCameraBounds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraModeControllerBase, m_MinCameraBounds), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_MinCameraBounds_MetaData), NewProp_m_MinCameraBounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACameraModeControllerBase_Statics::NewProp_m_MaxCameraBounds = { "m_MaxCameraBounds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraModeControllerBase, m_MaxCameraBounds), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_MaxCameraBounds_MetaData), NewProp_m_MaxCameraBounds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraModeControllerBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraModeControllerBase_Statics::NewProp_m_CameraActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraModeControllerBase_Statics::NewProp_m_CameraTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraModeControllerBase_Statics::NewProp_m_CameraMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraModeControllerBase_Statics::NewProp_m_CameraMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraModeControllerBase_Statics::NewProp_m_MinCameraBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraModeControllerBase_Statics::NewProp_m_MaxCameraBounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraModeControllerBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACameraModeControllerBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AControllerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraModeControllerBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACameraModeControllerBase_Statics::ClassParams = {
	&ACameraModeControllerBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACameraModeControllerBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACameraModeControllerBase_Statics::PropPointers),
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraModeControllerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ACameraModeControllerBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACameraModeControllerBase()
{
	if (!Z_Registration_Info_UClass_ACameraModeControllerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACameraModeControllerBase.OuterSingleton, Z_Construct_UClass_ACameraModeControllerBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACameraModeControllerBase.OuterSingleton;
}
ACameraModeControllerBase::ACameraModeControllerBase() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraModeControllerBase);
ACameraModeControllerBase::~ACameraModeControllerBase() {}
// ********** End Class ACameraModeControllerBase **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_CameraModeControllerBase_h__Script_PartyJungle_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECameraModes_StaticEnum, TEXT("ECameraModes"), &Z_Registration_Info_UEnum_ECameraModes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 682944729U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACameraModeControllerBase, ACameraModeControllerBase::StaticClass, TEXT("ACameraModeControllerBase"), &Z_Registration_Info_UClass_ACameraModeControllerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACameraModeControllerBase), 4132206457U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_CameraModeControllerBase_h__Script_PartyJungle_1333392022(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_CameraModeControllerBase_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_CameraModeControllerBase_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_CameraModeControllerBase_h__Script_PartyJungle_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_CameraModeControllerBase_h__Script_PartyJungle_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
