// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Player/Items/DiceItem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDiceItem() {}

// ********** Begin Cross Module References ********************************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_ADiceItem();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ADiceItem_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AItem();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADiceItem ****************************************************************
void ADiceItem::StaticRegisterNativesADiceItem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADiceItem;
UClass* ADiceItem::GetPrivateStaticClass()
{
	using TClass = ADiceItem;
	if (!Z_Registration_Info_UClass_ADiceItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DiceItem"),
			Z_Registration_Info_UClass_ADiceItem.InnerSingleton,
			StaticRegisterNativesADiceItem,
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
	return Z_Registration_Info_UClass_ADiceItem.InnerSingleton;
}
UClass* Z_Construct_UClass_ADiceItem_NoRegister()
{
	return ADiceItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADiceItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Player/Items/DiceItem.h" },
		{ "ModuleRelativePath", "Player/Items/DiceItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADiceItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADiceItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItem,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADiceItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADiceItem_Statics::ClassParams = {
	&ADiceItem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADiceItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ADiceItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADiceItem()
{
	if (!Z_Registration_Info_UClass_ADiceItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADiceItem.OuterSingleton, Z_Construct_UClass_ADiceItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADiceItem.OuterSingleton;
}
ADiceItem::ADiceItem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADiceItem);
ADiceItem::~ADiceItem() {}
// ********** End Class ADiceItem ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_DiceItem_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADiceItem, ADiceItem::StaticClass, TEXT("ADiceItem"), &Z_Registration_Info_UClass_ADiceItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADiceItem), 788882828U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_DiceItem_h__Script_PartyJungle_1166019015(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_DiceItem_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_DiceItem_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
