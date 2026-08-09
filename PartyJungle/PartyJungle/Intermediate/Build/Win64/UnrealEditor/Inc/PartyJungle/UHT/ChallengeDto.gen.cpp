// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Challenge/ChallengeDto.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeChallengeDto() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UChallengeDto();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UChallengeDto_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UChallengeDto ************************************************************
void UChallengeDto::StaticRegisterNativesUChallengeDto()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UChallengeDto;
UClass* UChallengeDto::GetPrivateStaticClass()
{
	using TClass = UChallengeDto;
	if (!Z_Registration_Info_UClass_UChallengeDto.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ChallengeDto"),
			Z_Registration_Info_UClass_UChallengeDto.InnerSingleton,
			StaticRegisterNativesUChallengeDto,
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
	return Z_Registration_Info_UClass_UChallengeDto.InnerSingleton;
}
UClass* Z_Construct_UClass_UChallengeDto_NoRegister()
{
	return UChallengeDto::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UChallengeDto_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Challenge/ChallengeDto.h" },
		{ "ModuleRelativePath", "Challenge/ChallengeDto.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WinnerTeam_MetaData[] = {
		{ "Category", "Challenge" },
		{ "ModuleRelativePath", "Challenge/ChallengeDto.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BetPercentage_MetaData[] = {
		{ "Category", "Challenge" },
		{ "ModuleRelativePath", "Challenge/ChallengeDto.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoinsGained_MetaData[] = {
		{ "Category", "Challenge" },
		{ "ModuleRelativePath", "Challenge/ChallengeDto.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrownsGained_MetaData[] = {
		{ "Category", "Challenge" },
		{ "ModuleRelativePath", "Challenge/ChallengeDto.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_WinnerTeam;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BetPercentage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CoinsGained;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CrownsGained;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChallengeDto>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UChallengeDto_Statics::NewProp_WinnerTeam = { "WinnerTeam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChallengeDto, WinnerTeam), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WinnerTeam_MetaData), NewProp_WinnerTeam_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UChallengeDto_Statics::NewProp_BetPercentage = { "BetPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChallengeDto, BetPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BetPercentage_MetaData), NewProp_BetPercentage_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UChallengeDto_Statics::NewProp_CoinsGained = { "CoinsGained", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChallengeDto, CoinsGained), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoinsGained_MetaData), NewProp_CoinsGained_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UChallengeDto_Statics::NewProp_CrownsGained = { "CrownsGained", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChallengeDto, CrownsGained), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrownsGained_MetaData), NewProp_CrownsGained_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChallengeDto_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChallengeDto_Statics::NewProp_WinnerTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChallengeDto_Statics::NewProp_BetPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChallengeDto_Statics::NewProp_CoinsGained,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChallengeDto_Statics::NewProp_CrownsGained,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChallengeDto_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UChallengeDto_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChallengeDto_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UChallengeDto_Statics::ClassParams = {
	&UChallengeDto::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UChallengeDto_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UChallengeDto_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChallengeDto_Statics::Class_MetaDataParams), Z_Construct_UClass_UChallengeDto_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UChallengeDto()
{
	if (!Z_Registration_Info_UClass_UChallengeDto.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChallengeDto.OuterSingleton, Z_Construct_UClass_UChallengeDto_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UChallengeDto.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UChallengeDto);
UChallengeDto::~UChallengeDto() {}
// ********** End Class UChallengeDto **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeDto_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChallengeDto, UChallengeDto::StaticClass, TEXT("UChallengeDto"), &Z_Registration_Info_UClass_UChallengeDto, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChallengeDto), 3858817498U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeDto_h__Script_PartyJungle_1884395000(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeDto_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeDto_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
