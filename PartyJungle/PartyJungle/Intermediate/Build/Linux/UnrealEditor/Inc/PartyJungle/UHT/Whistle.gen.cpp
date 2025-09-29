// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Player/Items/Whistle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWhistle() {}

// ********** Begin Cross Module References ********************************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_AItem();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMapMenuCamera_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AWhistle();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AWhistle_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AWhistle *****************************************************************
void AWhistle::StaticRegisterNativesAWhistle()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AWhistle;
UClass* AWhistle::GetPrivateStaticClass()
{
	using TClass = AWhistle;
	if (!Z_Registration_Info_UClass_AWhistle.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Whistle"),
			Z_Registration_Info_UClass_AWhistle.InnerSingleton,
			StaticRegisterNativesAWhistle,
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
	return Z_Registration_Info_UClass_AWhistle.InnerSingleton;
}
UClass* Z_Construct_UClass_AWhistle_NoRegister()
{
	return AWhistle::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AWhistle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Player/Items/Whistle.h" },
		{ "ModuleRelativePath", "Player/Items/Whistle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapMenuCamera_MetaData[] = {
		{ "Category", "Whistle" },
		{ "ModuleRelativePath", "Player/Items/Whistle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapMenuCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWhistle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWhistle_Statics::NewProp_MapMenuCamera = { "MapMenuCamera", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhistle, MapMenuCamera), Z_Construct_UClass_AMapMenuCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapMenuCamera_MetaData), NewProp_MapMenuCamera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWhistle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhistle_Statics::NewProp_MapMenuCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWhistle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWhistle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItem,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWhistle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWhistle_Statics::ClassParams = {
	&AWhistle::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWhistle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWhistle_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWhistle_Statics::Class_MetaDataParams), Z_Construct_UClass_AWhistle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWhistle()
{
	if (!Z_Registration_Info_UClass_AWhistle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWhistle.OuterSingleton, Z_Construct_UClass_AWhistle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWhistle.OuterSingleton;
}
AWhistle::AWhistle() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWhistle);
AWhistle::~AWhistle() {}
// ********** End Class AWhistle *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_Whistle_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWhistle, AWhistle::StaticClass, TEXT("AWhistle"), &Z_Registration_Info_UClass_AWhistle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWhistle), 3417072120U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_Whistle_h__Script_PartyJungle_2570303168(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_Whistle_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_Whistle_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
