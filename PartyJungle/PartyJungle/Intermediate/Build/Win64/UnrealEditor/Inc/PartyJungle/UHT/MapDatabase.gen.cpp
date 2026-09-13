// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Map/MapDatabase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMapDatabase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMapDatabase();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMapDatabase_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMapDatabase *************************************************************
void AMapDatabase::StaticRegisterNativesAMapDatabase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMapDatabase;
UClass* AMapDatabase::GetPrivateStaticClass()
{
	using TClass = AMapDatabase;
	if (!Z_Registration_Info_UClass_AMapDatabase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MapDatabase"),
			Z_Registration_Info_UClass_AMapDatabase.InnerSingleton,
			StaticRegisterNativesAMapDatabase,
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
	return Z_Registration_Info_UClass_AMapDatabase.InnerSingleton;
}
UClass* Z_Construct_UClass_AMapDatabase_NoRegister()
{
	return AMapDatabase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMapDatabase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Map/MapDatabase.h" },
		{ "ModuleRelativePath", "Map/MapDatabase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapDatabase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMapDatabase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapDatabase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapDatabase_Statics::ClassParams = {
	&AMapDatabase::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapDatabase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMapDatabase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMapDatabase()
{
	if (!Z_Registration_Info_UClass_AMapDatabase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapDatabase.OuterSingleton, Z_Construct_UClass_AMapDatabase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMapDatabase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMapDatabase);
AMapDatabase::~AMapDatabase() {}
// ********** End Class AMapDatabase ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Map_MapDatabase_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMapDatabase, AMapDatabase::StaticClass, TEXT("AMapDatabase"), &Z_Registration_Info_UClass_AMapDatabase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapDatabase), 2892230978U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Map_MapDatabase_h__Script_PartyJungle_1568969484(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Map_MapDatabase_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Map_MapDatabase_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
