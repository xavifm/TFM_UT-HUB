// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/World/WorldDB.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWorldDB() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinigameLogic_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AWorldDB();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AWorldDB_NoRegister();
PARTYJUNGLE_API UEnum* Z_Construct_UEnum_PartyJungle_EMinigameType();
PARTYJUNGLE_API UEnum* Z_Construct_UEnum_PartyJungle_ETeamsMode();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AWorldDB Function GetAllMinigames ****************************************
struct Z_Construct_UFunction_AWorldDB_GetAllMinigames_Statics
{
	struct WorldDB_eventGetAllMinigames_Parms
	{
		TArray<AMinigameLogic*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "World/WorldDB.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldDB_GetAllMinigames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMinigameLogic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWorldDB_GetAllMinigames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldDB_eventGetAllMinigames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldDB_GetAllMinigames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDB_GetAllMinigames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDB_GetAllMinigames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDB_GetAllMinigames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDB_GetAllMinigames_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWorldDB, nullptr, "GetAllMinigames", Z_Construct_UFunction_AWorldDB_GetAllMinigames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDB_GetAllMinigames_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWorldDB_GetAllMinigames_Statics::WorldDB_eventGetAllMinigames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDB_GetAllMinigames_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWorldDB_GetAllMinigames_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWorldDB_GetAllMinigames_Statics::WorldDB_eventGetAllMinigames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWorldDB_GetAllMinigames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDB_GetAllMinigames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWorldDB::execGetAllMinigames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AMinigameLogic*>*)Z_Param__Result=P_THIS->GetAllMinigames();
	P_NATIVE_END;
}
// ********** End Class AWorldDB Function GetAllMinigames ******************************************

// ********** Begin Class AWorldDB Function GetLevelByIndex ****************************************
struct Z_Construct_UFunction_AWorldDB_GetLevelByIndex_Statics
{
	struct WorldDB_eventGetLevelByIndex_Parms
	{
		int32 _index;
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "World/WorldDB.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWorldDB_GetLevelByIndex_Statics::NewProp__index = { "_index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldDB_eventGetLevelByIndex_Parms, _index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldDB_GetLevelByIndex_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWorldDB_GetLevelByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldDB_eventGetLevelByIndex_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldDB_GetLevelByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDB_GetLevelByIndex_Statics::NewProp__index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDB_GetLevelByIndex_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDB_GetLevelByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDB_GetLevelByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDB_GetLevelByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWorldDB, nullptr, "GetLevelByIndex", Z_Construct_UFunction_AWorldDB_GetLevelByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDB_GetLevelByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWorldDB_GetLevelByIndex_Statics::WorldDB_eventGetLevelByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDB_GetLevelByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWorldDB_GetLevelByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWorldDB_GetLevelByIndex_Statics::WorldDB_eventGetLevelByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWorldDB_GetLevelByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDB_GetLevelByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWorldDB::execGetLevelByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetLevelByIndex(Z_Param__index);
	P_NATIVE_END;
}
// ********** End Class AWorldDB Function GetLevelByIndex ******************************************

// ********** Begin Class AWorldDB Function GetMapActors *******************************************
struct Z_Construct_UFunction_AWorldDB_GetMapActors_Statics
{
	struct WorldDB_eventGetMapActors_Parms
	{
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "World/WorldDB.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldDB_GetMapActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWorldDB_GetMapActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldDB_eventGetMapActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldDB_GetMapActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDB_GetMapActors_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDB_GetMapActors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDB_GetMapActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDB_GetMapActors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWorldDB, nullptr, "GetMapActors", Z_Construct_UFunction_AWorldDB_GetMapActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDB_GetMapActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWorldDB_GetMapActors_Statics::WorldDB_eventGetMapActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDB_GetMapActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWorldDB_GetMapActors_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWorldDB_GetMapActors_Statics::WorldDB_eventGetMapActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWorldDB_GetMapActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDB_GetMapActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWorldDB::execGetMapActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetMapActors();
	P_NATIVE_END;
}
// ********** End Class AWorldDB Function GetMapActors *********************************************

// ********** Begin Class AWorldDB Function GetMinigamesOfType *************************************
struct Z_Construct_UFunction_AWorldDB_GetMinigamesOfType_Statics
{
	struct WorldDB_eventGetMinigamesOfType_Parms
	{
		EMinigameType _type;
		ETeamsMode _teams;
		TArray<AMinigameLogic*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "World/WorldDB.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp__type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__type;
	static const UECodeGen_Private::FBytePropertyParams NewProp__teams_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__teams;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AWorldDB_GetMinigamesOfType_Statics::NewProp__type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AWorldDB_GetMinigamesOfType_Statics::NewProp__type = { "_type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldDB_eventGetMinigamesOfType_Parms, _type), Z_Construct_UEnum_PartyJungle_EMinigameType, METADATA_PARAMS(0, nullptr) }; // 2530748103
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AWorldDB_GetMinigamesOfType_Statics::NewProp__teams_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AWorldDB_GetMinigamesOfType_Statics::NewProp__teams = { "_teams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldDB_eventGetMinigamesOfType_Parms, _teams), Z_Construct_UEnum_PartyJungle_ETeamsMode, METADATA_PARAMS(0, nullptr) }; // 3117846603
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldDB_GetMinigamesOfType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMinigameLogic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWorldDB_GetMinigamesOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldDB_eventGetMinigamesOfType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldDB_GetMinigamesOfType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDB_GetMinigamesOfType_Statics::NewProp__type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDB_GetMinigamesOfType_Statics::NewProp__type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDB_GetMinigamesOfType_Statics::NewProp__teams_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDB_GetMinigamesOfType_Statics::NewProp__teams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDB_GetMinigamesOfType_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDB_GetMinigamesOfType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDB_GetMinigamesOfType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDB_GetMinigamesOfType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWorldDB, nullptr, "GetMinigamesOfType", Z_Construct_UFunction_AWorldDB_GetMinigamesOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDB_GetMinigamesOfType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWorldDB_GetMinigamesOfType_Statics::WorldDB_eventGetMinigamesOfType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDB_GetMinigamesOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWorldDB_GetMinigamesOfType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWorldDB_GetMinigamesOfType_Statics::WorldDB_eventGetMinigamesOfType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWorldDB_GetMinigamesOfType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDB_GetMinigamesOfType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWorldDB::execGetMinigamesOfType)
{
	P_GET_ENUM(EMinigameType,Z_Param__type);
	P_GET_ENUM(ETeamsMode,Z_Param__teams);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AMinigameLogic*>*)Z_Param__Result=P_THIS->GetMinigamesOfType(EMinigameType(Z_Param__type),ETeamsMode(Z_Param__teams));
	P_NATIVE_END;
}
// ********** End Class AWorldDB Function GetMinigamesOfType ***************************************

// ********** Begin Class AWorldDB Function GetMinigamesQuantity ***********************************
struct Z_Construct_UFunction_AWorldDB_GetMinigamesQuantity_Statics
{
	struct WorldDB_eventGetMinigamesQuantity_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "World/WorldDB.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWorldDB_GetMinigamesQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldDB_eventGetMinigamesQuantity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldDB_GetMinigamesQuantity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDB_GetMinigamesQuantity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDB_GetMinigamesQuantity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDB_GetMinigamesQuantity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWorldDB, nullptr, "GetMinigamesQuantity", Z_Construct_UFunction_AWorldDB_GetMinigamesQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDB_GetMinigamesQuantity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWorldDB_GetMinigamesQuantity_Statics::WorldDB_eventGetMinigamesQuantity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDB_GetMinigamesQuantity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWorldDB_GetMinigamesQuantity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWorldDB_GetMinigamesQuantity_Statics::WorldDB_eventGetMinigamesQuantity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWorldDB_GetMinigamesQuantity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDB_GetMinigamesQuantity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWorldDB::execGetMinigamesQuantity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMinigamesQuantity();
	P_NATIVE_END;
}
// ********** End Class AWorldDB Function GetMinigamesQuantity *************************************

// ********** Begin Class AWorldDB Function GetRandomMinigameOfType ********************************
struct Z_Construct_UFunction_AWorldDB_GetRandomMinigameOfType_Statics
{
	struct WorldDB_eventGetRandomMinigameOfType_Parms
	{
		EMinigameType _type;
		ETeamsMode _teams;
		AMinigameLogic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "World/WorldDB.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp__type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__type;
	static const UECodeGen_Private::FBytePropertyParams NewProp__teams_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__teams;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AWorldDB_GetRandomMinigameOfType_Statics::NewProp__type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AWorldDB_GetRandomMinigameOfType_Statics::NewProp__type = { "_type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldDB_eventGetRandomMinigameOfType_Parms, _type), Z_Construct_UEnum_PartyJungle_EMinigameType, METADATA_PARAMS(0, nullptr) }; // 2530748103
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AWorldDB_GetRandomMinigameOfType_Statics::NewProp__teams_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AWorldDB_GetRandomMinigameOfType_Statics::NewProp__teams = { "_teams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldDB_eventGetRandomMinigameOfType_Parms, _teams), Z_Construct_UEnum_PartyJungle_ETeamsMode, METADATA_PARAMS(0, nullptr) }; // 3117846603
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldDB_GetRandomMinigameOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldDB_eventGetRandomMinigameOfType_Parms, ReturnValue), Z_Construct_UClass_AMinigameLogic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldDB_GetRandomMinigameOfType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDB_GetRandomMinigameOfType_Statics::NewProp__type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDB_GetRandomMinigameOfType_Statics::NewProp__type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDB_GetRandomMinigameOfType_Statics::NewProp__teams_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDB_GetRandomMinigameOfType_Statics::NewProp__teams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDB_GetRandomMinigameOfType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDB_GetRandomMinigameOfType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDB_GetRandomMinigameOfType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWorldDB, nullptr, "GetRandomMinigameOfType", Z_Construct_UFunction_AWorldDB_GetRandomMinigameOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDB_GetRandomMinigameOfType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWorldDB_GetRandomMinigameOfType_Statics::WorldDB_eventGetRandomMinigameOfType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDB_GetRandomMinigameOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWorldDB_GetRandomMinigameOfType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWorldDB_GetRandomMinigameOfType_Statics::WorldDB_eventGetRandomMinigameOfType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWorldDB_GetRandomMinigameOfType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDB_GetRandomMinigameOfType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWorldDB::execGetRandomMinigameOfType)
{
	P_GET_ENUM(EMinigameType,Z_Param__type);
	P_GET_ENUM(ETeamsMode,Z_Param__teams);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMinigameLogic**)Z_Param__Result=P_THIS->GetRandomMinigameOfType(EMinigameType(Z_Param__type),ETeamsMode(Z_Param__teams));
	P_NATIVE_END;
}
// ********** End Class AWorldDB Function GetRandomMinigameOfType **********************************

// ********** Begin Class AWorldDB *****************************************************************
void AWorldDB::StaticRegisterNativesAWorldDB()
{
	UClass* Class = AWorldDB::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAllMinigames", &AWorldDB::execGetAllMinigames },
		{ "GetLevelByIndex", &AWorldDB::execGetLevelByIndex },
		{ "GetMapActors", &AWorldDB::execGetMapActors },
		{ "GetMinigamesOfType", &AWorldDB::execGetMinigamesOfType },
		{ "GetMinigamesQuantity", &AWorldDB::execGetMinigamesQuantity },
		{ "GetRandomMinigameOfType", &AWorldDB::execGetRandomMinigameOfType },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AWorldDB;
UClass* AWorldDB::GetPrivateStaticClass()
{
	using TClass = AWorldDB;
	if (!Z_Registration_Info_UClass_AWorldDB.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WorldDB"),
			Z_Registration_Info_UClass_AWorldDB.InnerSingleton,
			StaticRegisterNativesAWorldDB,
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
	return Z_Registration_Info_UClass_AWorldDB.InnerSingleton;
}
UClass* Z_Construct_UClass_AWorldDB_NoRegister()
{
	return AWorldDB::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AWorldDB_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "World/WorldDB.h" },
		{ "ModuleRelativePath", "World/WorldDB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoardActors_MetaData[] = {
		{ "Category", "World_Segment" },
		{ "ModuleRelativePath", "World/WorldDB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Minigames_MetaData[] = {
		{ "Category", "World_Segment" },
		{ "ModuleRelativePath", "World/WorldDB.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoardActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoardActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Minigames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Minigames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWorldDB_GetAllMinigames, "GetAllMinigames" }, // 1548123264
		{ &Z_Construct_UFunction_AWorldDB_GetLevelByIndex, "GetLevelByIndex" }, // 2068646777
		{ &Z_Construct_UFunction_AWorldDB_GetMapActors, "GetMapActors" }, // 472168229
		{ &Z_Construct_UFunction_AWorldDB_GetMinigamesOfType, "GetMinigamesOfType" }, // 1174255353
		{ &Z_Construct_UFunction_AWorldDB_GetMinigamesQuantity, "GetMinigamesQuantity" }, // 1951828640
		{ &Z_Construct_UFunction_AWorldDB_GetRandomMinigameOfType, "GetRandomMinigameOfType" }, // 3819272631
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldDB>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldDB_Statics::NewProp_BoardActors_Inner = { "BoardActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldDB_Statics::NewProp_BoardActors = { "BoardActors", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldDB, BoardActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoardActors_MetaData), NewProp_BoardActors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldDB_Statics::NewProp_Minigames_Inner = { "Minigames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMinigameLogic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldDB_Statics::NewProp_Minigames = { "Minigames", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldDB, Minigames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Minigames_MetaData), NewProp_Minigames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorldDB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDB_Statics::NewProp_BoardActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDB_Statics::NewProp_BoardActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDB_Statics::NewProp_Minigames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDB_Statics::NewProp_Minigames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDB_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWorldDB_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDB_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorldDB_Statics::ClassParams = {
	&AWorldDB::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWorldDB_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDB_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDB_Statics::Class_MetaDataParams), Z_Construct_UClass_AWorldDB_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWorldDB()
{
	if (!Z_Registration_Info_UClass_AWorldDB.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorldDB.OuterSingleton, Z_Construct_UClass_AWorldDB_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWorldDB.OuterSingleton;
}
AWorldDB::AWorldDB(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldDB);
AWorldDB::~AWorldDB() {}
// ********** End Class AWorldDB *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldDB_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWorldDB, AWorldDB::StaticClass, TEXT("AWorldDB"), &Z_Registration_Info_UClass_AWorldDB, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorldDB), 2356225089U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldDB_h__Script_PartyJungle_1736059188(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldDB_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldDB_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
