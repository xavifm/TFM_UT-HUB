// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Managers/DuelManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDuelManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AChallengeDatabase_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ADuelManager();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ADuelManager_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinion_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ASquare_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UChallengeDto_NoRegister();
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enum with all the Duel Types.\n */" },
#endif
		{ "HALF_COINS.DisplayName", "Half Coins" },
		{ "HALF_COINS.Name", "EDuelType::HALF_COINS" },
		{ "ModuleRelativePath", "Managers/DuelManager.h" },
		{ "RESIGN.DisplayName", "Escape Vote" },
		{ "RESIGN.Name", "EDuelType::RESIGN" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum with all the Duel Types." },
#endif
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

// ********** Begin Class ADuelManager Function GetBetCoinsQuantity ********************************
struct Z_Construct_UFunction_ADuelManager_GetBetCoinsQuantity_Statics
{
	struct DuelManager_eventGetBetCoinsQuantity_Parms
	{
		int32 a_Team;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the coins bet for the selected Team Id.\n\x09 * @param a_Team Id of the selected Team.\n\x09 * @return Coins bet for the selected Team Id.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Managers/DuelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the coins bet for the selected Team Id.\n@param a_Team Id of the selected Team.\n@return Coins bet for the selected Team Id." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_Team;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADuelManager_GetBetCoinsQuantity_Statics::NewProp_a_Team = { "a_Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DuelManager_eventGetBetCoinsQuantity_Parms, a_Team), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADuelManager_GetBetCoinsQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DuelManager_eventGetBetCoinsQuantity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADuelManager_GetBetCoinsQuantity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelManager_GetBetCoinsQuantity_Statics::NewProp_a_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelManager_GetBetCoinsQuantity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_GetBetCoinsQuantity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADuelManager_GetBetCoinsQuantity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADuelManager, nullptr, "GetBetCoinsQuantity", Z_Construct_UFunction_ADuelManager_GetBetCoinsQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_GetBetCoinsQuantity_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADuelManager_GetBetCoinsQuantity_Statics::DuelManager_eventGetBetCoinsQuantity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_GetBetCoinsQuantity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADuelManager_GetBetCoinsQuantity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADuelManager_GetBetCoinsQuantity_Statics::DuelManager_eventGetBetCoinsQuantity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADuelManager_GetBetCoinsQuantity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADuelManager_GetBetCoinsQuantity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADuelManager::execGetBetCoinsQuantity)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_a_Team);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetBetCoinsQuantity(Z_Param_a_Team);
	P_NATIVE_END;
}
// ********** End Class ADuelManager Function GetBetCoinsQuantity **********************************

// ********** Begin Class ADuelManager Function GetBetCrownsQuantity *******************************
struct Z_Construct_UFunction_ADuelManager_GetBetCrownsQuantity_Statics
{
	struct DuelManager_eventGetBetCrownsQuantity_Parms
	{
		int32 a_Team;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the Crowns bet for the selected Team.\n\x09 * @param a_Team Id of the selected Team.\n\x09 * @return Crowns bet for the selected Team.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Managers/DuelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Crowns bet for the selected Team.\n@param a_Team Id of the selected Team.\n@return Crowns bet for the selected Team." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_Team;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADuelManager_GetBetCrownsQuantity_Statics::NewProp_a_Team = { "a_Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DuelManager_eventGetBetCrownsQuantity_Parms, a_Team), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADuelManager_GetBetCrownsQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DuelManager_eventGetBetCrownsQuantity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADuelManager_GetBetCrownsQuantity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelManager_GetBetCrownsQuantity_Statics::NewProp_a_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelManager_GetBetCrownsQuantity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_GetBetCrownsQuantity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADuelManager_GetBetCrownsQuantity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADuelManager, nullptr, "GetBetCrownsQuantity", Z_Construct_UFunction_ADuelManager_GetBetCrownsQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_GetBetCrownsQuantity_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADuelManager_GetBetCrownsQuantity_Statics::DuelManager_eventGetBetCrownsQuantity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_GetBetCrownsQuantity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADuelManager_GetBetCrownsQuantity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADuelManager_GetBetCrownsQuantity_Statics::DuelManager_eventGetBetCrownsQuantity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADuelManager_GetBetCrownsQuantity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADuelManager_GetBetCrownsQuantity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADuelManager::execGetBetCrownsQuantity)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_a_Team);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetBetCrownsQuantity(Z_Param_a_Team);
	P_NATIVE_END;
}
// ********** End Class ADuelManager Function GetBetCrownsQuantity *********************************

