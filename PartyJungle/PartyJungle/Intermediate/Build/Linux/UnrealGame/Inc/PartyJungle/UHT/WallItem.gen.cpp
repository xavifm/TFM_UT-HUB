// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Player/Items/WallItem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWallItem() {}

// ********** Begin Cross Module References ********************************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_AItem();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMapMenuCamera_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AWallItem();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AWallItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AWallItem ****************************************************************
void AWallItem::StaticRegisterNativesAWallItem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AWallItem;
UClass* AWallItem::GetPrivateStaticClass()
{
	using TClass = AWallItem;
	if (!Z_Registration_Info_UClass_AWallItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WallItem"),
			Z_Registration_Info_UClass_AWallItem.InnerSingleton,
			StaticRegisterNativesAWallItem,
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
	return Z_Registration_Info_UClass_AWallItem.InnerSingleton;
}
UClass* Z_Construct_UClass_AWallItem_NoRegister()
{
	return AWallItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AWallItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Player/Items/WallItem.h" },
		{ "ModuleRelativePath", "Player/Items/WallItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapMenuCamera_MetaData[] = {
		{ "Category", "WallItem" },
		{ "ModuleRelativePath", "Player/Items/WallItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapMenuCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWallItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWallItem_Statics::NewProp_MapMenuCamera = { "MapMenuCamera", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWallItem, MapMenuCamera), Z_Construct_UClass_AMapMenuCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapMenuCamera_MetaData), NewProp_MapMenuCamera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWallItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWallItem_Statics::NewProp_MapMenuCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWallItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWallItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItem,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWallItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWallItem_Statics::ClassParams = {
	&AWallItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWallItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWallItem_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWallItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AWallItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWallItem()
{
	if (!Z_Registration_Info_UClass_AWallItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWallItem.OuterSingleton, Z_Construct_UClass_AWallItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWallItem.OuterSingleton;
}
AWallItem::AWallItem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWallItem);
AWallItem::~AWallItem() {}
// ********** End Class AWallItem ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_WallItem_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWallItem, AWallItem::StaticClass, TEXT("AWallItem"), &Z_Registration_Info_UClass_AWallItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWallItem), 896452812U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_WallItem_h__Script_PartyJungle_2251312671(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_WallItem_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_WallItem_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
