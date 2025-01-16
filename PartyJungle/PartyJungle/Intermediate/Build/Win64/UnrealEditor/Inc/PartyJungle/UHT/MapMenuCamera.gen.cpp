// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Player/Map/MapMenuCamera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapMenuCamera() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APawn();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMapMenuCamera();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMapMenuCamera_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// End Cross Module References

// Begin Class AMapMenuCamera
void AMapMenuCamera::StaticRegisterNativesAMapMenuCamera()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMapMenuCamera);
UClass* Z_Construct_UClass_AMapMenuCamera_NoRegister()
{
	return AMapMenuCamera::StaticClass();
}
struct Z_Construct_UClass_AMapMenuCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/Map/MapMenuCamera.h" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_MenuWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapMenuCamera>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_MenuWidgetClass = { "MenuWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, MenuWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuWidgetClass_MetaData), NewProp_MenuWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapMenuCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_MenuWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapMenuCamera_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMapMenuCamera_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapMenuCamera_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapMenuCamera_Statics::ClassParams = {
	&AMapMenuCamera::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMapMenuCamera_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMapMenuCamera_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapMenuCamera_Statics::Class_MetaDataParams), Z_Construct_UClass_AMapMenuCamera_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMapMenuCamera()
{
	if (!Z_Registration_Info_UClass_AMapMenuCamera.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapMenuCamera.OuterSingleton, Z_Construct_UClass_AMapMenuCamera_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMapMenuCamera.OuterSingleton;
}
template<> PARTYJUNGLE_API UClass* StaticClass<AMapMenuCamera>()
{
	return AMapMenuCamera::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMapMenuCamera);
AMapMenuCamera::~AMapMenuCamera() {}
// End Class AMapMenuCamera

// Begin Registration
struct Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMapMenuCamera, AMapMenuCamera::StaticClass, TEXT("AMapMenuCamera"), &Z_Registration_Info_UClass_AMapMenuCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapMenuCamera), 2141957976U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_2131883869(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
