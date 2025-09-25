// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Map/Square.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSquare() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMapMenuCamera_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinion_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ASquare();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ASquare_NoRegister();
PARTYJUNGLE_API UEnum* Z_Construct_UEnum_PartyJungle_ESquareType();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESquareType ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESquareType;
static UEnum* ESquareType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESquareType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESquareType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PartyJungle_ESquareType, (UObject*)Z_Construct_UPackage__Script_PartyJungle(), TEXT("ESquareType"));
	}
	return Z_Registration_Info_UEnum_ESquareType.OuterSingleton;
}
template<> PARTYJUNGLE_API UEnum* StaticEnum<ESquareType>()
{
	return ESquareType_StaticEnum();
}
struct Z_Construct_UEnum_PartyJungle_ESquareType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Map/Square.h" },
		{ "NORMAL.DisplayName", "Normal" },
		{ "NORMAL.Name", "ESquareType::NORMAL" },
		{ "SAFE_ZONE.DisplayName", "Safe Zone" },
		{ "SAFE_ZONE.Name", "ESquareType::SAFE_ZONE" },
		{ "TRAP.DisplayName", "Trap" },
		{ "TRAP.Name", "ESquareType::TRAP" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESquareType::NORMAL", (int64)ESquareType::NORMAL },
		{ "ESquareType::TRAP", (int64)ESquareType::TRAP },
		{ "ESquareType::SAFE_ZONE", (int64)ESquareType::SAFE_ZONE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PartyJungle_ESquareType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PartyJungle,
	nullptr,
	"ESquareType",
	"ESquareType",
	Z_Construct_UEnum_PartyJungle_ESquareType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PartyJungle_ESquareType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PartyJungle_ESquareType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PartyJungle_ESquareType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PartyJungle_ESquareType()
{
	if (!Z_Registration_Info_UEnum_ESquareType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESquareType.InnerSingleton, Z_Construct_UEnum_PartyJungle_ESquareType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESquareType.InnerSingleton;
}
// ********** End Enum ESquareType *****************************************************************

// ********** Begin Class ASquare Function AddMinion ***********************************************
struct Z_Construct_UFunction_ASquare_AddMinion_Statics
{
	struct Square_eventAddMinion_Parms
	{
		AMinion* _minion;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Map/Square.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__minion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASquare_AddMinion_Statics::NewProp__minion = { "_minion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Square_eventAddMinion_Parms, _minion), Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASquare_AddMinion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquare_AddMinion_Statics::NewProp__minion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_AddMinion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASquare_AddMinion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASquare, nullptr, "AddMinion", Z_Construct_UFunction_ASquare_AddMinion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_AddMinion_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASquare_AddMinion_Statics::Square_eventAddMinion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_AddMinion_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASquare_AddMinion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASquare_AddMinion_Statics::Square_eventAddMinion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASquare_AddMinion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASquare_AddMinion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASquare::execAddMinion)
{
	P_GET_OBJECT(AMinion,Z_Param__minion);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddMinion(Z_Param__minion);
	P_NATIVE_END;
}
// ********** End Class ASquare Function AddMinion *************************************************

// ********** Begin Class ASquare Function CheckIfSquareIsBlocked **********************************
struct Z_Construct_UFunction_ASquare_CheckIfSquareIsBlocked_Statics
{
	struct Square_eventCheckIfSquareIsBlocked_Parms
	{
		AMinion* _minion;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Map/Square.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__minion;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASquare_CheckIfSquareIsBlocked_Statics::NewProp__minion = { "_minion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Square_eventCheckIfSquareIsBlocked_Parms, _minion), Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASquare_CheckIfSquareIsBlocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Square_eventCheckIfSquareIsBlocked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASquare_CheckIfSquareIsBlocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Square_eventCheckIfSquareIsBlocked_Parms), &Z_Construct_UFunction_ASquare_CheckIfSquareIsBlocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASquare_CheckIfSquareIsBlocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquare_CheckIfSquareIsBlocked_Statics::NewProp__minion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquare_CheckIfSquareIsBlocked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_CheckIfSquareIsBlocked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASquare_CheckIfSquareIsBlocked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASquare, nullptr, "CheckIfSquareIsBlocked", Z_Construct_UFunction_ASquare_CheckIfSquareIsBlocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_CheckIfSquareIsBlocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASquare_CheckIfSquareIsBlocked_Statics::Square_eventCheckIfSquareIsBlocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_CheckIfSquareIsBlocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASquare_CheckIfSquareIsBlocked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASquare_CheckIfSquareIsBlocked_Statics::Square_eventCheckIfSquareIsBlocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASquare_CheckIfSquareIsBlocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASquare_CheckIfSquareIsBlocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASquare::execCheckIfSquareIsBlocked)
{
	P_GET_OBJECT(AMinion,Z_Param__minion);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckIfSquareIsBlocked(Z_Param__minion);
	P_NATIVE_END;
}
// ********** End Class ASquare Function CheckIfSquareIsBlocked ************************************

// ********** Begin Class ASquare Function CloseChooseMenu *****************************************
struct Z_Construct_UFunction_ASquare_CloseChooseMenu_Statics
{
	struct Square_eventCloseChooseMenu_Parms
	{
		int32 _pathIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Map/Square.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__pathIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASquare_CloseChooseMenu_Statics::NewProp__pathIndex = { "_pathIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Square_eventCloseChooseMenu_Parms, _pathIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASquare_CloseChooseMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquare_CloseChooseMenu_Statics::NewProp__pathIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_CloseChooseMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASquare_CloseChooseMenu_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASquare, nullptr, "CloseChooseMenu", Z_Construct_UFunction_ASquare_CloseChooseMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_CloseChooseMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASquare_CloseChooseMenu_Statics::Square_eventCloseChooseMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_CloseChooseMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASquare_CloseChooseMenu_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASquare_CloseChooseMenu_Statics::Square_eventCloseChooseMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASquare_CloseChooseMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASquare_CloseChooseMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASquare::execCloseChooseMenu)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__pathIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseChooseMenu(Z_Param__pathIndex);
	P_NATIVE_END;
}
// ********** End Class ASquare Function CloseChooseMenu *******************************************

// ********** Begin Class ASquare Function GetNextNode *********************************************
struct Z_Construct_UFunction_ASquare_GetNextNode_Statics
{
	struct Square_eventGetNextNode_Parms
	{
		int32 _pathIndex;
		ASquare* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Map/Square.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__pathIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASquare_GetNextNode_Statics::NewProp__pathIndex = { "_pathIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Square_eventGetNextNode_Parms, _pathIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASquare_GetNextNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Square_eventGetNextNode_Parms, ReturnValue), Z_Construct_UClass_ASquare_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASquare_GetNextNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquare_GetNextNode_Statics::NewProp__pathIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquare_GetNextNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_GetNextNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASquare_GetNextNode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASquare, nullptr, "GetNextNode", Z_Construct_UFunction_ASquare_GetNextNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_GetNextNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASquare_GetNextNode_Statics::Square_eventGetNextNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_GetNextNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASquare_GetNextNode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASquare_GetNextNode_Statics::Square_eventGetNextNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASquare_GetNextNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASquare_GetNextNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASquare::execGetNextNode)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__pathIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ASquare**)Z_Param__Result=P_THIS->GetNextNode(Z_Param__pathIndex);
	P_NATIVE_END;
}
// ********** End Class ASquare Function GetNextNode ***********************************************

// ********** Begin Class ASquare Function GetNextSquare *******************************************
struct Z_Construct_UFunction_ASquare_GetNextSquare_Statics
{
	struct Square_eventGetNextSquare_Parms
	{
		ASquare* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Map/Square.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASquare_GetNextSquare_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Square_eventGetNextSquare_Parms, ReturnValue), Z_Construct_UClass_ASquare_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASquare_GetNextSquare_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquare_GetNextSquare_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_GetNextSquare_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASquare_GetNextSquare_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASquare, nullptr, "GetNextSquare", Z_Construct_UFunction_ASquare_GetNextSquare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_GetNextSquare_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASquare_GetNextSquare_Statics::Square_eventGetNextSquare_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_GetNextSquare_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASquare_GetNextSquare_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASquare_GetNextSquare_Statics::Square_eventGetNextSquare_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASquare_GetNextSquare()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASquare_GetNextSquare_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASquare::execGetNextSquare)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ASquare**)Z_Param__Result=P_THIS->GetNextSquare();
	P_NATIVE_END;
}
// ********** End Class ASquare Function GetNextSquare *********************************************

// ********** Begin Class ASquare Function OpenChooseMenu ******************************************
struct Z_Construct_UFunction_ASquare_OpenChooseMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Map/Square.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASquare_OpenChooseMenu_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASquare, nullptr, "OpenChooseMenu", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_OpenChooseMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASquare_OpenChooseMenu_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASquare_OpenChooseMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASquare_OpenChooseMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASquare::execOpenChooseMenu)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenChooseMenu();
	P_NATIVE_END;
}
// ********** End Class ASquare Function OpenChooseMenu ********************************************

// ********** Begin Class ASquare Function RemoveMinion ********************************************
struct Z_Construct_UFunction_ASquare_RemoveMinion_Statics
{
	struct Square_eventRemoveMinion_Parms
	{
		AMinion* _minion;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Map/Square.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__minion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASquare_RemoveMinion_Statics::NewProp__minion = { "_minion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Square_eventRemoveMinion_Parms, _minion), Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASquare_RemoveMinion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquare_RemoveMinion_Statics::NewProp__minion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_RemoveMinion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASquare_RemoveMinion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASquare, nullptr, "RemoveMinion", Z_Construct_UFunction_ASquare_RemoveMinion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_RemoveMinion_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASquare_RemoveMinion_Statics::Square_eventRemoveMinion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_RemoveMinion_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASquare_RemoveMinion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASquare_RemoveMinion_Statics::Square_eventRemoveMinion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASquare_RemoveMinion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASquare_RemoveMinion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASquare::execRemoveMinion)
{
	P_GET_OBJECT(AMinion,Z_Param__minion);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveMinion(Z_Param__minion);
	P_NATIVE_END;
}
// ********** End Class ASquare Function RemoveMinion **********************************************

// ********** Begin Class ASquare Function ResetSquare *********************************************
struct Z_Construct_UFunction_ASquare_ResetSquare_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Map/Square.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASquare_ResetSquare_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASquare, nullptr, "ResetSquare", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_ResetSquare_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASquare_ResetSquare_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASquare_ResetSquare()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASquare_ResetSquare_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASquare::execResetSquare)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetSquare();
	P_NATIVE_END;
}
// ********** End Class ASquare Function ResetSquare ***********************************************

// ********** Begin Class ASquare Function SwitchBlockedSquareMode *********************************
struct Z_Construct_UFunction_ASquare_SwitchBlockedSquareMode_Statics
{
	struct Square_eventSwitchBlockedSquareMode_Parms
	{
		int32 _team;
		bool _blocked;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Map/Square.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__team;
	static void NewProp__blocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__blocked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASquare_SwitchBlockedSquareMode_Statics::NewProp__team = { "_team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Square_eventSwitchBlockedSquareMode_Parms, _team), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASquare_SwitchBlockedSquareMode_Statics::NewProp__blocked_SetBit(void* Obj)
{
	((Square_eventSwitchBlockedSquareMode_Parms*)Obj)->_blocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASquare_SwitchBlockedSquareMode_Statics::NewProp__blocked = { "_blocked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Square_eventSwitchBlockedSquareMode_Parms), &Z_Construct_UFunction_ASquare_SwitchBlockedSquareMode_Statics::NewProp__blocked_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASquare_SwitchBlockedSquareMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquare_SwitchBlockedSquareMode_Statics::NewProp__team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquare_SwitchBlockedSquareMode_Statics::NewProp__blocked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_SwitchBlockedSquareMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASquare_SwitchBlockedSquareMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASquare, nullptr, "SwitchBlockedSquareMode", Z_Construct_UFunction_ASquare_SwitchBlockedSquareMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_SwitchBlockedSquareMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASquare_SwitchBlockedSquareMode_Statics::Square_eventSwitchBlockedSquareMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_SwitchBlockedSquareMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASquare_SwitchBlockedSquareMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASquare_SwitchBlockedSquareMode_Statics::Square_eventSwitchBlockedSquareMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASquare_SwitchBlockedSquareMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASquare_SwitchBlockedSquareMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASquare::execSwitchBlockedSquareMode)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__team);
	P_GET_UBOOL(Z_Param__blocked);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchBlockedSquareMode(Z_Param__team,Z_Param__blocked);
	P_NATIVE_END;
}
// ********** End Class ASquare Function SwitchBlockedSquareMode ***********************************

// ********** Begin Class ASquare Function SwitchDuelSquare ****************************************
struct Z_Construct_UFunction_ASquare_SwitchDuelSquare_Statics
{
	struct Square_eventSwitchDuelSquare_Parms
	{
		bool _toggle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Map/Square.h" },
	};
#endif // WITH_METADATA
	static void NewProp__toggle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__toggle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASquare_SwitchDuelSquare_Statics::NewProp__toggle_SetBit(void* Obj)
{
	((Square_eventSwitchDuelSquare_Parms*)Obj)->_toggle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASquare_SwitchDuelSquare_Statics::NewProp__toggle = { "_toggle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Square_eventSwitchDuelSquare_Parms), &Z_Construct_UFunction_ASquare_SwitchDuelSquare_Statics::NewProp__toggle_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASquare_SwitchDuelSquare_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Square_eventSwitchDuelSquare_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASquare_SwitchDuelSquare_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Square_eventSwitchDuelSquare_Parms), &Z_Construct_UFunction_ASquare_SwitchDuelSquare_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASquare_SwitchDuelSquare_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquare_SwitchDuelSquare_Statics::NewProp__toggle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquare_SwitchDuelSquare_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_SwitchDuelSquare_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASquare_SwitchDuelSquare_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASquare, nullptr, "SwitchDuelSquare", Z_Construct_UFunction_ASquare_SwitchDuelSquare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_SwitchDuelSquare_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASquare_SwitchDuelSquare_Statics::Square_eventSwitchDuelSquare_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_SwitchDuelSquare_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASquare_SwitchDuelSquare_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASquare_SwitchDuelSquare_Statics::Square_eventSwitchDuelSquare_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASquare_SwitchDuelSquare()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASquare_SwitchDuelSquare_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASquare::execSwitchDuelSquare)
{
	P_GET_UBOOL(Z_Param__toggle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SwitchDuelSquare(Z_Param__toggle);
	P_NATIVE_END;
}
// ********** End Class ASquare Function SwitchDuelSquare ******************************************

// ********** Begin Class ASquare ******************************************************************
void ASquare::StaticRegisterNativesASquare()
{
	UClass* Class = ASquare::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddMinion", &ASquare::execAddMinion },
		{ "CheckIfSquareIsBlocked", &ASquare::execCheckIfSquareIsBlocked },
		{ "CloseChooseMenu", &ASquare::execCloseChooseMenu },
		{ "GetNextNode", &ASquare::execGetNextNode },
		{ "GetNextSquare", &ASquare::execGetNextSquare },
		{ "OpenChooseMenu", &ASquare::execOpenChooseMenu },
		{ "RemoveMinion", &ASquare::execRemoveMinion },
		{ "ResetSquare", &ASquare::execResetSquare },
		{ "SwitchBlockedSquareMode", &ASquare::execSwitchBlockedSquareMode },
		{ "SwitchDuelSquare", &ASquare::execSwitchDuelSquare },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASquare;
UClass* ASquare::GetPrivateStaticClass()
{
	using TClass = ASquare;
	if (!Z_Registration_Info_UClass_ASquare.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Square"),
			Z_Registration_Info_UClass_ASquare.InnerSingleton,
			StaticRegisterNativesASquare,
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
	return Z_Registration_Info_UClass_ASquare.InnerSingleton;
}
UClass* Z_Construct_UClass_ASquare_NoRegister()
{
	return ASquare::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASquare_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Map/Square.h" },
		{ "ModuleRelativePath", "Map/Square.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Money_MetaData[] = {
		{ "Category", "SquareProperties" },
		{ "ModuleRelativePath", "Map/Square.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsChallengeEnabled_MetaData[] = {
		{ "Category", "SquareProperties" },
		{ "ModuleRelativePath", "Map/Square.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsBlockedByWall_MetaData[] = {
		{ "Category", "SquareProperties" },
		{ "ModuleRelativePath", "Map/Square.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Map/Square.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinionsList_MetaData[] = {
		{ "Category", "Minions List" },
		{ "ModuleRelativePath", "Map/Square.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Camera Connection" },
		{ "ModuleRelativePath", "Map/Square.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectedNodes_MetaData[] = {
		{ "Category", "SquareNodesProperties" },
		{ "ModuleRelativePath", "Map/Square.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamBlockingSquare_MetaData[] = {
		{ "ModuleRelativePath", "Map/Square.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Money;
	static void NewProp_IsChallengeEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsChallengeEnabled;
	static void NewProp_IsBlockedByWall_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsBlockedByWall;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Center;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MinionsList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MinionsList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConnectedNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConnectedNodes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamBlockingSquare;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASquare_AddMinion, "AddMinion" }, // 495361335
		{ &Z_Construct_UFunction_ASquare_CheckIfSquareIsBlocked, "CheckIfSquareIsBlocked" }, // 3397628939
		{ &Z_Construct_UFunction_ASquare_CloseChooseMenu, "CloseChooseMenu" }, // 2875004187
		{ &Z_Construct_UFunction_ASquare_GetNextNode, "GetNextNode" }, // 1243798995
		{ &Z_Construct_UFunction_ASquare_GetNextSquare, "GetNextSquare" }, // 41711469
		{ &Z_Construct_UFunction_ASquare_OpenChooseMenu, "OpenChooseMenu" }, // 958178736
		{ &Z_Construct_UFunction_ASquare_RemoveMinion, "RemoveMinion" }, // 2469270561
		{ &Z_Construct_UFunction_ASquare_ResetSquare, "ResetSquare" }, // 579898918
		{ &Z_Construct_UFunction_ASquare_SwitchBlockedSquareMode, "SwitchBlockedSquareMode" }, // 50426786
		{ &Z_Construct_UFunction_ASquare_SwitchDuelSquare, "SwitchDuelSquare" }, // 928350239
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASquare>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASquare_Statics::NewProp_Money = { "Money", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASquare, Money), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Money_MetaData), NewProp_Money_MetaData) };
void Z_Construct_UClass_ASquare_Statics::NewProp_IsChallengeEnabled_SetBit(void* Obj)
{
	((ASquare*)Obj)->IsChallengeEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASquare_Statics::NewProp_IsChallengeEnabled = { "IsChallengeEnabled", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASquare), &Z_Construct_UClass_ASquare_Statics::NewProp_IsChallengeEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsChallengeEnabled_MetaData), NewProp_IsChallengeEnabled_MetaData) };
void Z_Construct_UClass_ASquare_Statics::NewProp_IsBlockedByWall_SetBit(void* Obj)
{
	((ASquare*)Obj)->IsBlockedByWall = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASquare_Statics::NewProp_IsBlockedByWall = { "IsBlockedByWall", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASquare), &Z_Construct_UClass_ASquare_Statics::NewProp_IsBlockedByWall_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsBlockedByWall_MetaData), NewProp_IsBlockedByWall_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASquare_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASquare, Center), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASquare_Statics::NewProp_MinionsList_Inner = { "MinionsList", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASquare_Statics::NewProp_MinionsList = { "MinionsList", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASquare, MinionsList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinionsList_MetaData), NewProp_MinionsList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASquare_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASquare, Camera), Z_Construct_UClass_AMapMenuCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASquare_Statics::NewProp_ConnectedNodes_Inner = { "ConnectedNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASquare_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASquare_Statics::NewProp_ConnectedNodes = { "ConnectedNodes", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASquare, ConnectedNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectedNodes_MetaData), NewProp_ConnectedNodes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASquare_Statics::NewProp_TeamBlockingSquare = { "TeamBlockingSquare", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASquare, TeamBlockingSquare), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamBlockingSquare_MetaData), NewProp_TeamBlockingSquare_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASquare_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquare_Statics::NewProp_Money,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquare_Statics::NewProp_IsChallengeEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquare_Statics::NewProp_IsBlockedByWall,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquare_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquare_Statics::NewProp_MinionsList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquare_Statics::NewProp_MinionsList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquare_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquare_Statics::NewProp_ConnectedNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquare_Statics::NewProp_ConnectedNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquare_Statics::NewProp_TeamBlockingSquare,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASquare_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASquare_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASquare_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASquare_Statics::ClassParams = {
	&ASquare::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASquare_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASquare_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASquare_Statics::Class_MetaDataParams), Z_Construct_UClass_ASquare_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASquare()
{
	if (!Z_Registration_Info_UClass_ASquare.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASquare.OuterSingleton, Z_Construct_UClass_ASquare_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASquare.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASquare);
ASquare::~ASquare() {}
// ********** End Class ASquare ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_Square_h__Script_PartyJungle_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESquareType_StaticEnum, TEXT("ESquareType"), &Z_Registration_Info_UEnum_ESquareType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2154578961U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASquare, ASquare::StaticClass, TEXT("ASquare"), &Z_Registration_Info_UClass_ASquare, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASquare), 2587947966U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_Square_h__Script_PartyJungle_3575406108(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_Square_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_Square_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_Square_h__Script_PartyJungle_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_Square_h__Script_PartyJungle_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
