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
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMapMenuCamera_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinion_NoRegister();
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
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameDataGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Teams_MetaData[] = {
		{ "Category", "MinigameDataGameInstance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Entry minigame info\n" },
#endif
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameDataGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Entry minigame info" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayingMinions_MetaData[] = {
		{ "Category", "MinigameDataGameInstance" },
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameDataGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attacker_MetaData[] = {
		{ "Category", "MinigameDataGameInstance" },
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameDataGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Victim_MetaData[] = {
		{ "Category", "MinigameDataGameInstance" },
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameDataGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapMenuCamera_MetaData[] = {
		{ "Category", "MinigameDataGameInstance" },
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameDataGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Challenge_MetaData[] = {
		{ "Category", "MinigameDataGameInstance" },
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameDataGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WinnerTeams_MetaData[] = {
		{ "Category", "MinigameDataGameInstance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Exit minigame info\n" },
#endif
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameDataGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exit minigame info" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WinnerMinions_MetaData[] = {
		{ "Category", "MinigameDataGameInstance" },
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameDataGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Draw_MetaData[] = {
		{ "Category", "MinigameDataGameInstance" },
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameDataGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChallengeWinner_MetaData[] = {
		{ "Category", "MinigameDataGameInstance" },
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameDataGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayersInBoard_MetaData[] = {
		{ "Category", "MinigameDataGameInstance" },
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameDataGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoundsInBoard_MetaData[] = {
		{ "Category", "MinigameDataGameInstance" },
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameDataGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Scores_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Scores;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransactionsRegistry_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TransactionsRegistry;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChallengesRegistry_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChallengesRegistry;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Teams_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Teams;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayingMinions_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayingMinions_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PlayingMinions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Victim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapMenuCamera;
	static void NewProp_Challenge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Challenge;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WinnerTeams_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WinnerTeams;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WinnerMinions_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WinnerMinions_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_WinnerMinions;
	static void NewProp_Draw_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Draw;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChallengeWinner;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayersInBoard;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoundsInBoard;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMinigameDataGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_Scores_Inner = { "Scores", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UScoreDto_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scores_Inner_MetaData), NewProp_Scores_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_Scores = { "Scores", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinigameDataGameInstance, Scores), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scores_MetaData), NewProp_Scores_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_TransactionsRegistry_Inner = { "TransactionsRegistry", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTransactionDto_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_TransactionsRegistry = { "TransactionsRegistry", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinigameDataGameInstance, TransactionsRegistry), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransactionsRegistry_MetaData), NewProp_TransactionsRegistry_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_ChallengesRegistry_Inner = { "ChallengesRegistry", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UChallengeDto_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_ChallengesRegistry = { "ChallengesRegistry", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinigameDataGameInstance, ChallengesRegistry), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChallengesRegistry_MetaData), NewProp_ChallengesRegistry_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_Teams_Inner = { "Teams", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_Teams = { "Teams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinigameDataGameInstance, Teams), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Teams_MetaData), NewProp_Teams_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_PlayingMinions_ValueProp = { "PlayingMinions", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_PlayingMinions_Key_KeyProp = { "PlayingMinions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_PlayingMinions = { "PlayingMinions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinigameDataGameInstance, PlayingMinions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayingMinions_MetaData), NewProp_PlayingMinions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinigameDataGameInstance, Attacker), Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attacker_MetaData), NewProp_Attacker_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_Victim = { "Victim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinigameDataGameInstance, Victim), Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Victim_MetaData), NewProp_Victim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_MapMenuCamera = { "MapMenuCamera", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinigameDataGameInstance, MapMenuCamera), Z_Construct_UClass_AMapMenuCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapMenuCamera_MetaData), NewProp_MapMenuCamera_MetaData) };
void Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_Challenge_SetBit(void* Obj)
{
	((UMinigameDataGameInstance*)Obj)->Challenge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_Challenge = { "Challenge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMinigameDataGameInstance), &Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_Challenge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Challenge_MetaData), NewProp_Challenge_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_WinnerTeams_Inner = { "WinnerTeams", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_WinnerTeams = { "WinnerTeams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinigameDataGameInstance, WinnerTeams), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WinnerTeams_MetaData), NewProp_WinnerTeams_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_WinnerMinions_ValueProp = { "WinnerMinions", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_WinnerMinions_Key_KeyProp = { "WinnerMinions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_WinnerMinions = { "WinnerMinions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinigameDataGameInstance, WinnerMinions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WinnerMinions_MetaData), NewProp_WinnerMinions_MetaData) };
void Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_Draw_SetBit(void* Obj)
{
	((UMinigameDataGameInstance*)Obj)->Draw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_Draw = { "Draw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMinigameDataGameInstance), &Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_Draw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Draw_MetaData), NewProp_Draw_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_ChallengeWinner = { "ChallengeWinner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinigameDataGameInstance, ChallengeWinner), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChallengeWinner_MetaData), NewProp_ChallengeWinner_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_PlayersInBoard = { "PlayersInBoard", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinigameDataGameInstance, PlayersInBoard), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayersInBoard_MetaData), NewProp_PlayersInBoard_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_RoundsInBoard = { "RoundsInBoard", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinigameDataGameInstance, RoundsInBoard), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoundsInBoard_MetaData), NewProp_RoundsInBoard_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMinigameDataGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_Scores_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_Scores,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_TransactionsRegistry_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_TransactionsRegistry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_ChallengesRegistry_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_ChallengesRegistry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_Teams_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_Teams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_PlayingMinions_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_PlayingMinions_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_PlayingMinions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_Attacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_Victim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_MapMenuCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_Challenge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_WinnerTeams_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_WinnerTeams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_WinnerMinions_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_WinnerMinions_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_WinnerMinions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_Draw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_ChallengeWinner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_PlayersInBoard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameDataGameInstance_Statics::NewProp_RoundsInBoard,
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
		{ Z_Construct_UClass_UMinigameDataGameInstance, UMinigameDataGameInstance::StaticClass, TEXT("UMinigameDataGameInstance"), &Z_Registration_Info_UClass_UMinigameDataGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMinigameDataGameInstance), 186973693U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameDataGameInstance_h__Script_PartyJungle_779544552(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameDataGameInstance_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameDataGameInstance_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
