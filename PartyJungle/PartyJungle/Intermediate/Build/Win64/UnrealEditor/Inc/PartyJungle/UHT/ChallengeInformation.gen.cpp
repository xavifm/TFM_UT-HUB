// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Challenge/ChallengeInformation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChallengeInformation() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AChallengeInformation();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AChallengeInformation_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinion_NoRegister();
PARTYJUNGLE_API UEnum* Z_Construct_UEnum_PartyJungle_EDuelType();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// End Cross Module References

// Begin Enum EDuelType
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
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDuelType::HALF_COINS", (int64)EDuelType::HALF_COINS },
		{ "EDuelType::ALL_IN_COINS", (int64)EDuelType::ALL_IN_COINS },
		{ "EDuelType::ALL_IN_VS_ST", (int64)EDuelType::ALL_IN_VS_ST },
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
// End Enum EDuelType

// Begin Class AChallengeInformation Function GetBetCoinsQuantity
struct Z_Construct_UFunction_AChallengeInformation_GetBetCoinsQuantity_Statics
{
	struct ChallengeInformation_eventGetBetCoinsQuantity_Parms
	{
		int32 _minion;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Challenge/ChallengeInformation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__minion;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChallengeInformation_GetBetCoinsQuantity_Statics::NewProp__minion = { "_minion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChallengeInformation_eventGetBetCoinsQuantity_Parms, _minion), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChallengeInformation_GetBetCoinsQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChallengeInformation_eventGetBetCoinsQuantity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChallengeInformation_GetBetCoinsQuantity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeInformation_GetBetCoinsQuantity_Statics::NewProp__minion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeInformation_GetBetCoinsQuantity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_GetBetCoinsQuantity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChallengeInformation_GetBetCoinsQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChallengeInformation, nullptr, "GetBetCoinsQuantity", nullptr, nullptr, Z_Construct_UFunction_AChallengeInformation_GetBetCoinsQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_GetBetCoinsQuantity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChallengeInformation_GetBetCoinsQuantity_Statics::ChallengeInformation_eventGetBetCoinsQuantity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_GetBetCoinsQuantity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChallengeInformation_GetBetCoinsQuantity_Statics::Function_MetaDataParams) };
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
	P_GET_PROPERTY(FIntProperty,Z_Param__minion);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetBetCoinsQuantity(Z_Param__minion);
	P_NATIVE_END;
}
// End Class AChallengeInformation Function GetBetCoinsQuantity

// Begin Class AChallengeInformation Function GetBetCrownsQuantity
struct Z_Construct_UFunction_AChallengeInformation_GetBetCrownsQuantity_Statics
{
	struct ChallengeInformation_eventGetBetCrownsQuantity_Parms
	{
		int32 _minion;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Challenge/ChallengeInformation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__minion;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChallengeInformation_GetBetCrownsQuantity_Statics::NewProp__minion = { "_minion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChallengeInformation_eventGetBetCrownsQuantity_Parms, _minion), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChallengeInformation_GetBetCrownsQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChallengeInformation_eventGetBetCrownsQuantity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChallengeInformation_GetBetCrownsQuantity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeInformation_GetBetCrownsQuantity_Statics::NewProp__minion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeInformation_GetBetCrownsQuantity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_GetBetCrownsQuantity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChallengeInformation_GetBetCrownsQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChallengeInformation, nullptr, "GetBetCrownsQuantity", nullptr, nullptr, Z_Construct_UFunction_AChallengeInformation_GetBetCrownsQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_GetBetCrownsQuantity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChallengeInformation_GetBetCrownsQuantity_Statics::ChallengeInformation_eventGetBetCrownsQuantity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_GetBetCrownsQuantity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChallengeInformation_GetBetCrownsQuantity_Statics::Function_MetaDataParams) };
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
	P_GET_PROPERTY(FIntProperty,Z_Param__minion);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetBetCrownsQuantity(Z_Param__minion);
	P_NATIVE_END;
}
// End Class AChallengeInformation Function GetBetCrownsQuantity

// Begin Class AChallengeInformation Function GetDuelType
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
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AChallengeInformation_GetDuelType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChallengeInformation_eventGetDuelType_Parms, ReturnValue), Z_Construct_UEnum_PartyJungle_EDuelType, METADATA_PARAMS(0, nullptr) }; // 3354523186
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChallengeInformation_GetDuelType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeInformation_GetDuelType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeInformation_GetDuelType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_GetDuelType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChallengeInformation_GetDuelType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChallengeInformation, nullptr, "GetDuelType", nullptr, nullptr, Z_Construct_UFunction_AChallengeInformation_GetDuelType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_GetDuelType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChallengeInformation_GetDuelType_Statics::ChallengeInformation_eventGetDuelType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_GetDuelType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChallengeInformation_GetDuelType_Statics::Function_MetaDataParams) };
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
// End Class AChallengeInformation Function GetDuelType

