// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Challenge/MinigameDto.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMinigameDto() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UMinigameDto();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UMinigameDto_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMinigameDto *************************************************************
void UMinigameDto::StaticRegisterNativesUMinigameDto()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMinigameDto;
UClass* UMinigameDto::GetPrivateStaticClass()
{
	using TClass = UMinigameDto;
	if (!Z_Registration_Info_UClass_UMinigameDto.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MinigameDto"),
			Z_Registration_Info_UClass_UMinigameDto.InnerSingleton,
			StaticRegisterNativesUMinigameDto,
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
	return Z_Registration_Info_UClass_UMinigameDto.InnerSingleton;
}
UClass* Z_Construct_UClass_UMinigameDto_NoRegister()
{
	return UMinigameDto::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMinigameDto_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Challenge/MinigameDto.h" },
		{ "ModuleRelativePath", "Challenge/MinigameDto.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WinnerTeam_MetaData[] = {
		{ "Category", "Challenge" },
		{ "ModuleRelativePath", "Challenge/MinigameDto.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoinsReward_MetaData[] = {
		{ "Category", "Challenge" },
		{ "ModuleRelativePath", "Challenge/MinigameDto.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_WinnerTeam_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WinnerTeam;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CoinsReward;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMinigameDto>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMinigameDto_Statics::NewProp_WinnerTeam_Inner = { "WinnerTeam", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMinigameDto_Statics::NewProp_WinnerTeam = { "WinnerTeam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinigameDto, WinnerTeam), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WinnerTeam_MetaData), NewProp_WinnerTeam_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMinigameDto_Statics::NewProp_CoinsReward = { "CoinsReward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinigameDto, CoinsReward), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoinsReward_MetaData), NewProp_CoinsReward_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMinigameDto_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDto_Statics::NewProp_WinnerTeam_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDto_Statics::NewProp_WinnerTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDto_Statics::NewProp_CoinsReward,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMinigameDto_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMinigameDto_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMinigameDto_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMinigameDto_Statics::ClassParams = {
	&UMinigameDto::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMinigameDto_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMinigameDto_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMinigameDto_Statics::Class_MetaDataParams), Z_Construct_UClass_UMinigameDto_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMinigameDto()
{
	if (!Z_Registration_Info_UClass_UMinigameDto.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMinigameDto.OuterSingleton, Z_Construct_UClass_UMinigameDto_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMinigameDto.OuterSingleton;
}
UMinigameDto::UMinigameDto(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMinigameDto);
UMinigameDto::~UMinigameDto() {}
// ********** End Class UMinigameDto ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_MinigameDto_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMinigameDto, UMinigameDto::StaticClass, TEXT("UMinigameDto"), &Z_Registration_Info_UClass_UMinigameDto, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMinigameDto), 551554294U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_MinigameDto_h__Script_PartyJungle_3737267798(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_MinigameDto_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_MinigameDto_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