// ********** Begin Class ADuelManager Function GetDuelSquareIndex *********************************
struct Z_Construct_UFunction_ADuelManager_GetDuelSquareIndex_Statics
{
	struct DuelManager_eventGetDuelSquareIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Challenge" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the current Duel Index.\n\x09 * @return Current Duel Index.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Managers/DuelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current Duel Index.\n@return Current Duel Index." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADuelManager_GetDuelSquareIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DuelManager_eventGetDuelSquareIndex_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADuelManager_GetDuelSquareIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelManager_GetDuelSquareIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_GetDuelSquareIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADuelManager_GetDuelSquareIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADuelManager, nullptr, "GetDuelSquareIndex", Z_Construct_UFunction_ADuelManager_GetDuelSquareIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_GetDuelSquareIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADuelManager_GetDuelSquareIndex_Statics::DuelManager_eventGetDuelSquareIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_GetDuelSquareIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADuelManager_GetDuelSquareIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADuelManager_GetDuelSquareIndex_Statics::DuelManager_eventGetDuelSquareIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADuelManager_GetDuelSquareIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADuelManager_GetDuelSquareIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADuelManager::execGetDuelSquareIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetDuelSquareIndex();
	P_NATIVE_END;
}
// ********** End Class ADuelManager Function GetDuelSquareIndex ***********************************

// ********** Begin Class ADuelManager Function GetDuelType ****************************************
struct Z_Construct_UFunction_ADuelManager_GetDuelType_Statics
{
	struct DuelManager_eventGetDuelType_Parms
	{
		EDuelType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the current Duel Type.\n\x09 * @return Current Duel Type.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Managers/DuelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current Duel Type.\n@return Current Duel Type." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADuelManager_GetDuelType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADuelManager_GetDuelType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DuelManager_eventGetDuelType_Parms, ReturnValue), Z_Construct_UEnum_PartyJungle_EDuelType, METADATA_PARAMS(0, nullptr) }; // 839709619
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADuelManager_GetDuelType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelManager_GetDuelType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelManager_GetDuelType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_GetDuelType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADuelManager_GetDuelType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADuelManager, nullptr, "GetDuelType", Z_Construct_UFunction_ADuelManager_GetDuelType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_GetDuelType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADuelManager_GetDuelType_Statics::DuelManager_eventGetDuelType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_GetDuelType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADuelManager_GetDuelType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADuelManager_GetDuelType_Statics::DuelManager_eventGetDuelType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADuelManager_GetDuelType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADuelManager_GetDuelType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADuelManager::execGetDuelType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDuelType*)Z_Param__Result=P_THIS->GetDuelType();
	P_NATIVE_END;
}
// ********** End Class ADuelManager Function GetDuelType ******************************************

