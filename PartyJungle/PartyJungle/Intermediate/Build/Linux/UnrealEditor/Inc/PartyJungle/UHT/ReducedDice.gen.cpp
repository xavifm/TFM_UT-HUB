// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Player/Items/ReducedDice.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeReducedDice() {}

// ********** Begin Cross Module References ********************************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_AItem();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMapMenuCamera_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AReducedDice();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AReducedDice_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AReducedDice *************************************************************
void AReducedDice::StaticRegisterNativesAReducedDice()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AReducedDice;
UClass* AReducedDice::GetPrivateStaticClass()
{
	using TClass = AReducedDice;
	if (!Z_Registration_Info_UClass_AReducedDice.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ReducedDice"),
			Z_Registration_Info_UClass_AReducedDice.InnerSingleton,
			StaticRegisterNativesAReducedDice,
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
	return Z_Registration_Info_UClass_AReducedDice.InnerSingleton;
}
UClass* Z_Construct_UClass_AReducedDice_NoRegister()
{
	return AReducedDice::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AReducedDice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Player/Items/ReducedDice.h" },
		{ "ModuleRelativePath", "Player/Items/ReducedDice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapMenuCamera_MetaData[] = {
		{ "Category", "ReducedDice" },
		{ "ModuleRelativePath", "Player/Items/ReducedDice.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapMenuCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReducedDice>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReducedDice_Statics::NewProp_MapMenuCamera = { "MapMenuCamera", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AReducedDice, MapMenuCamera), Z_Construct_UClass_AMapMenuCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapMenuCamera_MetaData), NewProp_MapMenuCamera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AReducedDice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReducedDice_Statics::NewProp_MapMenuCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AReducedDice_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AReducedDice_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItem,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AReducedDice_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AReducedDice_Statics::ClassParams = {
	&AReducedDice::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AReducedDice_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AReducedDice_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AReducedDice_Statics::Class_MetaDataParams), Z_Construct_UClass_AReducedDice_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AReducedDice()
{
	if (!Z_Registration_Info_UClass_AReducedDice.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AReducedDice.OuterSingleton, Z_Construct_UClass_AReducedDice_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AReducedDice.OuterSingleton;
}
AReducedDice::AReducedDice() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AReducedDice);
AReducedDice::~AReducedDice() {}
// ********** End Class AReducedDice ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_ReducedDice_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AReducedDice, AReducedDice::StaticClass, TEXT("AReducedDice"), &Z_Registration_Info_UClass_AReducedDice, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AReducedDice), 4091662059U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_ReducedDice_h__Script_PartyJungle_3785619307(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_ReducedDice_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_ReducedDice_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
