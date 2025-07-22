// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Challenge/ChallengeInformation.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeChallengeInformation() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AChallengeDatabase_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AChallengeInformation();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AChallengeInformation_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinion_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ASquare_NoRegister();
PARTYJUNGLE_API UEnum* Z_Construct_UEnum_PartyJungle_EDuelType();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EDuelType *****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDuelType;
static UEnum* EDuelType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDuelType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDuelType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PartyJungle_EDuelType, (UObject*)Z_Construct_UPackage__Script_PartyJungle(), TEXT("EDuelType"));
	}
	return Z_Registration_Info_UEnum_EDuelType.OuterSingleton;
}
template<> PARTYJUNGLE_API UEnum* StaticEnum<EDuelType>()
{
	return EDuelType_StaticEnum();
}
struct Z_Construct_UEnum_PartyJungle_EDuelType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ALL_IN_COINS.DisplayName", "All In Coins" },
		{ "ALL_IN_COINS.Name", "EDuelType::ALL_IN_COINS" },
		{ "ALL_IN_VS_ST.DisplayName", "All In Vs St" },
		{ "ALL_IN_VS_ST.Name", "EDuelType::ALL_IN_VS_ST" },
		{ "BlueprintType", "true" },
		{ "HALF_COINS.DisplayName", "Half Coins" },
		{ "HALF_COINS.Name", "EDuelType::HALF_COINS" },
		{ "ModuleRelativePath", "Challenge/ChallengeInformation.h" },
		{ "RESIGN.DisplayName", "Escape Vote" },
		{ "RESIGN.Name", "EDuelType::RESIGN" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDuelType::HALF_COINS", (int64)EDuelType::HALF_COINS },
		{ "EDuelType::ALL_IN_COINS", (int64)EDuelType::ALL_IN_COINS },
		{ "EDuelType::ALL_IN_VS_ST", (int64)EDuelType::ALL_IN_VS_ST },
		{ "EDuelType::RESIGN", (int64)EDuelType::RESIGN },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PartyJungle_EDuelType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PartyJungle,
	nullptr,
	"EDuelType",
	"EDuelType",
	Z_Construct_UEnum_PartyJungle_EDuelType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PartyJungle_EDuelType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PartyJungle_EDuelType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PartyJungle_EDuelType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PartyJungle_EDuelType()
{
	if (!Z_Registration_Info_UEnum_EDuelType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDuelType.InnerSingleton, Z_Construct_UEnum_PartyJungle_EDuelType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDuelType.InnerSingleton;
}
// ********** End Enum EDuelType *******************************************************************

// ********** Begin Class AChallengeInformation Function CheckIfThereAreCrownsInDuel ***************
struct Z_Construct_UFunction_AChallengeInformation_CheckIfThereAreCrownsInDuel_Statics
{
	struct ChallengeInformation_eventCheckIfThereAreCrownsInDuel_Parms
	{
		int32 _duelSquareIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Challenge/ChallengeInformation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__duelSquareIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChallengeInformation_CheckIfThereAreCrownsInDuel_Statics::NewProp__duelSquareIndex = { "_duelSquareIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChallengeInformation_eventCheckIfThereAreCrownsInDuel_Parms, _duelSquareIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AChallengeInformation_CheckIfThereAreCrownsInDuel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ChallengeInformation_eventCheckIfThereAreCrownsInDuel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AChallengeInformation_CheckIfThereAreCrownsInDuel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChallengeInformation_eventCheckIfThereAreCrownsInDuel_Parms), &Z_Construct_UFunction_AChallengeInformation_CheckIfThereAreCrownsInDuel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChallengeInformation_CheckIfThereAreCrownsInDuel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeInformation_CheckIfThereAreCrownsInDuel_Statics::NewProp__duelSquareIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeInformation_CheckIfThereAreCrownsInDuel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_CheckIfThereAreCrownsInDuel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChallengeInformation_CheckIfThereAreCrownsInDuel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AChallengeInformation, nullptr, "CheckIfThereAreCrownsInDuel", Z_Construct_UFunction_AChallengeInformation_CheckIfThereAreCrownsInDuel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_CheckIfThereAreCrownsInDuel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChallengeInformation_CheckIfThereAreCrownsInDuel_Statics::ChallengeInformation_eventCheckIfThereAreCrownsInDuel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_CheckIfThereAreCrownsInDuel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChallengeInformation_CheckIfThereAreCrownsInDuel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AChallengeInformation_CheckIfThereAreCrownsInDuel_Statics::ChallengeInformation_eventCheckIfThereAreCrownsInDuel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChallengeInformation_CheckIfThereAreCrownsInDuel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChallengeInformation_CheckIfThereAreCrownsInDuel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChallengeInformation::execCheckIfThereAreCrownsInDuel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__duelSquareIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckIfThereAreCrownsInDuel(Z_Param__duelSquareIndex);
	P_NATIVE_END;
}
// ********** End Class AChallengeInformation Function CheckIfThereAreCrownsInDuel *****************

// ********** Begin Class AChallengeInformation Function GetBetCoinsQuantity ***********************
struct Z_Construct_UFunction_AChallengeInformation_GetBetCoinsQuantity_Statics
{
	struct ChallengeInformation_eventGetBetCoinsQuantity_Parms
	{
		int32 _team;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Challenge/ChallengeInformation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__team;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChallengeInformation_GetBetCoinsQuantity_Statics::NewProp__team = { "_team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChallengeInformation_eventGetBetCoinsQuantity_Parms, _team), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChallengeInformation_GetBetCoinsQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChallengeInformation_eventGetBetCoinsQuantity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChallengeInformation_GetBetCoinsQuantity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeInformation_GetBetCoinsQuantity_Statics::NewProp__team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeInformation_GetBetCoinsQuantity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_GetBetCoinsQuantity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChallengeInformation_GetBetCoinsQuantity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AChallengeInformation, nullptr, "GetBetCoinsQuantity", Z_Construct_UFunction_AChallengeInformation_GetBetCoinsQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_GetBetCoinsQuantity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChallengeInformation_GetBetCoinsQuantity_Statics::ChallengeInformation_eventGetBetCoinsQuantity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_GetBetCoinsQuantity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChallengeInformation_GetBetCoinsQuantity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AChallengeInformation_GetBetCoinsQuantity_Statics::ChallengeInformation_eventGetBetCoinsQuantity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChallengeInformation_GetBetCoinsQuantity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChallengeInformation_GetBetCoinsQuantity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChallengeInformation::execGetBetCoinsQuantity)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__team);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetBetCoinsQuantity(Z_Param__team);
	P_NATIVE_END;
}
// ********** End Class AChallengeInformation Function GetBetCoinsQuantity *************************

// ********** Begin Class AChallengeInformation Function GetBetCrownsQuantity **********************
struct Z_Construct_UFunction_AChallengeInformation_GetBetCrownsQuantity_Statics
{
	struct ChallengeInformation_eventGetBetCrownsQuantity_Parms
	{
		int32 _team;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Challenge/ChallengeInformation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__team;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChallengeInformation_GetBetCrownsQuantity_Statics::NewProp__team = { "_team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChallengeInformation_eventGetBetCrownsQuantity_Parms, _team), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChallengeInformation_GetBetCrownsQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChallengeInformation_eventGetBetCrownsQuantity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChallengeInformation_GetBetCrownsQuantity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeInformation_GetBetCrownsQuantity_Statics::NewProp__team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeInformation_GetBetCrownsQuantity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_GetBetCrownsQuantity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChallengeInformation_GetBetCrownsQuantity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AChallengeInformation, nullptr, "GetBetCrownsQuantity", Z_Construct_UFunction_AChallengeInformation_GetBetCrownsQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_GetBetCrownsQuantity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChallengeInformation_GetBetCrownsQuantity_Statics::ChallengeInformation_eventGetBetCrownsQuantity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_GetBetCrownsQuantity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChallengeInformation_GetBetCrownsQuantity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AChallengeInformation_GetBetCrownsQuantity_Statics::ChallengeInformation_eventGetBetCrownsQuantity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChallengeInformation_GetBetCrownsQuantity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChallengeInformation_GetBetCrownsQuantity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChallengeInformation::execGetBetCrownsQuantity)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__team);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetBetCrownsQuantity(Z_Param__team);
	P_NATIVE_END;
}
// ********** End Class AChallengeInformation Function GetBetCrownsQuantity ************************

// ********** Begin Class AChallengeInformation Function GetDuelType *******************************
struct Z_Construct_UFunction_AChallengeInformation_GetDuelType_Statics
{
	struct ChallengeInformation_eventGetDuelType_Parms
	{
		EDuelType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Challenge/ChallengeInformation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AChallengeInformation_GetDuelType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AChallengeInformation_GetDuelType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChallengeInformation_eventGetDuelType_Parms, ReturnValue), Z_Construct_UEnum_PartyJungle_EDuelType, METADATA_PARAMS(0, nullptr) }; // 2964326876
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChallengeInformation_GetDuelType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeInformation_GetDuelType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeInformation_GetDuelType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_GetDuelType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChallengeInformation_GetDuelType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AChallengeInformation, nullptr, "GetDuelType", Z_Construct_UFunction_AChallengeInformation_GetDuelType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_GetDuelType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChallengeInformation_GetDuelType_Statics::ChallengeInformation_eventGetDuelType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_GetDuelType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChallengeInformation_GetDuelType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AChallengeInformation_GetDuelType_Statics::ChallengeInformation_eventGetDuelType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChallengeInformation_GetDuelType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChallengeInformation_GetDuelType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChallengeInformation::execGetDuelType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDuelType*)Z_Param__Result=P_THIS->GetDuelType();
	P_NATIVE_END;
}
// ********** End Class AChallengeInformation Function GetDuelType *********************************

// ********** Begin Class AChallengeInformation Function GetPotQuantity ****************************
struct Z_Construct_UFunction_AChallengeInformation_GetPotQuantity_Statics
{
	struct ChallengeInformation_eventGetPotQuantity_Parms
	{
		bool _fullPot;
		int32 _duelSquareIndex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Challenge/ChallengeInformation.h" },
	};
#endif // WITH_METADATA
	static void NewProp__fullPot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__fullPot;
	static const UECodeGen_Private::FIntPropertyParams NewProp__duelSquareIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AChallengeInformation_GetPotQuantity_Statics::NewProp__fullPot_SetBit(void* Obj)
{
	((ChallengeInformation_eventGetPotQuantity_Parms*)Obj)->_fullPot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AChallengeInformation_GetPotQuantity_Statics::NewProp__fullPot = { "_fullPot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChallengeInformation_eventGetPotQuantity_Parms), &Z_Construct_UFunction_AChallengeInformation_GetPotQuantity_Statics::NewProp__fullPot_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChallengeInformation_GetPotQuantity_Statics::NewProp__duelSquareIndex = { "_duelSquareIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChallengeInformation_eventGetPotQuantity_Parms, _duelSquareIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChallengeInformation_GetPotQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChallengeInformation_eventGetPotQuantity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChallengeInformation_GetPotQuantity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeInformation_GetPotQuantity_Statics::NewProp__fullPot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeInformation_GetPotQuantity_Statics::NewProp__duelSquareIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeInformation_GetPotQuantity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_GetPotQuantity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChallengeInformation_GetPotQuantity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AChallengeInformation, nullptr, "GetPotQuantity", Z_Construct_UFunction_AChallengeInformation_GetPotQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_GetPotQuantity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChallengeInformation_GetPotQuantity_Statics::ChallengeInformation_eventGetPotQuantity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_GetPotQuantity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChallengeInformation_GetPotQuantity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AChallengeInformation_GetPotQuantity_Statics::ChallengeInformation_eventGetPotQuantity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChallengeInformation_GetPotQuantity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChallengeInformation_GetPotQuantity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChallengeInformation::execGetPotQuantity)
{
	P_GET_UBOOL(Z_Param__fullPot);
	P_GET_PROPERTY(FIntProperty,Z_Param__duelSquareIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPotQuantity(Z_Param__fullPot,Z_Param__duelSquareIndex);
	P_NATIVE_END;
}
// ********** End Class AChallengeInformation Function GetPotQuantity ******************************

// ********** Begin Class AChallengeInformation Function SafeDuelChoice ****************************
struct Z_Construct_UFunction_AChallengeInformation_SafeDuelChoice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Challenge/ChallengeInformation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChallengeInformation_SafeDuelChoice_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AChallengeInformation, nullptr, "SafeDuelChoice", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_SafeDuelChoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChallengeInformation_SafeDuelChoice_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AChallengeInformation_SafeDuelChoice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChallengeInformation_SafeDuelChoice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChallengeInformation::execSafeDuelChoice)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SafeDuelChoice();
	P_NATIVE_END;
}
// ********** End Class AChallengeInformation Function SafeDuelChoice ******************************

// ********** Begin Class AChallengeInformation Function SaveDuelToRegistry ************************
struct Z_Construct_UFunction_AChallengeInformation_SaveDuelToRegistry_Statics
{
	struct ChallengeInformation_eventSaveDuelToRegistry_Parms
	{
		int32 _winner;
		int32 _coins;
		int32 _crowns;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Challenge/ChallengeInformation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__winner;
	static const UECodeGen_Private::FIntPropertyParams NewProp__coins;
	static const UECodeGen_Private::FIntPropertyParams NewProp__crowns;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChallengeInformation_SaveDuelToRegistry_Statics::NewProp__winner = { "_winner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChallengeInformation_eventSaveDuelToRegistry_Parms, _winner), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChallengeInformation_SaveDuelToRegistry_Statics::NewProp__coins = { "_coins", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChallengeInformation_eventSaveDuelToRegistry_Parms, _coins), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChallengeInformation_SaveDuelToRegistry_Statics::NewProp__crowns = { "_crowns", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChallengeInformation_eventSaveDuelToRegistry_Parms, _crowns), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChallengeInformation_SaveDuelToRegistry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeInformation_SaveDuelToRegistry_Statics::NewProp__winner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeInformation_SaveDuelToRegistry_Statics::NewProp__coins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeInformation_SaveDuelToRegistry_Statics::NewProp__crowns,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_SaveDuelToRegistry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChallengeInformation_SaveDuelToRegistry_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AChallengeInformation, nullptr, "SaveDuelToRegistry", Z_Construct_UFunction_AChallengeInformation_SaveDuelToRegistry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_SaveDuelToRegistry_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChallengeInformation_SaveDuelToRegistry_Statics::ChallengeInformation_eventSaveDuelToRegistry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_SaveDuelToRegistry_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChallengeInformation_SaveDuelToRegistry_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AChallengeInformation_SaveDuelToRegistry_Statics::ChallengeInformation_eventSaveDuelToRegistry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChallengeInformation_SaveDuelToRegistry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChallengeInformation_SaveDuelToRegistry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChallengeInformation::execSaveDuelToRegistry)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__winner);
	P_GET_PROPERTY(FIntProperty,Z_Param__coins);
	P_GET_PROPERTY(FIntProperty,Z_Param__crowns);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveDuelToRegistry(Z_Param__winner,Z_Param__coins,Z_Param__crowns);
	P_NATIVE_END;
}
// ********** End Class AChallengeInformation Function SaveDuelToRegistry **************************

// ********** Begin Class AChallengeInformation Function SetUpDuelInfo *****************************
struct Z_Construct_UFunction_AChallengeInformation_SetUpDuelInfo_Statics
{
	struct ChallengeInformation_eventSetUpDuelInfo_Parms
	{
		TArray<AMinion*> _minions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Challenge/ChallengeInformation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__minions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__minions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChallengeInformation_SetUpDuelInfo_Statics::NewProp__minions_Inner = { "_minions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AChallengeInformation_SetUpDuelInfo_Statics::NewProp__minions = { "_minions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChallengeInformation_eventSetUpDuelInfo_Parms, _minions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChallengeInformation_SetUpDuelInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeInformation_SetUpDuelInfo_Statics::NewProp__minions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeInformation_SetUpDuelInfo_Statics::NewProp__minions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_SetUpDuelInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChallengeInformation_SetUpDuelInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AChallengeInformation, nullptr, "SetUpDuelInfo", Z_Construct_UFunction_AChallengeInformation_SetUpDuelInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_SetUpDuelInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChallengeInformation_SetUpDuelInfo_Statics::ChallengeInformation_eventSetUpDuelInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_SetUpDuelInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChallengeInformation_SetUpDuelInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AChallengeInformation_SetUpDuelInfo_Statics::ChallengeInformation_eventSetUpDuelInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChallengeInformation_SetUpDuelInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChallengeInformation_SetUpDuelInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChallengeInformation::execSetUpDuelInfo)
{
	P_GET_TARRAY(AMinion*,Z_Param__minions);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUpDuelInfo(Z_Param__minions);
	P_NATIVE_END;
}
// ********** End Class AChallengeInformation Function SetUpDuelInfo *******************************

// ********** Begin Class AChallengeInformation Function SwitchDuelType ****************************
struct Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics
{
	struct ChallengeInformation_eventSwitchDuelType_Parms
	{
		int32 _direction;
		int32 _team;
		EDuelType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Challenge/ChallengeInformation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__direction;
	static const UECodeGen_Private::FIntPropertyParams NewProp__team;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics::NewProp__direction = { "_direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChallengeInformation_eventSwitchDuelType_Parms, _direction), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics::NewProp__team = { "_team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChallengeInformation_eventSwitchDuelType_Parms, _team), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChallengeInformation_eventSwitchDuelType_Parms, ReturnValue), Z_Construct_UEnum_PartyJungle_EDuelType, METADATA_PARAMS(0, nullptr) }; // 2964326876
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics::NewProp__direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics::NewProp__team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AChallengeInformation, nullptr, "SwitchDuelType", Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics::ChallengeInformation_eventSwitchDuelType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics::ChallengeInformation_eventSwitchDuelType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChallengeInformation_SwitchDuelType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChallengeInformation::execSwitchDuelType)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__direction);
	P_GET_PROPERTY(FIntProperty,Z_Param__team);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDuelType*)Z_Param__Result=P_THIS->SwitchDuelType(Z_Param__direction,Z_Param__team);
	P_NATIVE_END;
}
// ********** End Class AChallengeInformation Function SwitchDuelType ******************************

// ********** Begin Class AChallengeInformation ****************************************************
void AChallengeInformation::StaticRegisterNativesAChallengeInformation()
{
	UClass* Class = AChallengeInformation::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckIfThereAreCrownsInDuel", &AChallengeInformation::execCheckIfThereAreCrownsInDuel },
		{ "GetBetCoinsQuantity", &AChallengeInformation::execGetBetCoinsQuantity },
		{ "GetBetCrownsQuantity", &AChallengeInformation::execGetBetCrownsQuantity },
		{ "GetDuelType", &AChallengeInformation::execGetDuelType },
		{ "GetPotQuantity", &AChallengeInformation::execGetPotQuantity },
		{ "SafeDuelChoice", &AChallengeInformation::execSafeDuelChoice },
		{ "SaveDuelToRegistry", &AChallengeInformation::execSaveDuelToRegistry },
		{ "SetUpDuelInfo", &AChallengeInformation::execSetUpDuelInfo },
		{ "SwitchDuelType", &AChallengeInformation::execSwitchDuelType },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AChallengeInformation;
UClass* AChallengeInformation::GetPrivateStaticClass()
{
	using TClass = AChallengeInformation;
	if (!Z_Registration_Info_UClass_AChallengeInformation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ChallengeInformation"),
			Z_Registration_Info_UClass_AChallengeInformation.InnerSingleton,
			StaticRegisterNativesAChallengeInformation,
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
	return Z_Registration_Info_UClass_AChallengeInformation.InnerSingleton;
}
UClass* Z_Construct_UClass_AChallengeInformation_NoRegister()
{
	return AChallengeInformation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AChallengeInformation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Challenge/ChallengeInformation.h" },
		{ "ModuleRelativePath", "Challenge/ChallengeInformation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChallengeRegistry_MetaData[] = {
		{ "Category", "Registry" },
		{ "ModuleRelativePath", "Challenge/ChallengeInformation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Minions_MetaData[] = {
		{ "ModuleRelativePath", "Challenge/ChallengeInformation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedDuelTypes_MetaData[] = {
		{ "ModuleRelativePath", "Challenge/ChallengeInformation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SquaresWithDuelsInRound_MetaData[] = {
		{ "Category", "Active Duels" },
		{ "ModuleRelativePath", "Challenge/ChallengeInformation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChallengeRegistry;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Minions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Minions;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SavedDuelTypes_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SavedDuelTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedDuelTypes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SquaresWithDuelsInRound_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SquaresWithDuelsInRound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AChallengeInformation_CheckIfThereAreCrownsInDuel, "CheckIfThereAreCrownsInDuel" }, // 3257653377
		{ &Z_Construct_UFunction_AChallengeInformation_GetBetCoinsQuantity, "GetBetCoinsQuantity" }, // 2268137023
		{ &Z_Construct_UFunction_AChallengeInformation_GetBetCrownsQuantity, "GetBetCrownsQuantity" }, // 3719915498
		{ &Z_Construct_UFunction_AChallengeInformation_GetDuelType, "GetDuelType" }, // 2425875142
		{ &Z_Construct_UFunction_AChallengeInformation_GetPotQuantity, "GetPotQuantity" }, // 3689387680
		{ &Z_Construct_UFunction_AChallengeInformation_SafeDuelChoice, "SafeDuelChoice" }, // 969713328
		{ &Z_Construct_UFunction_AChallengeInformation_SaveDuelToRegistry, "SaveDuelToRegistry" }, // 1279411535
		{ &Z_Construct_UFunction_AChallengeInformation_SetUpDuelInfo, "SetUpDuelInfo" }, // 929728015
		{ &Z_Construct_UFunction_AChallengeInformation_SwitchDuelType, "SwitchDuelType" }, // 3675104352
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChallengeInformation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChallengeInformation_Statics::NewProp_ChallengeRegistry = { "ChallengeRegistry", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChallengeInformation, ChallengeRegistry), Z_Construct_UClass_AChallengeDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChallengeRegistry_MetaData), NewProp_ChallengeRegistry_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChallengeInformation_Statics::NewProp_Minions_Inner = { "Minions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AChallengeInformation_Statics::NewProp_Minions = { "Minions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChallengeInformation, Minions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Minions_MetaData), NewProp_Minions_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AChallengeInformation_Statics::NewProp_SavedDuelTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AChallengeInformation_Statics::NewProp_SavedDuelTypes_Inner = { "SavedDuelTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PartyJungle_EDuelType, METADATA_PARAMS(0, nullptr) }; // 2964326876
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AChallengeInformation_Statics::NewProp_SavedDuelTypes = { "SavedDuelTypes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChallengeInformation, SavedDuelTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedDuelTypes_MetaData), NewProp_SavedDuelTypes_MetaData) }; // 2964326876
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChallengeInformation_Statics::NewProp_SquaresWithDuelsInRound_Inner = { "SquaresWithDuelsInRound", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASquare_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AChallengeInformation_Statics::NewProp_SquaresWithDuelsInRound = { "SquaresWithDuelsInRound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChallengeInformation, SquaresWithDuelsInRound), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SquaresWithDuelsInRound_MetaData), NewProp_SquaresWithDuelsInRound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChallengeInformation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChallengeInformation_Statics::NewProp_ChallengeRegistry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChallengeInformation_Statics::NewProp_Minions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChallengeInformation_Statics::NewProp_Minions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChallengeInformation_Statics::NewProp_SavedDuelTypes_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChallengeInformation_Statics::NewProp_SavedDuelTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChallengeInformation_Statics::NewProp_SavedDuelTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChallengeInformation_Statics::NewProp_SquaresWithDuelsInRound_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChallengeInformation_Statics::NewProp_SquaresWithDuelsInRound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChallengeInformation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AChallengeInformation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChallengeInformation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AChallengeInformation_Statics::ClassParams = {
	&AChallengeInformation::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AChallengeInformation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AChallengeInformation_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChallengeInformation_Statics::Class_MetaDataParams), Z_Construct_UClass_AChallengeInformation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AChallengeInformation()
{
	if (!Z_Registration_Info_UClass_AChallengeInformation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChallengeInformation.OuterSingleton, Z_Construct_UClass_AChallengeInformation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AChallengeInformation.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AChallengeInformation);
AChallengeInformation::~AChallengeInformation() {}
// ********** End Class AChallengeInformation ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeInformation_h__Script_PartyJungle_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDuelType_StaticEnum, TEXT("EDuelType"), &Z_Registration_Info_UEnum_EDuelType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2964326876U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AChallengeInformation, AChallengeInformation::StaticClass, TEXT("AChallengeInformation"), &Z_Registration_Info_UClass_AChallengeInformation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChallengeInformation), 3855204136U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeInformation_h__Script_PartyJungle_2088177791(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeInformation_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeInformation_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeInformation_h__Script_PartyJungle_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeInformation_h__Script_PartyJungle_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