// ********** Begin Class ADuelManager Function GetPotQuantity *************************************
struct Z_Construct_UFunction_ADuelManager_GetPotQuantity_Statics
{
	struct DuelManager_eventGetPotQuantity_Parms
	{
		bool a_FullPot;
		int32 a_DuelSquareIndex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the Pot Quantity.\n\x09 * @param a_FullPot If the Pot is Full.\n\x09 * @param a_DuelSquareIndex Id of the Duel.\n\x09 * @return Pot Quantity.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Managers/DuelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Pot Quantity.\n@param a_FullPot If the Pot is Full.\n@param a_DuelSquareIndex Id of the Duel.\n@return Pot Quantity." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_a_FullPot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_a_FullPot;
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_DuelSquareIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ADuelManager_GetPotQuantity_Statics::NewProp_a_FullPot_SetBit(void* Obj)
{
	((DuelManager_eventGetPotQuantity_Parms*)Obj)->a_FullPot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADuelManager_GetPotQuantity_Statics::NewProp_a_FullPot = { "a_FullPot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DuelManager_eventGetPotQuantity_Parms), &Z_Construct_UFunction_ADuelManager_GetPotQuantity_Statics::NewProp_a_FullPot_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADuelManager_GetPotQuantity_Statics::NewProp_a_DuelSquareIndex = { "a_DuelSquareIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DuelManager_eventGetPotQuantity_Parms, a_DuelSquareIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADuelManager_GetPotQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DuelManager_eventGetPotQuantity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADuelManager_GetPotQuantity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelManager_GetPotQuantity_Statics::NewProp_a_FullPot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelManager_GetPotQuantity_Statics::NewProp_a_DuelSquareIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelManager_GetPotQuantity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_GetPotQuantity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADuelManager_GetPotQuantity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADuelManager, nullptr, "GetPotQuantity", Z_Construct_UFunction_ADuelManager_GetPotQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_GetPotQuantity_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADuelManager_GetPotQuantity_Statics::DuelManager_eventGetPotQuantity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_GetPotQuantity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADuelManager_GetPotQuantity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADuelManager_GetPotQuantity_Statics::DuelManager_eventGetPotQuantity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADuelManager_GetPotQuantity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADuelManager_GetPotQuantity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADuelManager::execGetPotQuantity)
{
	P_GET_UBOOL(Z_Param_a_FullPot);
	P_GET_PROPERTY(FIntProperty,Z_Param_a_DuelSquareIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPotQuantity(Z_Param_a_FullPot,Z_Param_a_DuelSquareIndex);
	P_NATIVE_END;
}
// ********** End Class ADuelManager Function GetPotQuantity ***************************************

// ********** Begin Class ADuelManager Function GetRouletteResult **********************************
struct Z_Construct_UFunction_ADuelManager_GetRouletteResult_Statics
{
	struct DuelManager_eventGetRouletteResult_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Challenge" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the Roulette result.\n\x09 * @return Roulette result.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Managers/DuelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Roulette result.\n@return Roulette result." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADuelManager_GetRouletteResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DuelManager_eventGetRouletteResult_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADuelManager_GetRouletteResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelManager_GetRouletteResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_GetRouletteResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADuelManager_GetRouletteResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADuelManager, nullptr, "GetRouletteResult", Z_Construct_UFunction_ADuelManager_GetRouletteResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_GetRouletteResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADuelManager_GetRouletteResult_Statics::DuelManager_eventGetRouletteResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_GetRouletteResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADuelManager_GetRouletteResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADuelManager_GetRouletteResult_Statics::DuelManager_eventGetRouletteResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADuelManager_GetRouletteResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADuelManager_GetRouletteResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADuelManager::execGetRouletteResult)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetRouletteResult();
	P_NATIVE_END;
}
// ********** End Class ADuelManager Function GetRouletteResult ************************************

// ********** Begin Class ADuelManager Function GetSavedPot ****************************************
struct Z_Construct_UFunction_ADuelManager_GetSavedPot_Statics
{
	struct DuelManager_eventGetSavedPot_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the saved pots.\n\x09 * @return Saved pots.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Managers/DuelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the saved pots.\n@return Saved pots." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADuelManager_GetSavedPot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DuelManager_eventGetSavedPot_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADuelManager_GetSavedPot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelManager_GetSavedPot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_GetSavedPot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADuelManager_GetSavedPot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADuelManager, nullptr, "GetSavedPot", Z_Construct_UFunction_ADuelManager_GetSavedPot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_GetSavedPot_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADuelManager_GetSavedPot_Statics::DuelManager_eventGetSavedPot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_GetSavedPot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADuelManager_GetSavedPot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADuelManager_GetSavedPot_Statics::DuelManager_eventGetSavedPot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADuelManager_GetSavedPot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADuelManager_GetSavedPot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADuelManager::execGetSavedPot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSavedPot();
	P_NATIVE_END;
}
// ********** End Class ADuelManager Function GetSavedPot ******************************************

// ********** Begin Class ADuelManager Function IsAnyCrownInDuel ***********************************
struct Z_Construct_UFunction_ADuelManager_IsAnyCrownInDuel_Statics
{
	struct DuelManager_eventIsAnyCrownInDuel_Parms
	{
		int32 a_DuelSquareIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets if any player in the Duel has a Crown.\n\x09 * @param a_DuelSquareIndex Duel Id.\n\x09 * @return True if there's any player in the Duel with a Crown.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Managers/DuelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets if any player in the Duel has a Crown.\n@param a_DuelSquareIndex Duel Id.\n@return True if there's any player in the Duel with a Crown." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_DuelSquareIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADuelManager_IsAnyCrownInDuel_Statics::NewProp_a_DuelSquareIndex = { "a_DuelSquareIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DuelManager_eventIsAnyCrownInDuel_Parms, a_DuelSquareIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADuelManager_IsAnyCrownInDuel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DuelManager_eventIsAnyCrownInDuel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADuelManager_IsAnyCrownInDuel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DuelManager_eventIsAnyCrownInDuel_Parms), &Z_Construct_UFunction_ADuelManager_IsAnyCrownInDuel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADuelManager_IsAnyCrownInDuel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelManager_IsAnyCrownInDuel_Statics::NewProp_a_DuelSquareIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelManager_IsAnyCrownInDuel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_IsAnyCrownInDuel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADuelManager_IsAnyCrownInDuel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADuelManager, nullptr, "IsAnyCrownInDuel", Z_Construct_UFunction_ADuelManager_IsAnyCrownInDuel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_IsAnyCrownInDuel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADuelManager_IsAnyCrownInDuel_Statics::DuelManager_eventIsAnyCrownInDuel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_IsAnyCrownInDuel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADuelManager_IsAnyCrownInDuel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADuelManager_IsAnyCrownInDuel_Statics::DuelManager_eventIsAnyCrownInDuel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADuelManager_IsAnyCrownInDuel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADuelManager_IsAnyCrownInDuel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADuelManager::execIsAnyCrownInDuel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_a_DuelSquareIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAnyCrownInDuel(Z_Param_a_DuelSquareIndex);
	P_NATIVE_END;
}
// ********** End Class ADuelManager Function IsAnyCrownInDuel *************************************

// ********** Begin Class ADuelManager Function RegisterDuel ***************************************
struct Z_Construct_UFunction_ADuelManager_RegisterDuel_Statics
{
	struct DuelManager_eventRegisterDuel_Parms
	{
		int32 a_Attacker;
		int32 a_Victim;
		int32 a_Winner;
		int32 a_BetType;
		int32 a_Coins;
		int32 a_Crowns;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Challenge" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Registers a Duel's Data.\n\x09 * @param a_Attacker Id of the attacker player.\n\x09 * @param a_Victim Id of the victim player.\n\x09 * @param a_Winner Id of the winner player.\n\x09 * @param a_BetType Bet Type.\n\x09 * @param a_Coins Duel won coins.\n\x09 * @param a_Crowns Duel won crowns.\n\x09 */" },
#endif
		{ "CPP_Default_a_Crowns", "0" },
		{ "ModuleRelativePath", "Managers/DuelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Registers a Duel's Data.\n@param a_Attacker Id of the attacker player.\n@param a_Victim Id of the victim player.\n@param a_Winner Id of the winner player.\n@param a_BetType Bet Type.\n@param a_Coins Duel won coins.\n@param a_Crowns Duel won crowns." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_Attacker;
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_Victim;
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_Winner;
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_BetType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_Coins;
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_Crowns;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADuelManager_RegisterDuel_Statics::NewProp_a_Attacker = { "a_Attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DuelManager_eventRegisterDuel_Parms, a_Attacker), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADuelManager_RegisterDuel_Statics::NewProp_a_Victim = { "a_Victim", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DuelManager_eventRegisterDuel_Parms, a_Victim), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADuelManager_RegisterDuel_Statics::NewProp_a_Winner = { "a_Winner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DuelManager_eventRegisterDuel_Parms, a_Winner), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADuelManager_RegisterDuel_Statics::NewProp_a_BetType = { "a_BetType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DuelManager_eventRegisterDuel_Parms, a_BetType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADuelManager_RegisterDuel_Statics::NewProp_a_Coins = { "a_Coins", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DuelManager_eventRegisterDuel_Parms, a_Coins), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADuelManager_RegisterDuel_Statics::NewProp_a_Crowns = { "a_Crowns", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DuelManager_eventRegisterDuel_Parms, a_Crowns), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADuelManager_RegisterDuel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelManager_RegisterDuel_Statics::NewProp_a_Attacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelManager_RegisterDuel_Statics::NewProp_a_Victim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelManager_RegisterDuel_Statics::NewProp_a_Winner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelManager_RegisterDuel_Statics::NewProp_a_BetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelManager_RegisterDuel_Statics::NewProp_a_Coins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelManager_RegisterDuel_Statics::NewProp_a_Crowns,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_RegisterDuel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADuelManager_RegisterDuel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADuelManager, nullptr, "RegisterDuel", Z_Construct_UFunction_ADuelManager_RegisterDuel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_RegisterDuel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADuelManager_RegisterDuel_Statics::DuelManager_eventRegisterDuel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_RegisterDuel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADuelManager_RegisterDuel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADuelManager_RegisterDuel_Statics::DuelManager_eventRegisterDuel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADuelManager_RegisterDuel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADuelManager_RegisterDuel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADuelManager::execRegisterDuel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_a_Attacker);
	P_GET_PROPERTY(FIntProperty,Z_Param_a_Victim);
	P_GET_PROPERTY(FIntProperty,Z_Param_a_Winner);
	P_GET_PROPERTY(FIntProperty,Z_Param_a_BetType);
	P_GET_PROPERTY(FIntProperty,Z_Param_a_Coins);
	P_GET_PROPERTY(FIntProperty,Z_Param_a_Crowns);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterDuel(Z_Param_a_Attacker,Z_Param_a_Victim,Z_Param_a_Winner,Z_Param_a_BetType,Z_Param_a_Coins,Z_Param_a_Crowns);
	P_NATIVE_END;
}
// ********** End Class ADuelManager Function RegisterDuel *****************************************

// ********** Begin Class ADuelManager Function ResetDuels *****************************************
struct Z_Construct_UFunction_ADuelManager_ResetDuels_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Resets the Duel information.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Managers/DuelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resets the Duel information." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADuelManager_ResetDuels_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADuelManager, nullptr, "ResetDuels", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_ResetDuels_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADuelManager_ResetDuels_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ADuelManager_ResetDuels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADuelManager_ResetDuels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADuelManager::execResetDuels)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetDuels();
	P_NATIVE_END;
}
// ********** End Class ADuelManager Function ResetDuels *******************************************

// ********** Begin Class ADuelManager Function SafeDuelChoice *************************************
struct Z_Construct_UFunction_ADuelManager_SafeDuelChoice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Safe the chosen Duel.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Managers/DuelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Safe the chosen Duel." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADuelManager_SafeDuelChoice_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADuelManager, nullptr, "SafeDuelChoice", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_SafeDuelChoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADuelManager_SafeDuelChoice_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ADuelManager_SafeDuelChoice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADuelManager_SafeDuelChoice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADuelManager::execSafeDuelChoice)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SafeDuelChoice();
	P_NATIVE_END;
}
// ********** End Class ADuelManager Function SafeDuelChoice ***************************************

// ********** Begin Class ADuelManager Function SaveDuelToRegistry *********************************
struct Z_Construct_UFunction_ADuelManager_SaveDuelToRegistry_Statics
{
	struct DuelManager_eventSaveDuelToRegistry_Parms
	{
		int32 a_Winner;
		int32 a_Coins;
		int32 a_Crowns;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Saves the current Duel registry.\n\x09 * @param a_Winner Id of this Duel's winner player.\n\x09 * @param a_Coins Gained Coins.\n\x09 * @param a_Crowns Gained Crowns.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Managers/DuelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Saves the current Duel registry.\n@param a_Winner Id of this Duel's winner player.\n@param a_Coins Gained Coins.\n@param a_Crowns Gained Crowns." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_Winner;
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_Coins;
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_Crowns;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADuelManager_SaveDuelToRegistry_Statics::NewProp_a_Winner = { "a_Winner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DuelManager_eventSaveDuelToRegistry_Parms, a_Winner), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADuelManager_SaveDuelToRegistry_Statics::NewProp_a_Coins = { "a_Coins", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DuelManager_eventSaveDuelToRegistry_Parms, a_Coins), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADuelManager_SaveDuelToRegistry_Statics::NewProp_a_Crowns = { "a_Crowns", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DuelManager_eventSaveDuelToRegistry_Parms, a_Crowns), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADuelManager_SaveDuelToRegistry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelManager_SaveDuelToRegistry_Statics::NewProp_a_Winner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelManager_SaveDuelToRegistry_Statics::NewProp_a_Coins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelManager_SaveDuelToRegistry_Statics::NewProp_a_Crowns,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_SaveDuelToRegistry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADuelManager_SaveDuelToRegistry_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADuelManager, nullptr, "SaveDuelToRegistry", Z_Construct_UFunction_ADuelManager_SaveDuelToRegistry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_SaveDuelToRegistry_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADuelManager_SaveDuelToRegistry_Statics::DuelManager_eventSaveDuelToRegistry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_SaveDuelToRegistry_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADuelManager_SaveDuelToRegistry_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADuelManager_SaveDuelToRegistry_Statics::DuelManager_eventSaveDuelToRegistry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADuelManager_SaveDuelToRegistry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADuelManager_SaveDuelToRegistry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADuelManager::execSaveDuelToRegistry)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_a_Winner);
	P_GET_PROPERTY(FIntProperty,Z_Param_a_Coins);
	P_GET_PROPERTY(FIntProperty,Z_Param_a_Crowns);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveDuelToRegistry(Z_Param_a_Winner,Z_Param_a_Coins,Z_Param_a_Crowns);
	P_NATIVE_END;
}
// ********** End Class ADuelManager Function SaveDuelToRegistry ***********************************

// ********** Begin Class ADuelManager Function SendRegistryToInstance *****************************
struct Z_Construct_UFunction_ADuelManager_SendRegistryToInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Challenge" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Saves the Duel Registry into the DataManager Instance.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Managers/DuelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Saves the Duel Registry into the DataManager Instance." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADuelManager_SendRegistryToInstance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADuelManager, nullptr, "SendRegistryToInstance", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_SendRegistryToInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADuelManager_SendRegistryToInstance_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ADuelManager_SendRegistryToInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADuelManager_SendRegistryToInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADuelManager::execSendRegistryToInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendRegistryToInstance();
	P_NATIVE_END;
}
// ********** End Class ADuelManager Function SendRegistryToInstance *******************************

// ********** Begin Class ADuelManager Function SetDuelSquareIndex *********************************
struct Z_Construct_UFunction_ADuelManager_SetDuelSquareIndex_Statics
{
	struct DuelManager_eventSetDuelSquareIndex_Parms
	{
		int32 a_DuelSquareIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Challenge" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the current Duel Index.\n\x09 * @param a_DuelSquareIndex Selected Duel Index.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Managers/DuelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the current Duel Index.\n@param a_DuelSquareIndex Selected Duel Index." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_a_DuelSquareIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_DuelSquareIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADuelManager_SetDuelSquareIndex_Statics::NewProp_a_DuelSquareIndex = { "a_DuelSquareIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DuelManager_eventSetDuelSquareIndex_Parms, a_DuelSquareIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_a_DuelSquareIndex_MetaData), NewProp_a_DuelSquareIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADuelManager_SetDuelSquareIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelManager_SetDuelSquareIndex_Statics::NewProp_a_DuelSquareIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_SetDuelSquareIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADuelManager_SetDuelSquareIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADuelManager, nullptr, "SetDuelSquareIndex", Z_Construct_UFunction_ADuelManager_SetDuelSquareIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_SetDuelSquareIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADuelManager_SetDuelSquareIndex_Statics::DuelManager_eventSetDuelSquareIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_SetDuelSquareIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADuelManager_SetDuelSquareIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADuelManager_SetDuelSquareIndex_Statics::DuelManager_eventSetDuelSquareIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADuelManager_SetDuelSquareIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADuelManager_SetDuelSquareIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADuelManager::execSetDuelSquareIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_a_DuelSquareIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDuelSquareIndex(Z_Param_a_DuelSquareIndex);
	P_NATIVE_END;
}
// ********** End Class ADuelManager Function SetDuelSquareIndex ***********************************

// ********** Begin Class ADuelManager Function SetRouletteResult **********************************
struct Z_Construct_UFunction_ADuelManager_SetRouletteResult_Statics
{
	struct DuelManager_eventSetRouletteResult_Parms
	{
		int32 a_RouletteResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Challenge" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the Roulette result.\n\x09 * @param a_RouletteResult Roulette result.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Managers/DuelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the Roulette result.\n@param a_RouletteResult Roulette result." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_a_RouletteResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_RouletteResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADuelManager_SetRouletteResult_Statics::NewProp_a_RouletteResult = { "a_RouletteResult", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DuelManager_eventSetRouletteResult_Parms, a_RouletteResult), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_a_RouletteResult_MetaData), NewProp_a_RouletteResult_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADuelManager_SetRouletteResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelManager_SetRouletteResult_Statics::NewProp_a_RouletteResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_SetRouletteResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADuelManager_SetRouletteResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADuelManager, nullptr, "SetRouletteResult", Z_Construct_UFunction_ADuelManager_SetRouletteResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_SetRouletteResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADuelManager_SetRouletteResult_Statics::DuelManager_eventSetRouletteResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_SetRouletteResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADuelManager_SetRouletteResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADuelManager_SetRouletteResult_Statics::DuelManager_eventSetRouletteResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADuelManager_SetRouletteResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADuelManager_SetRouletteResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADuelManager::execSetRouletteResult)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_a_RouletteResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRouletteResult(Z_Param_a_RouletteResult);
	P_NATIVE_END;
}
// ********** End Class ADuelManager Function SetRouletteResult ************************************

// ********** Begin Class ADuelManager Function SetUpDuelInfo **************************************
struct Z_Construct_UFunction_ADuelManager_SetUpDuelInfo_Statics
{
	struct DuelManager_eventSetUpDuelInfo_Parms
	{
		TArray<AMinion*> a_Minions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Prepares the Duel Information.\n\x09 * @param a_Minions Array of Minions that will participate in the Duel.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Managers/DuelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prepares the Duel Information.\n@param a_Minions Array of Minions that will participate in the Duel." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_a_Minions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_a_Minions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADuelManager_SetUpDuelInfo_Statics::NewProp_a_Minions_Inner = { "a_Minions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADuelManager_SetUpDuelInfo_Statics::NewProp_a_Minions = { "a_Minions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DuelManager_eventSetUpDuelInfo_Parms, a_Minions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADuelManager_SetUpDuelInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelManager_SetUpDuelInfo_Statics::NewProp_a_Minions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelManager_SetUpDuelInfo_Statics::NewProp_a_Minions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_SetUpDuelInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADuelManager_SetUpDuelInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADuelManager, nullptr, "SetUpDuelInfo", Z_Construct_UFunction_ADuelManager_SetUpDuelInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_SetUpDuelInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADuelManager_SetUpDuelInfo_Statics::DuelManager_eventSetUpDuelInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_SetUpDuelInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADuelManager_SetUpDuelInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADuelManager_SetUpDuelInfo_Statics::DuelManager_eventSetUpDuelInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADuelManager_SetUpDuelInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADuelManager_SetUpDuelInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADuelManager::execSetUpDuelInfo)
{
	P_GET_TARRAY(AMinion*,Z_Param_a_Minions);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUpDuelInfo(Z_Param_a_Minions);
	P_NATIVE_END;
}
// ********** End Class ADuelManager Function SetUpDuelInfo ****************************************

// ********** Begin Class ADuelManager Function SwitchDuelType *************************************
struct Z_Construct_UFunction_ADuelManager_SwitchDuelType_Statics
{
	struct DuelManager_eventSwitchDuelType_Parms
	{
		int32 a_Direction;
		int32 a_Team;
		EDuelType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Changes the current Duel Type.\n\x09 * @param a_Direction Direction of the roulette for choosing the Duel.\n\x09 * @param a_Team Id of the Team that has initiated the DUel.\n\x09 * @return Current Duel Type.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Managers/DuelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Changes the current Duel Type.\n@param a_Direction Direction of the roulette for choosing the Duel.\n@param a_Team Id of the Team that has initiated the DUel.\n@return Current Duel Type." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_Direction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_Team;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADuelManager_SwitchDuelType_Statics::NewProp_a_Direction = { "a_Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DuelManager_eventSwitchDuelType_Parms, a_Direction), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADuelManager_SwitchDuelType_Statics::NewProp_a_Team = { "a_Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DuelManager_eventSwitchDuelType_Parms, a_Team), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADuelManager_SwitchDuelType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADuelManager_SwitchDuelType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DuelManager_eventSwitchDuelType_Parms, ReturnValue), Z_Construct_UEnum_PartyJungle_EDuelType, METADATA_PARAMS(0, nullptr) }; // 839709619
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADuelManager_SwitchDuelType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelManager_SwitchDuelType_Statics::NewProp_a_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelManager_SwitchDuelType_Statics::NewProp_a_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelManager_SwitchDuelType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelManager_SwitchDuelType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_SwitchDuelType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADuelManager_SwitchDuelType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADuelManager, nullptr, "SwitchDuelType", Z_Construct_UFunction_ADuelManager_SwitchDuelType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_SwitchDuelType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADuelManager_SwitchDuelType_Statics::DuelManager_eventSwitchDuelType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelManager_SwitchDuelType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADuelManager_SwitchDuelType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADuelManager_SwitchDuelType_Statics::DuelManager_eventSwitchDuelType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADuelManager_SwitchDuelType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADuelManager_SwitchDuelType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADuelManager::execSwitchDuelType)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_a_Direction);
	P_GET_PROPERTY(FIntProperty,Z_Param_a_Team);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDuelType*)Z_Param__Result=P_THIS->SwitchDuelType(Z_Param_a_Direction,Z_Param_a_Team);
	P_NATIVE_END;
}
// ********** End Class ADuelManager Function SwitchDuelType ***************************************

// ********** Begin Class ADuelManager *************************************************************
void ADuelManager::StaticRegisterNativesADuelManager()
{
	UClass* Class = ADuelManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBetCoinsQuantity", &ADuelManager::execGetBetCoinsQuantity },
		{ "GetBetCrownsQuantity", &ADuelManager::execGetBetCrownsQuantity },
		{ "GetDuelSquareIndex", &ADuelManager::execGetDuelSquareIndex },
		{ "GetDuelType", &ADuelManager::execGetDuelType },
		{ "GetPotQuantity", &ADuelManager::execGetPotQuantity },
		{ "GetRouletteResult", &ADuelManager::execGetRouletteResult },
		{ "GetSavedPot", &ADuelManager::execGetSavedPot },
		{ "IsAnyCrownInDuel", &ADuelManager::execIsAnyCrownInDuel },
		{ "RegisterDuel", &ADuelManager::execRegisterDuel },
		{ "ResetDuels", &ADuelManager::execResetDuels },
		{ "SafeDuelChoice", &ADuelManager::execSafeDuelChoice },
		{ "SaveDuelToRegistry", &ADuelManager::execSaveDuelToRegistry },
		{ "SendRegistryToInstance", &ADuelManager::execSendRegistryToInstance },
		{ "SetDuelSquareIndex", &ADuelManager::execSetDuelSquareIndex },
		{ "SetRouletteResult", &ADuelManager::execSetRouletteResult },
		{ "SetUpDuelInfo", &ADuelManager::execSetUpDuelInfo },
		{ "SwitchDuelType", &ADuelManager::execSwitchDuelType },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADuelManager;
UClass* ADuelManager::GetPrivateStaticClass()
{
	using TClass = ADuelManager;
	if (!Z_Registration_Info_UClass_ADuelManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DuelManager"),
			Z_Registration_Info_UClass_ADuelManager.InnerSingleton,
			StaticRegisterNativesADuelManager,
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
	return Z_Registration_Info_UClass_ADuelManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ADuelManager_NoRegister()
{
	return ADuelManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADuelManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Manager for all the Duel Information.\n */" },
#endif
		{ "IncludePath", "Managers/DuelManager.h" },
		{ "ModuleRelativePath", "Managers/DuelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Manager for all the Duel Information." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_ChallengeRegistry_MetaData[] = {
		{ "Category", "Registry" },
		{ "ModuleRelativePath", "Managers/DuelManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_Minions_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Reference to the challenge registry database.\n" },
#endif
		{ "ModuleRelativePath", "Managers/DuelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Reference to the challenge registry database." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_SavedDuelTypes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< List of Minions that participate in the Duel.\n" },
#endif
		{ "ModuleRelativePath", "Managers/DuelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< List of Minions that participate in the Duel." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_SquaresWithDuelsInRound_MetaData[] = {
		{ "Category", "Active Duels" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Array with all the chosen Duels Types.\n" },
#endif
		{ "ModuleRelativePath", "Managers/DuelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Array with all the chosen Duels Types." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_DuelsRegistry_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Id of the current Duel.\n" },
#endif
		{ "ModuleRelativePath", "Managers/DuelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Id of the current Duel." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_ChallengeRegistry;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_Minions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_m_Minions;
	static const UECodeGen_Private::FBytePropertyParams NewProp_m_SavedDuelTypes_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_m_SavedDuelTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_m_SavedDuelTypes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_SquaresWithDuelsInRound_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_m_SquaresWithDuelsInRound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_DuelsRegistry_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_m_DuelsRegistry;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADuelManager_GetBetCoinsQuantity, "GetBetCoinsQuantity" }, // 3293992425
		{ &Z_Construct_UFunction_ADuelManager_GetBetCrownsQuantity, "GetBetCrownsQuantity" }, // 3299580460
		{ &Z_Construct_UFunction_ADuelManager_GetDuelSquareIndex, "GetDuelSquareIndex" }, // 1890717860
		{ &Z_Construct_UFunction_ADuelManager_GetDuelType, "GetDuelType" }, // 3604795061
		{ &Z_Construct_UFunction_ADuelManager_GetPotQuantity, "GetPotQuantity" }, // 4230723904
		{ &Z_Construct_UFunction_ADuelManager_GetRouletteResult, "GetRouletteResult" }, // 1150589509
		{ &Z_Construct_UFunction_ADuelManager_GetSavedPot, "GetSavedPot" }, // 1874900346
		{ &Z_Construct_UFunction_ADuelManager_IsAnyCrownInDuel, "IsAnyCrownInDuel" }, // 638685364
		{ &Z_Construct_UFunction_ADuelManager_RegisterDuel, "RegisterDuel" }, // 4291042845
		{ &Z_Construct_UFunction_ADuelManager_ResetDuels, "ResetDuels" }, // 491870053
		{ &Z_Construct_UFunction_ADuelManager_SafeDuelChoice, "SafeDuelChoice" }, // 1374244889
		{ &Z_Construct_UFunction_ADuelManager_SaveDuelToRegistry, "SaveDuelToRegistry" }, // 95395948
		{ &Z_Construct_UFunction_ADuelManager_SendRegistryToInstance, "SendRegistryToInstance" }, // 1492648647
		{ &Z_Construct_UFunction_ADuelManager_SetDuelSquareIndex, "SetDuelSquareIndex" }, // 1229775082
		{ &Z_Construct_UFunction_ADuelManager_SetRouletteResult, "SetRouletteResult" }, // 3857546117
		{ &Z_Construct_UFunction_ADuelManager_SetUpDuelInfo, "SetUpDuelInfo" }, // 1316451450
		{ &Z_Construct_UFunction_ADuelManager_SwitchDuelType, "SwitchDuelType" }, // 3598456183
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADuelManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADuelManager_Statics::NewProp_m_ChallengeRegistry = { "m_ChallengeRegistry", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADuelManager, m_ChallengeRegistry), Z_Construct_UClass_AChallengeDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_ChallengeRegistry_MetaData), NewProp_m_ChallengeRegistry_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADuelManager_Statics::NewProp_m_Minions_Inner = { "m_Minions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADuelManager_Statics::NewProp_m_Minions = { "m_Minions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADuelManager, m_Minions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_Minions_MetaData), NewProp_m_Minions_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADuelManager_Statics::NewProp_m_SavedDuelTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADuelManager_Statics::NewProp_m_SavedDuelTypes_Inner = { "m_SavedDuelTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PartyJungle_EDuelType, METADATA_PARAMS(0, nullptr) }; // 839709619
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADuelManager_Statics::NewProp_m_SavedDuelTypes = { "m_SavedDuelTypes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADuelManager, m_SavedDuelTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_SavedDuelTypes_MetaData), NewProp_m_SavedDuelTypes_MetaData) }; // 839709619
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADuelManager_Statics::NewProp_m_SquaresWithDuelsInRound_Inner = { "m_SquaresWithDuelsInRound", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASquare_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADuelManager_Statics::NewProp_m_SquaresWithDuelsInRound = { "m_SquaresWithDuelsInRound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADuelManager, m_SquaresWithDuelsInRound), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_SquaresWithDuelsInRound_MetaData), NewProp_m_SquaresWithDuelsInRound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADuelManager_Statics::NewProp_m_DuelsRegistry_Inner = { "m_DuelsRegistry", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UChallengeDto_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADuelManager_Statics::NewProp_m_DuelsRegistry = { "m_DuelsRegistry", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADuelManager, m_DuelsRegistry), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_DuelsRegistry_MetaData), NewProp_m_DuelsRegistry_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADuelManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADuelManager_Statics::NewProp_m_ChallengeRegistry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADuelManager_Statics::NewProp_m_Minions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADuelManager_Statics::NewProp_m_Minions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADuelManager_Statics::NewProp_m_SavedDuelTypes_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADuelManager_Statics::NewProp_m_SavedDuelTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADuelManager_Statics::NewProp_m_SavedDuelTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADuelManager_Statics::NewProp_m_SquaresWithDuelsInRound_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADuelManager_Statics::NewProp_m_SquaresWithDuelsInRound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADuelManager_Statics::NewProp_m_DuelsRegistry_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADuelManager_Statics::NewProp_m_DuelsRegistry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADuelManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADuelManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADuelManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADuelManager_Statics::ClassParams = {
	&ADuelManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADuelManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADuelManager_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADuelManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ADuelManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADuelManager()
{
	if (!Z_Registration_Info_UClass_ADuelManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADuelManager.OuterSingleton, Z_Construct_UClass_ADuelManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADuelManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADuelManager);
ADuelManager::~ADuelManager() {}
// ********** End Class ADuelManager ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_DuelManager_h__Script_PartyJungle_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDuelType_StaticEnum, TEXT("EDuelType"), &Z_Registration_Info_UEnum_EDuelType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 839709619U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADuelManager, ADuelManager::StaticClass, TEXT("ADuelManager"), &Z_Registration_Info_UClass_ADuelManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADuelManager), 4283970318U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_DuelManager_h__Script_PartyJungle_2794512384(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_DuelManager_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_DuelManager_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_DuelManager_h__Script_PartyJungle_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_DuelManager_h__Script_PartyJungle_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