// Begin Class AChallengeInformation Function SetUpDuelInfo
struct Z_Construct_UFunction_AChallengeInformation_SetUpDuelInfo_Statics
{
	struct ChallengeInformation_eventSetUpDuelInfo_Parms
	{
		AMinion* _attacker;
		AMinion* _victim;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Challenge/ChallengeInformation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__attacker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__victim;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChallengeInformation_SetUpDuelInfo_Statics::NewProp__attacker = { "_attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChallengeInformation_eventSetUpDuelInfo_Parms, _attacker), Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChallengeInformation_SetUpDuelInfo_Statics::NewProp__victim = { "_victim", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChallengeInformation_eventSetUpDuelInfo_Parms, _victim), Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChallengeInformation_SetUpDuelInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeInformation_SetUpDuelInfo_Statics::NewProp__attacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeInformation_SetUpDuelInfo_Statics::NewProp__victim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_SetUpDuelInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChallengeInformation_SetUpDuelInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChallengeInformation, nullptr, "SetUpDuelInfo", nullptr, nullptr, Z_Construct_UFunction_AChallengeInformation_SetUpDuelInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_SetUpDuelInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChallengeInformation_SetUpDuelInfo_Statics::ChallengeInformation_eventSetUpDuelInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_SetUpDuelInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChallengeInformation_SetUpDuelInfo_Statics::Function_MetaDataParams) };
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
	P_GET_OBJECT(AMinion,Z_Param__attacker);
	P_GET_OBJECT(AMinion,Z_Param__victim);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUpDuelInfo(Z_Param__attacker,Z_Param__victim);
	P_NATIVE_END;
}
// End Class AChallengeInformation Function SetUpDuelInfo

// Begin Class AChallengeInformation Function SwitchDuelType
struct Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics
{
	struct ChallengeInformation_eventSwitchDuelType_Parms
	{
		int32 _direction;
		EDuelType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Challenge/ChallengeInformation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__direction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics::NewProp__direction = { "_direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChallengeInformation_eventSwitchDuelType_Parms, _direction), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChallengeInformation_eventSwitchDuelType_Parms, ReturnValue), Z_Construct_UEnum_PartyJungle_EDuelType, METADATA_PARAMS(0, nullptr) }; // 3354523186
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics::NewProp__direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChallengeInformation, nullptr, "SwitchDuelType", nullptr, nullptr, Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics::ChallengeInformation_eventSwitchDuelType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChallengeInformation_SwitchDuelType_Statics::Function_MetaDataParams) };
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
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDuelType*)Z_Param__Result=P_THIS->SwitchDuelType(Z_Param__direction);
	P_NATIVE_END;
}
// End Class AChallengeInformation Function SwitchDuelType

// Begin Class AChallengeInformation
void AChallengeInformation::StaticRegisterNativesAChallengeInformation()
{
	UClass* Class = AChallengeInformation::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBetCoinsQuantity", &AChallengeInformation::execGetBetCoinsQuantity },
		{ "GetBetCrownsQuantity", &AChallengeInformation::execGetBetCrownsQuantity },
		{ "GetDuelType", &AChallengeInformation::execGetDuelType },
		{ "SetUpDuelInfo", &AChallengeInformation::execSetUpDuelInfo },
		{ "SwitchDuelType", &AChallengeInformation::execSwitchDuelType },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChallengeInformation);
UClass* Z_Construct_UClass_AChallengeInformation_NoRegister()
{
	return AChallengeInformation::StaticClass();
}
struct Z_Construct_UClass_AChallengeInformation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Challenge/ChallengeInformation.h" },
		{ "ModuleRelativePath", "Challenge/ChallengeInformation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attacker_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY()\n//class UChallengeDatabase* ChallengeRegistry;\n" },
#endif
		{ "ModuleRelativePath", "Challenge/ChallengeInformation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY()\nclass UChallengeDatabase* ChallengeRegistry;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Victim_MetaData[] = {
		{ "ModuleRelativePath", "Challenge/ChallengeInformation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Victim;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AChallengeInformation_GetBetCoinsQuantity, "GetBetCoinsQuantity" }, // 1459322506
		{ &Z_Construct_UFunction_AChallengeInformation_GetBetCrownsQuantity, "GetBetCrownsQuantity" }, // 1564543288
		{ &Z_Construct_UFunction_AChallengeInformation_GetDuelType, "GetDuelType" }, // 2531921383
		{ &Z_Construct_UFunction_AChallengeInformation_SetUpDuelInfo, "SetUpDuelInfo" }, // 2261140091
		{ &Z_Construct_UFunction_AChallengeInformation_SwitchDuelType, "SwitchDuelType" }, // 3900167997
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChallengeInformation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChallengeInformation_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChallengeInformation, Attacker), Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attacker_MetaData), NewProp_Attacker_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChallengeInformation_Statics::NewProp_Victim = { "Victim", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChallengeInformation, Victim), Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Victim_MetaData), NewProp_Victim_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChallengeInformation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChallengeInformation_Statics::NewProp_Attacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChallengeInformation_Statics::NewProp_Victim,
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
	0x009000A4u,
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
template<> PARTYJUNGLE_API UClass* StaticClass<AChallengeInformation>()
{
	return AChallengeInformation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AChallengeInformation);
AChallengeInformation::~AChallengeInformation() {}
// End Class AChallengeInformation

// Begin Registration
struct Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Challenge_ChallengeInformation_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDuelType_StaticEnum, TEXT("EDuelType"), &Z_Registration_Info_UEnum_EDuelType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3354523186U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AChallengeInformation, AChallengeInformation::StaticClass, TEXT("AChallengeInformation"), &Z_Registration_Info_UClass_AChallengeInformation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChallengeInformation), 4018317575U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Challenge_ChallengeInformation_h_2445021727(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Challenge_ChallengeInformation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Challenge_ChallengeInformation_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Challenge_ChallengeInformation_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Challenge_ChallengeInformation_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
