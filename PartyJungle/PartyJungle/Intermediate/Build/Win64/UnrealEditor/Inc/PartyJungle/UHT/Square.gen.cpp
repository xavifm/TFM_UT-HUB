// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Map/Square.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSquare() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMapMenuCamera_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinion_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ASquare();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ASquare_NoRegister();
PARTYJUNGLE_API UEnum* Z_Construct_UEnum_PartyJungle_ESquareType();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// End Cross Module References

// Begin Enum ESquareType
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
// End Enum ESquareType

// Begin Class ASquare Function AddMinion
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASquare_AddMinion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASquare, nullptr, "AddMinion", nullptr, nullptr, Z_Construct_UFunction_ASquare_AddMinion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_AddMinion_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASquare_AddMinion_Statics::Square_eventAddMinion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_AddMinion_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASquare_AddMinion_Statics::Function_MetaDataParams) };
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
// End Class ASquare Function AddMinion

// Begin Class ASquare Function CloseChooseMenu
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASquare_CloseChooseMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASquare, nullptr, "CloseChooseMenu", nullptr, nullptr, Z_Construct_UFunction_ASquare_CloseChooseMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_CloseChooseMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASquare_CloseChooseMenu_Statics::Square_eventCloseChooseMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_CloseChooseMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASquare_CloseChooseMenu_Statics::Function_MetaDataParams) };
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
// End Class ASquare Function CloseChooseMenu

// Begin Class ASquare Function GetNextNode
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASquare_GetNextNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASquare, nullptr, "GetNextNode", nullptr, nullptr, Z_Construct_UFunction_ASquare_GetNextNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_GetNextNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASquare_GetNextNode_Statics::Square_eventGetNextNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_GetNextNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASquare_GetNextNode_Statics::Function_MetaDataParams) };
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
// End Class ASquare Function GetNextNode

// Begin Class ASquare Function GetNextSquare
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASquare_GetNextSquare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASquare, nullptr, "GetNextSquare", nullptr, nullptr, Z_Construct_UFunction_ASquare_GetNextSquare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_GetNextSquare_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASquare_GetNextSquare_Statics::Square_eventGetNextSquare_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_GetNextSquare_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASquare_GetNextSquare_Statics::Function_MetaDataParams) };
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
// End Class ASquare Function GetNextSquare

// Begin Class ASquare Function OpenChooseMenu
struct Z_Construct_UFunction_ASquare_OpenChooseMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Map/Square.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASquare_OpenChooseMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASquare, nullptr, "OpenChooseMenu", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_OpenChooseMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASquare_OpenChooseMenu_Statics::Function_MetaDataParams) };
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
// End Class ASquare Function OpenChooseMenu

// Begin Class ASquare Function RemoveMinion
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASquare_RemoveMinion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASquare, nullptr, "RemoveMinion", nullptr, nullptr, Z_Construct_UFunction_ASquare_RemoveMinion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_RemoveMinion_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASquare_RemoveMinion_Statics::Square_eventRemoveMinion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquare_RemoveMinion_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASquare_RemoveMinion_Statics::Function_MetaDataParams) };
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
// End Class ASquare Function RemoveMinion

// Begin Class ASquare
void ASquare::StaticRegisterNativesASquare()
{
	UClass* Class = ASquare::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddMinion", &ASquare::execAddMinion },
		{ "CloseChooseMenu", &ASquare::execCloseChooseMenu },
		{ "GetNextNode", &ASquare::execGetNextNode },
		{ "GetNextSquare", &ASquare::execGetNextSquare },
		{ "OpenChooseMenu", &ASquare::execOpenChooseMenu },
		{ "RemoveMinion", &ASquare::execRemoveMinion },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASquare);
UClass* Z_Construct_UClass_ASquare_NoRegister()
{
	return ASquare::StaticClass();
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
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Money;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Center;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MinionsList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MinionsList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConnectedNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConnectedNodes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASquare_AddMinion, "AddMinion" }, // 4072108050
		{ &Z_Construct_UFunction_ASquare_CloseChooseMenu, "CloseChooseMenu" }, // 335921899
		{ &Z_Construct_UFunction_ASquare_GetNextNode, "GetNextNode" }, // 1046565618
		{ &Z_Construct_UFunction_ASquare_GetNextSquare, "GetNextSquare" }, // 3809473293
		{ &Z_Construct_UFunction_ASquare_OpenChooseMenu, "OpenChooseMenu" }, // 3763124425
		{ &Z_Construct_UFunction_ASquare_RemoveMinion, "RemoveMinion" }, // 706248460
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASquare>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASquare_Statics::NewProp_Money = { "Money", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASquare, Money), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Money_MetaData), NewProp_Money_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASquare_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASquare, Center), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASquare_Statics::NewProp_MinionsList_Inner = { "MinionsList", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASquare_Statics::NewProp_MinionsList = { "MinionsList", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASquare, MinionsList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinionsList_MetaData), NewProp_MinionsList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASquare_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASquare, Camera), Z_Construct_UClass_AMapMenuCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASquare_Statics::NewProp_ConnectedNodes_Inner = { "ConnectedNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASquare_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASquare_Statics::NewProp_ConnectedNodes = { "ConnectedNodes", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASquare, ConnectedNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectedNodes_MetaData), NewProp_ConnectedNodes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASquare_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquare_Statics::NewProp_Money,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquare_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquare_Statics::NewProp_MinionsList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquare_Statics::NewProp_MinionsList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquare_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquare_Statics::NewProp_ConnectedNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquare_Statics::NewProp_ConnectedNodes,
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
	0x009000A4u,
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
template<> PARTYJUNGLE_API UClass* StaticClass<ASquare>()
{
	return ASquare::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASquare);
ASquare::~ASquare() {}
// End Class ASquare

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_Square_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESquareType_StaticEnum, TEXT("ESquareType"), &Z_Registration_Info_UEnum_ESquareType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2154578961U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASquare, ASquare::StaticClass, TEXT("ASquare"), &Z_Registration_Info_UClass_ASquare, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASquare), 2937984941U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_Square_h_1529817194(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_Square_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_Square_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_Square_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_Square_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
