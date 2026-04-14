// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Controllers/UIControllers/UIControllerBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUIControllerBase() {}

// ********** Begin Cross Module References ********************************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_AControllerBase();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AUIControllerBase();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AUIControllerBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AUIControllerBase ********************************************************
void AUIControllerBase::StaticRegisterNativesAUIControllerBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AUIControllerBase;
UClass* AUIControllerBase::GetPrivateStaticClass()
{
	using TClass = AUIControllerBase;
	if (!Z_Registration_Info_UClass_AUIControllerBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UIControllerBase"),
			Z_Registration_Info_UClass_AUIControllerBase.InnerSingleton,
			StaticRegisterNativesAUIControllerBase,
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
	return Z_Registration_Info_UClass_AUIControllerBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AUIControllerBase_NoRegister()
{
	return AUIControllerBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AUIControllerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base UI Controller class.\n */" },
#endif
		{ "IncludePath", "Controllers/UIControllers/UIControllerBase.h" },
		{ "ModuleRelativePath", "Controllers/UIControllers/UIControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base UI Controller class." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUIControllerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUIControllerBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AControllerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUIControllerBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUIControllerBase_Statics::ClassParams = {
	&AUIControllerBase::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUIControllerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AUIControllerBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUIControllerBase()
{
	if (!Z_Registration_Info_UClass_AUIControllerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUIControllerBase.OuterSingleton, Z_Construct_UClass_AUIControllerBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUIControllerBase.OuterSingleton;
}
AUIControllerBase::AUIControllerBase() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUIControllerBase);
AUIControllerBase::~AUIControllerBase() {}
// ********** End Class AUIControllerBase **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_UIControllers_UIControllerBase_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUIControllerBase, AUIControllerBase::StaticClass, TEXT("AUIControllerBase"), &Z_Registration_Info_UClass_AUIControllerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUIControllerBase), 795037284U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_UIControllers_UIControllerBase_h__Script_PartyJungle_949811131(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_UIControllers_UIControllerBase_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_UIControllers_UIControllerBase_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
