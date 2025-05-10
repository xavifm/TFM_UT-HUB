// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Player/Minion/Minion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinion() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AAudioManager_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ADice_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinion();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinion_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ASquare_NoRegister();
PARTYJUNGLE_API UEnum* Z_Construct_UEnum_PartyJungle_EMinionState();
PARTYJUNGLE_API UEnum* Z_Construct_UEnum_PartyJungle_ETeam();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// End Cross Module References

// Begin Enum ETeam
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETeam;
static UEnum* ETeam_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETeam.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETeam.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PartyJungle_ETeam, (UObject*)Z_Construct_UPackage__Script_PartyJungle(), TEXT("ETeam"));
	}
	return Z_Registration_Info_UEnum_ETeam.OuterSingleton;
}
template<> PARTYJUNGLE_API UEnum* StaticEnum<ETeam>()
{
	return ETeam_StaticEnum();
}
struct Z_Construct_UEnum_PartyJungle_ETeam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Player/Minion/Minion.h" },
		{ "TEAM_FOUR.DisplayName", "Team Four" },
		{ "TEAM_FOUR.Name", "ETeam::TEAM_FOUR" },
		{ "TEAM_ONE.DisplayName", "Team One" },
		{ "TEAM_ONE.Name", "ETeam::TEAM_ONE" },
		{ "TEAM_THREE.DisplayName", "Team Three" },
		{ "TEAM_THREE.Name", "ETeam::TEAM_THREE" },
		{ "TEAM_TWO.DisplayName", "Team Two" },
		{ "TEAM_TWO.Name", "ETeam::TEAM_TWO" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETeam::TEAM_ONE", (int64)ETeam::TEAM_ONE },
		{ "ETeam::TEAM_TWO", (int64)ETeam::TEAM_TWO },
		{ "ETeam::TEAM_THREE", (int64)ETeam::TEAM_THREE },
		{ "ETeam::TEAM_FOUR", (int64)ETeam::TEAM_FOUR },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PartyJungle_ETeam_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PartyJungle,
	nullptr,
	"ETeam",
	"ETeam",
	Z_Construct_UEnum_PartyJungle_ETeam_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PartyJungle_ETeam_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PartyJungle_ETeam_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PartyJungle_ETeam_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PartyJungle_ETeam()
{
	if (!Z_Registration_Info_UEnum_ETeam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETeam.InnerSingleton, Z_Construct_UEnum_PartyJungle_ETeam_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETeam.InnerSingleton;
}
// End Enum ETeam

// Begin Enum EMinionState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMinionState;
static UEnum* EMinionState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMinionState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMinionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PartyJungle_EMinionState, (UObject*)Z_Construct_UPackage__Script_PartyJungle(), TEXT("EMinionState"));
	}
	return Z_Registration_Info_UEnum_EMinionState.OuterSingleton;
}
template<> PARTYJUNGLE_API UEnum* StaticEnum<EMinionState>()
{
	return EMinionState_StaticEnum();
}
struct Z_Construct_UEnum_PartyJungle_EMinionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IDLE.DisplayName", "Idle" },
		{ "IDLE.Name", "EMinionState::IDLE" },
		{ "ModuleRelativePath", "Player/Minion/Minion.h" },
		{ "WALK.DisplayName", "Walk" },
		{ "WALK.Name", "EMinionState::WALK" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMinionState::IDLE", (int64)EMinionState::IDLE },
		{ "EMinionState::WALK", (int64)EMinionState::WALK },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PartyJungle_EMinionState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PartyJungle,
	nullptr,
	"EMinionState",
	"EMinionState",
	Z_Construct_UEnum_PartyJungle_EMinionState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PartyJungle_EMinionState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PartyJungle_EMinionState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PartyJungle_EMinionState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PartyJungle_EMinionState()
{
	if (!Z_Registration_Info_UEnum_EMinionState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMinionState.InnerSingleton, Z_Construct_UEnum_PartyJungle_EMinionState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMinionState.InnerSingleton;
}
// End Enum EMinionState

// Begin Class AMinion Function GetCoins
struct Z_Construct_UFunction_AMinion_GetCoins_Statics
{
	struct Minion_eventGetCoins_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minion Inventory" },
		{ "ModuleRelativePath", "Player/Minion/Minion.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinion_GetCoins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Minion_eventGetCoins_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinion_GetCoins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinion_GetCoins_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_GetCoins_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinion_GetCoins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinion, nullptr, "GetCoins", nullptr, nullptr, Z_Construct_UFunction_AMinion_GetCoins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_GetCoins_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinion_GetCoins_Statics::Minion_eventGetCoins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_GetCoins_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinion_GetCoins_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMinion_GetCoins_Statics::Minion_eventGetCoins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinion_GetCoins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinion_GetCoins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinion::execGetCoins)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCoins();
	P_NATIVE_END;
}
// End Class AMinion Function GetCoins

// Begin Class AMinion Function GetCrowns
struct Z_Construct_UFunction_AMinion_GetCrowns_Statics
{
	struct Minion_eventGetCrowns_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minion Inventory" },
		{ "ModuleRelativePath", "Player/Minion/Minion.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinion_GetCrowns_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Minion_eventGetCrowns_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinion_GetCrowns_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinion_GetCrowns_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_GetCrowns_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinion_GetCrowns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinion, nullptr, "GetCrowns", nullptr, nullptr, Z_Construct_UFunction_AMinion_GetCrowns_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_GetCrowns_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinion_GetCrowns_Statics::Minion_eventGetCrowns_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_GetCrowns_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinion_GetCrowns_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMinion_GetCrowns_Statics::Minion_eventGetCrowns_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinion_GetCrowns()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinion_GetCrowns_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinion::execGetCrowns)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCrowns();
	P_NATIVE_END;
}
// End Class AMinion Function GetCrowns

// Begin Class AMinion Function GetMinionsMovements
struct Z_Construct_UFunction_AMinion_GetMinionsMovements_Statics
{
	struct Minion_eventGetMinionsMovements_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minion Actions" },
		{ "ModuleRelativePath", "Player/Minion/Minion.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinion_GetMinionsMovements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Minion_eventGetMinionsMovements_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinion_GetMinionsMovements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinion_GetMinionsMovements_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_GetMinionsMovements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinion_GetMinionsMovements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinion, nullptr, "GetMinionsMovements", nullptr, nullptr, Z_Construct_UFunction_AMinion_GetMinionsMovements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_GetMinionsMovements_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinion_GetMinionsMovements_Statics::Minion_eventGetMinionsMovements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_GetMinionsMovements_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinion_GetMinionsMovements_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMinion_GetMinionsMovements_Statics::Minion_eventGetMinionsMovements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinion_GetMinionsMovements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinion_GetMinionsMovements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinion::execGetMinionsMovements)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMinionsMovements();
	P_NATIVE_END;
}
// End Class AMinion Function GetMinionsMovements

// Begin Class AMinion Function GetNextSquare
struct Z_Construct_UFunction_AMinion_GetNextSquare_Statics
{
	struct Minion_eventGetNextSquare_Parms
	{
		ASquare* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minion Actions" },
		{ "ModuleRelativePath", "Player/Minion/Minion.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinion_GetNextSquare_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Minion_eventGetNextSquare_Parms, ReturnValue), Z_Construct_UClass_ASquare_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinion_GetNextSquare_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinion_GetNextSquare_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_GetNextSquare_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinion_GetNextSquare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinion, nullptr, "GetNextSquare", nullptr, nullptr, Z_Construct_UFunction_AMinion_GetNextSquare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_GetNextSquare_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinion_GetNextSquare_Statics::Minion_eventGetNextSquare_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_GetNextSquare_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinion_GetNextSquare_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMinion_GetNextSquare_Statics::Minion_eventGetNextSquare_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinion_GetNextSquare()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinion_GetNextSquare_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinion::execGetNextSquare)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ASquare**)Z_Param__Result=P_THIS->GetNextSquare();
	P_NATIVE_END;
}
// End Class AMinion Function GetNextSquare

// Begin Class AMinion Function MoveCrownVerticalAxis
struct Minion_eventMoveCrownVerticalAxis_Parms
{
	float _position;
};
static FName NAME_AMinion_MoveCrownVerticalAxis = FName(TEXT("MoveCrownVerticalAxis"));
void AMinion::MoveCrownVerticalAxis(float _position)
{
	Minion_eventMoveCrownVerticalAxis_Parms Parms;
	Parms._position=_position;
	ProcessEvent(FindFunctionChecked(NAME_AMinion_MoveCrownVerticalAxis),&Parms);
}
struct Z_Construct_UFunction_AMinion_MoveCrownVerticalAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minion Feedback" },
		{ "ModuleRelativePath", "Player/Minion/Minion.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp__position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMinion_MoveCrownVerticalAxis_Statics::NewProp__position = { "_position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Minion_eventMoveCrownVerticalAxis_Parms, _position), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinion_MoveCrownVerticalAxis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinion_MoveCrownVerticalAxis_Statics::NewProp__position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_MoveCrownVerticalAxis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinion_MoveCrownVerticalAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinion, nullptr, "MoveCrownVerticalAxis", nullptr, nullptr, Z_Construct_UFunction_AMinion_MoveCrownVerticalAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_MoveCrownVerticalAxis_Statics::PropPointers), sizeof(Minion_eventMoveCrownVerticalAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_MoveCrownVerticalAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinion_MoveCrownVerticalAxis_Statics::Function_MetaDataParams) };
static_assert(sizeof(Minion_eventMoveCrownVerticalAxis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinion_MoveCrownVerticalAxis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinion_MoveCrownVerticalAxis_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMinion Function MoveCrownVerticalAxis

// Begin Class AMinion Function MoveToSquare
struct Z_Construct_UFunction_AMinion_MoveToSquare_Statics
{
	struct Minion_eventMoveToSquare_Parms
	{
		ASquare* TargetSquare;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minion Actions" },
		{ "ModuleRelativePath", "Player/Minion/Minion.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetSquare;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinion_MoveToSquare_Statics::NewProp_TargetSquare = { "TargetSquare", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Minion_eventMoveToSquare_Parms, TargetSquare), Z_Construct_UClass_ASquare_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinion_MoveToSquare_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinion_MoveToSquare_Statics::NewProp_TargetSquare,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_MoveToSquare_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinion_MoveToSquare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinion, nullptr, "MoveToSquare", nullptr, nullptr, Z_Construct_UFunction_AMinion_MoveToSquare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_MoveToSquare_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinion_MoveToSquare_Statics::Minion_eventMoveToSquare_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_MoveToSquare_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinion_MoveToSquare_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMinion_MoveToSquare_Statics::Minion_eventMoveToSquare_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinion_MoveToSquare()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinion_MoveToSquare_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinion::execMoveToSquare)
{
	P_GET_OBJECT(ASquare,Z_Param_TargetSquare);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveToSquare(Z_Param_TargetSquare);
	P_NATIVE_END;
}
// End Class AMinion Function MoveToSquare

// Begin Class AMinion Function SetMinionAnimation
struct Minion_eventSetMinionAnimation_Parms
{
	EMinionState _animation;
};
static FName NAME_AMinion_SetMinionAnimation = FName(TEXT("SetMinionAnimation"));
void AMinion::SetMinionAnimation(EMinionState _animation)
{
	Minion_eventSetMinionAnimation_Parms Parms;
	Parms._animation=_animation;
	ProcessEvent(FindFunctionChecked(NAME_AMinion_SetMinionAnimation),&Parms);
}
struct Z_Construct_UFunction_AMinion_SetMinionAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minion Actions" },
		{ "ModuleRelativePath", "Player/Minion/Minion.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp__animation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__animation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMinion_SetMinionAnimation_Statics::NewProp__animation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMinion_SetMinionAnimation_Statics::NewProp__animation = { "_animation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Minion_eventSetMinionAnimation_Parms, _animation), Z_Construct_UEnum_PartyJungle_EMinionState, METADATA_PARAMS(0, nullptr) }; // 4150101641
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinion_SetMinionAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinion_SetMinionAnimation_Statics::NewProp__animation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinion_SetMinionAnimation_Statics::NewProp__animation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_SetMinionAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinion_SetMinionAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinion, nullptr, "SetMinionAnimation", nullptr, nullptr, Z_Construct_UFunction_AMinion_SetMinionAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_SetMinionAnimation_Statics::PropPointers), sizeof(Minion_eventSetMinionAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_SetMinionAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinion_SetMinionAnimation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Minion_eventSetMinionAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinion_SetMinionAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinion_SetMinionAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMinion Function SetMinionAnimation

// Begin Class AMinion Function SetMinionsMovements
struct Z_Construct_UFunction_AMinion_SetMinionsMovements_Statics
{
	struct Minion_eventSetMinionsMovements_Parms
	{
		int32 _movements;
		bool _continuation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minion Actions" },
		{ "CPP_Default__continuation", "false" },
		{ "ModuleRelativePath", "Player/Minion/Minion.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__movements;
	static void NewProp__continuation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__continuation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinion_SetMinionsMovements_Statics::NewProp__movements = { "_movements", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Minion_eventSetMinionsMovements_Parms, _movements), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMinion_SetMinionsMovements_Statics::NewProp__continuation_SetBit(void* Obj)
{
	((Minion_eventSetMinionsMovements_Parms*)Obj)->_continuation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMinion_SetMinionsMovements_Statics::NewProp__continuation = { "_continuation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Minion_eventSetMinionsMovements_Parms), &Z_Construct_UFunction_AMinion_SetMinionsMovements_Statics::NewProp__continuation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinion_SetMinionsMovements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinion_SetMinionsMovements_Statics::NewProp__movements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinion_SetMinionsMovements_Statics::NewProp__continuation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_SetMinionsMovements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinion_SetMinionsMovements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinion, nullptr, "SetMinionsMovements", nullptr, nullptr, Z_Construct_UFunction_AMinion_SetMinionsMovements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_SetMinionsMovements_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinion_SetMinionsMovements_Statics::Minion_eventSetMinionsMovements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_SetMinionsMovements_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinion_SetMinionsMovements_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMinion_SetMinionsMovements_Statics::Minion_eventSetMinionsMovements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinion_SetMinionsMovements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinion_SetMinionsMovements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinion::execSetMinionsMovements)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__movements);
	P_GET_UBOOL(Z_Param__continuation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMinionsMovements(Z_Param__movements,Z_Param__continuation);
	P_NATIVE_END;
}
// End Class AMinion Function SetMinionsMovements

// Begin Class AMinion Function ShowMinionCoinsFeedback
struct Minion_eventShowMinionCoinsFeedback_Parms
{
	int32 _quantity;
};
static FName NAME_AMinion_ShowMinionCoinsFeedback = FName(TEXT("ShowMinionCoinsFeedback"));
void AMinion::ShowMinionCoinsFeedback(int32 _quantity)
{
	Minion_eventShowMinionCoinsFeedback_Parms Parms;
	Parms._quantity=_quantity;
	ProcessEvent(FindFunctionChecked(NAME_AMinion_ShowMinionCoinsFeedback),&Parms);
}
struct Z_Construct_UFunction_AMinion_ShowMinionCoinsFeedback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minion Feedback" },
		{ "ModuleRelativePath", "Player/Minion/Minion.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinion_ShowMinionCoinsFeedback_Statics::NewProp__quantity = { "_quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Minion_eventShowMinionCoinsFeedback_Parms, _quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinion_ShowMinionCoinsFeedback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinion_ShowMinionCoinsFeedback_Statics::NewProp__quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_ShowMinionCoinsFeedback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinion_ShowMinionCoinsFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinion, nullptr, "ShowMinionCoinsFeedback", nullptr, nullptr, Z_Construct_UFunction_AMinion_ShowMinionCoinsFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_ShowMinionCoinsFeedback_Statics::PropPointers), sizeof(Minion_eventShowMinionCoinsFeedback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_ShowMinionCoinsFeedback_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinion_ShowMinionCoinsFeedback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Minion_eventShowMinionCoinsFeedback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinion_ShowMinionCoinsFeedback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinion_ShowMinionCoinsFeedback_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMinion Function ShowMinionCoinsFeedback

// Begin Class AMinion Function ShowMinionCrownsFeedback
struct Minion_eventShowMinionCrownsFeedback_Parms
{
	int32 _quantity;
};
static FName NAME_AMinion_ShowMinionCrownsFeedback = FName(TEXT("ShowMinionCrownsFeedback"));
void AMinion::ShowMinionCrownsFeedback(int32 _quantity)
{
	Minion_eventShowMinionCrownsFeedback_Parms Parms;
	Parms._quantity=_quantity;
	ProcessEvent(FindFunctionChecked(NAME_AMinion_ShowMinionCrownsFeedback),&Parms);
}
struct Z_Construct_UFunction_AMinion_ShowMinionCrownsFeedback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minion Feedback" },
		{ "ModuleRelativePath", "Player/Minion/Minion.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinion_ShowMinionCrownsFeedback_Statics::NewProp__quantity = { "_quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Minion_eventShowMinionCrownsFeedback_Parms, _quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinion_ShowMinionCrownsFeedback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinion_ShowMinionCrownsFeedback_Statics::NewProp__quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_ShowMinionCrownsFeedback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinion_ShowMinionCrownsFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinion, nullptr, "ShowMinionCrownsFeedback", nullptr, nullptr, Z_Construct_UFunction_AMinion_ShowMinionCrownsFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_ShowMinionCrownsFeedback_Statics::PropPointers), sizeof(Minion_eventShowMinionCrownsFeedback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_ShowMinionCrownsFeedback_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinion_ShowMinionCrownsFeedback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Minion_eventShowMinionCrownsFeedback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinion_ShowMinionCrownsFeedback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinion_ShowMinionCrownsFeedback_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMinion Function ShowMinionCrownsFeedback

// Begin Class AMinion Function SwitchCrownVisibility
struct Minion_eventSwitchCrownVisibility_Parms
{
	bool _enabled;
};
static FName NAME_AMinion_SwitchCrownVisibility = FName(TEXT("SwitchCrownVisibility"));
void AMinion::SwitchCrownVisibility(bool _enabled)
{
	Minion_eventSwitchCrownVisibility_Parms Parms;
	Parms._enabled=_enabled ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_AMinion_SwitchCrownVisibility),&Parms);
}
struct Z_Construct_UFunction_AMinion_SwitchCrownVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minion Feedback" },
		{ "ModuleRelativePath", "Player/Minion/Minion.h" },
	};
#endif // WITH_METADATA
	static void NewProp__enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__enabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMinion_SwitchCrownVisibility_Statics::NewProp__enabled_SetBit(void* Obj)
{
	((Minion_eventSwitchCrownVisibility_Parms*)Obj)->_enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMinion_SwitchCrownVisibility_Statics::NewProp__enabled = { "_enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Minion_eventSwitchCrownVisibility_Parms), &Z_Construct_UFunction_AMinion_SwitchCrownVisibility_Statics::NewProp__enabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinion_SwitchCrownVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinion_SwitchCrownVisibility_Statics::NewProp__enabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_SwitchCrownVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinion_SwitchCrownVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinion, nullptr, "SwitchCrownVisibility", nullptr, nullptr, Z_Construct_UFunction_AMinion_SwitchCrownVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_SwitchCrownVisibility_Statics::PropPointers), sizeof(Minion_eventSwitchCrownVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_SwitchCrownVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinion_SwitchCrownVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Minion_eventSwitchCrownVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinion_SwitchCrownVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinion_SwitchCrownVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMinion Function SwitchCrownVisibility

// Begin Class AMinion Function UpdateCoins
struct Z_Construct_UFunction_AMinion_UpdateCoins_Statics
{
	struct Minion_eventUpdateCoins_Parms
	{
		int32 _quantity;
		bool _audio;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minion Actions" },
		{ "CPP_Default__audio", "true" },
		{ "ModuleRelativePath", "Player/Minion/Minion.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__quantity;
	static void NewProp__audio_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__audio;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinion_UpdateCoins_Statics::NewProp__quantity = { "_quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Minion_eventUpdateCoins_Parms, _quantity), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMinion_UpdateCoins_Statics::NewProp__audio_SetBit(void* Obj)
{
	((Minion_eventUpdateCoins_Parms*)Obj)->_audio = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMinion_UpdateCoins_Statics::NewProp__audio = { "_audio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Minion_eventUpdateCoins_Parms), &Z_Construct_UFunction_AMinion_UpdateCoins_Statics::NewProp__audio_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinion_UpdateCoins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Minion_eventUpdateCoins_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinion_UpdateCoins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinion_UpdateCoins_Statics::NewProp__quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinion_UpdateCoins_Statics::NewProp__audio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinion_UpdateCoins_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_UpdateCoins_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinion_UpdateCoins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinion, nullptr, "UpdateCoins", nullptr, nullptr, Z_Construct_UFunction_AMinion_UpdateCoins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_UpdateCoins_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinion_UpdateCoins_Statics::Minion_eventUpdateCoins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_UpdateCoins_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinion_UpdateCoins_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMinion_UpdateCoins_Statics::Minion_eventUpdateCoins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinion_UpdateCoins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinion_UpdateCoins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinion::execUpdateCoins)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__quantity);
	P_GET_UBOOL(Z_Param__audio);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->UpdateCoins(Z_Param__quantity,Z_Param__audio);
	P_NATIVE_END;
}
// End Class AMinion Function UpdateCoins

// Begin Class AMinion Function UpdateCrowns
struct Z_Construct_UFunction_AMinion_UpdateCrowns_Statics
{
	struct Minion_eventUpdateCrowns_Parms
	{
		int32 _quantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minion Actions" },
		{ "ModuleRelativePath", "Player/Minion/Minion.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinion_UpdateCrowns_Statics::NewProp__quantity = { "_quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Minion_eventUpdateCrowns_Parms, _quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinion_UpdateCrowns_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinion_UpdateCrowns_Statics::NewProp__quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_UpdateCrowns_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinion_UpdateCrowns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinion, nullptr, "UpdateCrowns", nullptr, nullptr, Z_Construct_UFunction_AMinion_UpdateCrowns_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_UpdateCrowns_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinion_UpdateCrowns_Statics::Minion_eventUpdateCrowns_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_UpdateCrowns_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinion_UpdateCrowns_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMinion_UpdateCrowns_Statics::Minion_eventUpdateCrowns_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinion_UpdateCrowns()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinion_UpdateCrowns_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinion::execUpdateCrowns)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCrowns(Z_Param__quantity);
	P_NATIVE_END;
}
// End Class AMinion Function UpdateCrowns

// Begin Class AMinion
void AMinion::StaticRegisterNativesAMinion()
{
	UClass* Class = AMinion::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCoins", &AMinion::execGetCoins },
		{ "GetCrowns", &AMinion::execGetCrowns },
		{ "GetMinionsMovements", &AMinion::execGetMinionsMovements },
		{ "GetNextSquare", &AMinion::execGetNextSquare },
		{ "MoveToSquare", &AMinion::execMoveToSquare },
		{ "SetMinionsMovements", &AMinion::execSetMinionsMovements },
		{ "UpdateCoins", &AMinion::execUpdateCoins },
		{ "UpdateCrowns", &AMinion::execUpdateCrowns },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMinion);
UClass* Z_Construct_UClass_AMinion_NoRegister()
{
	return AMinion::StaticClass();
}
struct Z_Construct_UClass_AMinion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Player/Minion/Minion.h" },
		{ "ModuleRelativePath", "Player/Minion/Minion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[] = {
		{ "Category", "Minion Properties" },
		{ "ModuleRelativePath", "Player/Minion/Minion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSquare_MetaData[] = {
		{ "Category", "Minion Properties" },
		{ "ModuleRelativePath", "Player/Minion/Minion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiceReference_MetaData[] = {
		{ "Category", "Dice References" },
		{ "ModuleRelativePath", "Player/Minion/Minion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioManager_MetaData[] = {
		{ "Category", "Dice References" },
		{ "ModuleRelativePath", "Player/Minion/Minion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalLerpTime_MetaData[] = {
		{ "Category", "Minion Properties" },
		{ "ModuleRelativePath", "Player/Minion/Minion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Movements_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Minion Properties" },
		{ "ModuleRelativePath", "Player/Minion/Minion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coins_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Minion Properties" },
		{ "ModuleRelativePath", "Player/Minion/Minion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Crowns_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Minion Properties" },
		{ "ModuleRelativePath", "Player/Minion/Minion.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentSquare;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DiceReference;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioManager;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalLerpTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Movements;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Coins;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Crowns;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMinion_GetCoins, "GetCoins" }, // 1317834461
		{ &Z_Construct_UFunction_AMinion_GetCrowns, "GetCrowns" }, // 1614513224
		{ &Z_Construct_UFunction_AMinion_GetMinionsMovements, "GetMinionsMovements" }, // 1153191699
		{ &Z_Construct_UFunction_AMinion_GetNextSquare, "GetNextSquare" }, // 1662612968
		{ &Z_Construct_UFunction_AMinion_MoveCrownVerticalAxis, "MoveCrownVerticalAxis" }, // 2619196112
		{ &Z_Construct_UFunction_AMinion_MoveToSquare, "MoveToSquare" }, // 472228771
		{ &Z_Construct_UFunction_AMinion_SetMinionAnimation, "SetMinionAnimation" }, // 1599224176
		{ &Z_Construct_UFunction_AMinion_SetMinionsMovements, "SetMinionsMovements" }, // 3651061638
		{ &Z_Construct_UFunction_AMinion_ShowMinionCoinsFeedback, "ShowMinionCoinsFeedback" }, // 3394016713
		{ &Z_Construct_UFunction_AMinion_ShowMinionCrownsFeedback, "ShowMinionCrownsFeedback" }, // 269617942
		{ &Z_Construct_UFunction_AMinion_SwitchCrownVisibility, "SwitchCrownVisibility" }, // 520029745
		{ &Z_Construct_UFunction_AMinion_UpdateCoins, "UpdateCoins" }, // 786947757
		{ &Z_Construct_UFunction_AMinion_UpdateCrowns, "UpdateCrowns" }, // 2814760434
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinion>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMinion_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMinion_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinion, Team), Z_Construct_UEnum_PartyJungle_ETeam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Team_MetaData), NewProp_Team_MetaData) }; // 4119591115
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinion_Statics::NewProp_CurrentSquare = { "CurrentSquare", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinion, CurrentSquare), Z_Construct_UClass_ASquare_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSquare_MetaData), NewProp_CurrentSquare_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinion_Statics::NewProp_DiceReference = { "DiceReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinion, DiceReference), Z_Construct_UClass_ADice_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiceReference_MetaData), NewProp_DiceReference_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinion_Statics::NewProp_AudioManager = { "AudioManager", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinion, AudioManager), Z_Construct_UClass_AAudioManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioManager_MetaData), NewProp_AudioManager_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMinion_Statics::NewProp_TotalLerpTime = { "TotalLerpTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinion, TotalLerpTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalLerpTime_MetaData), NewProp_TotalLerpTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMinion_Statics::NewProp_Movements = { "Movements", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinion, Movements), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Movements_MetaData), NewProp_Movements_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMinion_Statics::NewProp_Coins = { "Coins", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinion, Coins), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coins_MetaData), NewProp_Coins_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMinion_Statics::NewProp_Crowns = { "Crowns", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinion, Crowns), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Crowns_MetaData), NewProp_Crowns_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMinion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinion_Statics::NewProp_Team_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinion_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinion_Statics::NewProp_CurrentSquare,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinion_Statics::NewProp_DiceReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinion_Statics::NewProp_AudioManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinion_Statics::NewProp_TotalLerpTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinion_Statics::NewProp_Movements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinion_Statics::NewProp_Coins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinion_Statics::NewProp_Crowns,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinion_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMinion_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinion_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMinion_Statics::ClassParams = {
	&AMinion::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMinion_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMinion_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinion_Statics::Class_MetaDataParams), Z_Construct_UClass_AMinion_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMinion()
{
	if (!Z_Registration_Info_UClass_AMinion.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMinion.OuterSingleton, Z_Construct_UClass_AMinion_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMinion.OuterSingleton;
}
template<> PARTYJUNGLE_API UClass* StaticClass<AMinion>()
{
	return AMinion::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMinion);
AMinion::~AMinion() {}
// End Class AMinion

// Begin Registration
struct Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_Minion_Minion_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETeam_StaticEnum, TEXT("ETeam"), &Z_Registration_Info_UEnum_ETeam, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4119591115U) },
		{ EMinionState_StaticEnum, TEXT("EMinionState"), &Z_Registration_Info_UEnum_EMinionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4150101641U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMinion, AMinion::StaticClass, TEXT("AMinion"), &Z_Registration_Info_UClass_AMinion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMinion), 1097926224U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_Minion_Minion_h_2786039440(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_Minion_Minion_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_Minion_Minion_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_Minion_Minion_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_Minion_Minion_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
