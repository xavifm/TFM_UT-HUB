// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Minigame/CrossInfo/MinigameDataGameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMinigameDataGameInstance() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UChallengeDto_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UMinigameDataGameInstance();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UMinigameDataGameInstance_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UScoreDto_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UTransactionDto_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMinigameDataGameInstance ************************************************
void UMinigameDataGameInstance::StaticRegisterNativesUMinigameDataGameInstance()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMinigameDataGameInstance;
UClass* UMinigameDataGameInstance::GetPrivateStaticClass()
{
	using TClass = UMinigameDataGameInstance;
	if (!Z_Registration_Info_UClass_UMinigameDataGameInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MinigameDataGameInstance"),
			Z_Registration_Info_UClass_UMinigameDataGameInstance.InnerSingleton,
			StaticRegisterNativesUMinigameDataGameInstance,
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
	return Z_Registration_Info_UClass_UMinigameDataGameInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UMinigameDataGameInstance_NoRegister()
{
	return UMinigameDataGameInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMinigameDataGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Minigame/CrossInfo/MinigameDataGameInstance.h" },
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameDataGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayersInBoard_MetaData[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameDataGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoundsInBoard_MetaData[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameDataGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scores_Inner_MetaData[] = {
		{ "Category", "Scores" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameDataGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scores_MetaData[] = {
		{ "Category", "Scores" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameDataGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransactionsRegistry_MetaData[] = {
		{ "Category", "MinigameDataGameInstance" },
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameDataGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChallengesRegistry_MetaData[] = {
		{ "Category", "MinigameDataGameInstance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//canviar per minigames\n" },
#endif
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameDataGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "canviar per minigames" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayersInBoard;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoundsInBoard;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Scores_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Scores;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransactionsRegistry_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TransactionsRegistry;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChallengesRegistry_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChallengesRegistry;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMinigameDataGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_PlayersInBoard = { "PlayersInBoard", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinigameDataGameInstance, PlayersInBoard), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayersInBoard_MetaData), NewProp_PlayersInBoard_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_RoundsInBoard = { "RoundsInBoard", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinigameDataGameInstance, RoundsInBoard), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoundsInBoard_MetaData), NewProp_RoundsInBoard_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_Scores_Inner = { "Scores", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UScoreDto_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scores_Inner_MetaData), NewProp_Scores_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_Scores = { "Scores", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinigameDataGameInstance, Scores), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scores_MetaData), NewProp_Scores_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_TransactionsRegistry_Inner = { "TransactionsRegistry", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTransactionDto_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_TransactionsRegistry = { "TransactionsRegistry", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinigameDataGameInstance, TransactionsRegistry), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransactionsRegistry_MetaData), NewProp_TransactionsRegistry_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_ChallengesRegistry_Inner = { "ChallengesRegistry", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UChallengeDto_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_ChallengesRegistry = { "ChallengesRegistry", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinigameDataGameInstance, ChallengesRegistry), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChallengesRegistry_MetaData), NewProp_ChallengesRegistry_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMinigameDataGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_PlayersInBoard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_RoundsInBoard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_Scores_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_Scores,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_TransactionsRegistry_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_TransactionsRegistry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_ChallengesRegistry_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_ChallengesRegistry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMinigameDataGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMinigameDataGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMinigameDataGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMinigameDataGameInstance_Statics::ClassParams = {
	&UMinigameDataGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMinigameDataGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMinigameDataGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMinigameDataGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMinigameDataGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMinigameDataGameInstance()
{
	if (!Z_Registration_Info_UClass_UMinigameDataGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMinigameDataGameInstance.OuterSingleton, Z_Construct_UClass_UMinigameDataGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMinigameDataGameInstance.OuterSingleton;
}
UMinigameDataGameInstance::UMinigameDataGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMinigameDataGameInstance);
UMinigameDataGameInstance::~UMinigameDataGameInstance() {}
// ********** End Class UMinigameDataGameInstance **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameDataGameInstance_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMinigameDataGameInstance, UMinigameDataGameInstance::StaticClass, TEXT("UMinigameDataGameInstance"), &Z_Registration_Info_UClass_UMinigameDataGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMinigameDataGameInstance), 3706972744U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameDataGameInstance_h__Script_PartyJungle_3162246790(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameDataGameInstance_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameDataGameInstance_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
