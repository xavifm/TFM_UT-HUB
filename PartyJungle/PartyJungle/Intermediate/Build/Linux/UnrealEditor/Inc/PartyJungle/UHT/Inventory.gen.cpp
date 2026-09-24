// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Player/Inventory/Inventory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInventory() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AInventory();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AInventory_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AItem_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinion_NoRegister();
PARTYJUNGLE_API UEnum* Z_Construct_UEnum_PartyJungle_EUseMode();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AInventory Function AddItem **********************************************
struct Z_Construct_UFunction_AInventory_AddItem_Statics
{
	struct Inventory_eventAddItem_Parms
	{
		int32 _team;
		AItem* _item;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__team;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__item;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInventory_AddItem_Statics::NewProp__team = { "_team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventAddItem_Parms, _team), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInventory_AddItem_Statics::NewProp__item = { "_item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventAddItem_Parms, _item), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AInventory_AddItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventAddItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInventory_AddItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventAddItem_Parms), &Z_Construct_UFunction_AInventory_AddItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInventory_AddItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_AddItem_Statics::NewProp__team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_AddItem_Statics::NewProp__item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_AddItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_AddItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInventory_AddItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AInventory, nullptr, "AddItem", Z_Construct_UFunction_AInventory_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_AddItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInventory_AddItem_Statics::Inventory_eventAddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_AddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInventory_AddItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AInventory_AddItem_Statics::Inventory_eventAddItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInventory_AddItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInventory_AddItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInventory::execAddItem)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__team);
	P_GET_OBJECT(AItem,Z_Param__item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddItem(Z_Param__team,Z_Param__item);
	P_NATIVE_END;
}
// ********** End Class AInventory Function AddItem ************************************************

// ********** Begin Class AInventory Function CheckIfIsEmptySpace **********************************
struct Z_Construct_UFunction_AInventory_CheckIfIsEmptySpace_Statics
{
	struct Inventory_eventCheckIfIsEmptySpace_Parms
	{
		int32 _team;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__team;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInventory_CheckIfIsEmptySpace_Statics::NewProp__team = { "_team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventCheckIfIsEmptySpace_Parms, _team), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AInventory_CheckIfIsEmptySpace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventCheckIfIsEmptySpace_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInventory_CheckIfIsEmptySpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventCheckIfIsEmptySpace_Parms), &Z_Construct_UFunction_AInventory_CheckIfIsEmptySpace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInventory_CheckIfIsEmptySpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_CheckIfIsEmptySpace_Statics::NewProp__team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_CheckIfIsEmptySpace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_CheckIfIsEmptySpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInventory_CheckIfIsEmptySpace_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AInventory, nullptr, "CheckIfIsEmptySpace", Z_Construct_UFunction_AInventory_CheckIfIsEmptySpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_CheckIfIsEmptySpace_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInventory_CheckIfIsEmptySpace_Statics::Inventory_eventCheckIfIsEmptySpace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_CheckIfIsEmptySpace_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInventory_CheckIfIsEmptySpace_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AInventory_CheckIfIsEmptySpace_Statics::Inventory_eventCheckIfIsEmptySpace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInventory_CheckIfIsEmptySpace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInventory_CheckIfIsEmptySpace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInventory::execCheckIfIsEmptySpace)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__team);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckIfIsEmptySpace(Z_Param__team);
	P_NATIVE_END;
}
// ********** End Class AInventory Function CheckIfIsEmptySpace ************************************

// ********** Begin Class AInventory Function CheckIfItemExists ************************************
struct Z_Construct_UFunction_AInventory_CheckIfItemExists_Statics
{
	struct Inventory_eventCheckIfItemExists_Parms
	{
		int32 _team;
		AItem* _item;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__team;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__item;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInventory_CheckIfItemExists_Statics::NewProp__team = { "_team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventCheckIfItemExists_Parms, _team), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInventory_CheckIfItemExists_Statics::NewProp__item = { "_item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventCheckIfItemExists_Parms, _item), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AInventory_CheckIfItemExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventCheckIfItemExists_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInventory_CheckIfItemExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventCheckIfItemExists_Parms), &Z_Construct_UFunction_AInventory_CheckIfItemExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInventory_CheckIfItemExists_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_CheckIfItemExists_Statics::NewProp__team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_CheckIfItemExists_Statics::NewProp__item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_CheckIfItemExists_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_CheckIfItemExists_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInventory_CheckIfItemExists_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AInventory, nullptr, "CheckIfItemExists", Z_Construct_UFunction_AInventory_CheckIfItemExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_CheckIfItemExists_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInventory_CheckIfItemExists_Statics::Inventory_eventCheckIfItemExists_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_CheckIfItemExists_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInventory_CheckIfItemExists_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AInventory_CheckIfItemExists_Statics::Inventory_eventCheckIfItemExists_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInventory_CheckIfItemExists()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInventory_CheckIfItemExists_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInventory::execCheckIfItemExists)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__team);
	P_GET_OBJECT(AItem,Z_Param__item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckIfItemExists(Z_Param__team,Z_Param__item);
	P_NATIVE_END;
}
// ********** End Class AInventory Function CheckIfItemExists **************************************

// ********** Begin Class AInventory Function CheckIfThereIsSpaceToStoreItem ***********************
struct Z_Construct_UFunction_AInventory_CheckIfThereIsSpaceToStoreItem_Statics
{
	struct Inventory_eventCheckIfThereIsSpaceToStoreItem_Parms
	{
		int32 _team;
		AItem* _item;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__team;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__item;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInventory_CheckIfThereIsSpaceToStoreItem_Statics::NewProp__team = { "_team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventCheckIfThereIsSpaceToStoreItem_Parms, _team), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInventory_CheckIfThereIsSpaceToStoreItem_Statics::NewProp__item = { "_item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventCheckIfThereIsSpaceToStoreItem_Parms, _item), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AInventory_CheckIfThereIsSpaceToStoreItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventCheckIfThereIsSpaceToStoreItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInventory_CheckIfThereIsSpaceToStoreItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventCheckIfThereIsSpaceToStoreItem_Parms), &Z_Construct_UFunction_AInventory_CheckIfThereIsSpaceToStoreItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInventory_CheckIfThereIsSpaceToStoreItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_CheckIfThereIsSpaceToStoreItem_Statics::NewProp__team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_CheckIfThereIsSpaceToStoreItem_Statics::NewProp__item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_CheckIfThereIsSpaceToStoreItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_CheckIfThereIsSpaceToStoreItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInventory_CheckIfThereIsSpaceToStoreItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AInventory, nullptr, "CheckIfThereIsSpaceToStoreItem", Z_Construct_UFunction_AInventory_CheckIfThereIsSpaceToStoreItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_CheckIfThereIsSpaceToStoreItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInventory_CheckIfThereIsSpaceToStoreItem_Statics::Inventory_eventCheckIfThereIsSpaceToStoreItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_CheckIfThereIsSpaceToStoreItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInventory_CheckIfThereIsSpaceToStoreItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AInventory_CheckIfThereIsSpaceToStoreItem_Statics::Inventory_eventCheckIfThereIsSpaceToStoreItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInventory_CheckIfThereIsSpaceToStoreItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInventory_CheckIfThereIsSpaceToStoreItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInventory::execCheckIfThereIsSpaceToStoreItem)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__team);
	P_GET_OBJECT(AItem,Z_Param__item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckIfThereIsSpaceToStoreItem(Z_Param__team,Z_Param__item);
	P_NATIVE_END;
}
// ********** End Class AInventory Function CheckIfThereIsSpaceToStoreItem *************************

// ********** Begin Class AInventory Function GetItemUseModeFromUI *********************************
struct Z_Construct_UFunction_AInventory_GetItemUseModeFromUI_Statics
{
	struct Inventory_eventGetItemUseModeFromUI_Parms
	{
		int32 _team;
		EUseMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__team;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInventory_GetItemUseModeFromUI_Statics::NewProp__team = { "_team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetItemUseModeFromUI_Parms, _team), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AInventory_GetItemUseModeFromUI_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AInventory_GetItemUseModeFromUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetItemUseModeFromUI_Parms, ReturnValue), Z_Construct_UEnum_PartyJungle_EUseMode, METADATA_PARAMS(0, nullptr) }; // 2669168769
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInventory_GetItemUseModeFromUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_GetItemUseModeFromUI_Statics::NewProp__team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_GetItemUseModeFromUI_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_GetItemUseModeFromUI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_GetItemUseModeFromUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInventory_GetItemUseModeFromUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AInventory, nullptr, "GetItemUseModeFromUI", Z_Construct_UFunction_AInventory_GetItemUseModeFromUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_GetItemUseModeFromUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInventory_GetItemUseModeFromUI_Statics::Inventory_eventGetItemUseModeFromUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_GetItemUseModeFromUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInventory_GetItemUseModeFromUI_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AInventory_GetItemUseModeFromUI_Statics::Inventory_eventGetItemUseModeFromUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInventory_GetItemUseModeFromUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInventory_GetItemUseModeFromUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInventory::execGetItemUseModeFromUI)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__team);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EUseMode*)Z_Param__Result=P_THIS->GetItemUseModeFromUI(Z_Param__team);
	P_NATIVE_END;
}
// ********** End Class AInventory Function GetItemUseModeFromUI ***********************************

// ********** Begin Class AInventory Function GetSortedInventory ***********************************
struct Z_Construct_UFunction_AInventory_GetSortedInventory_Statics
{
	struct Inventory_eventGetSortedInventory_Parms
	{
		int32 _team;
		TArray<AItem*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__team;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInventory_GetSortedInventory_Statics::NewProp__team = { "_team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetSortedInventory_Parms, _team), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInventory_GetSortedInventory_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AInventory_GetSortedInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetSortedInventory_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInventory_GetSortedInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_GetSortedInventory_Statics::NewProp__team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_GetSortedInventory_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_GetSortedInventory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_GetSortedInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInventory_GetSortedInventory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AInventory, nullptr, "GetSortedInventory", Z_Construct_UFunction_AInventory_GetSortedInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_GetSortedInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInventory_GetSortedInventory_Statics::Inventory_eventGetSortedInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_GetSortedInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInventory_GetSortedInventory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AInventory_GetSortedInventory_Statics::Inventory_eventGetSortedInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInventory_GetSortedInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInventory_GetSortedInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInventory::execGetSortedInventory)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__team);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AItem*>*)Z_Param__Result=P_THIS->GetSortedInventory(Z_Param__team);
	P_NATIVE_END;
}
// ********** End Class AInventory Function GetSortedInventory *************************************

// ********** Begin Class AInventory Function SetInventoryPosition *********************************
struct Inventory_eventSetInventoryPosition_Parms
{
	AMinion* _minion;
};
static FName NAME_AInventory_SetInventoryPosition = FName(TEXT("SetInventoryPosition"));
void AInventory::SetInventoryPosition(AMinion* _minion)
{
	Inventory_eventSetInventoryPosition_Parms Parms;
	Parms._minion=_minion;
	UFunction* Func = FindFunctionChecked(NAME_AInventory_SetInventoryPosition);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AInventory_SetInventoryPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__minion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInventory_SetInventoryPosition_Statics::NewProp__minion = { "_minion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventSetInventoryPosition_Parms, _minion), Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInventory_SetInventoryPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_SetInventoryPosition_Statics::NewProp__minion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_SetInventoryPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInventory_SetInventoryPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AInventory, nullptr, "SetInventoryPosition", Z_Construct_UFunction_AInventory_SetInventoryPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_SetInventoryPosition_Statics::PropPointers), sizeof(Inventory_eventSetInventoryPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_SetInventoryPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInventory_SetInventoryPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Inventory_eventSetInventoryPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInventory_SetInventoryPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInventory_SetInventoryPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AInventory Function SetInventoryPosition ***********************************

// ********** Begin Class AInventory Function SetItemToSlot ****************************************
struct Inventory_eventSetItemToSlot_Parms
{
	int32 _slot;
	AItem* _item;
};
static FName NAME_AInventory_SetItemToSlot = FName(TEXT("SetItemToSlot"));
void AInventory::SetItemToSlot(int32 _slot, AItem* _item)
{
	Inventory_eventSetItemToSlot_Parms Parms;
	Parms._slot=_slot;
	Parms._item=_item;
	UFunction* Func = FindFunctionChecked(NAME_AInventory_SetItemToSlot);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AInventory_SetItemToSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__slot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInventory_SetItemToSlot_Statics::NewProp__slot = { "_slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventSetItemToSlot_Parms, _slot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInventory_SetItemToSlot_Statics::NewProp__item = { "_item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventSetItemToSlot_Parms, _item), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInventory_SetItemToSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_SetItemToSlot_Statics::NewProp__slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_SetItemToSlot_Statics::NewProp__item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_SetItemToSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInventory_SetItemToSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AInventory, nullptr, "SetItemToSlot", Z_Construct_UFunction_AInventory_SetItemToSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_SetItemToSlot_Statics::PropPointers), sizeof(Inventory_eventSetItemToSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_SetItemToSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInventory_SetItemToSlot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Inventory_eventSetItemToSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInventory_SetItemToSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInventory_SetItemToSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AInventory Function SetItemToSlot ******************************************

// ********** Begin Class AInventory Function SetSelectedItemFeedback ******************************
struct Inventory_eventSetSelectedItemFeedback_Parms
{
	int32 _slot;
};
static FName NAME_AInventory_SetSelectedItemFeedback = FName(TEXT("SetSelectedItemFeedback"));
void AInventory::SetSelectedItemFeedback(int32 _slot)
{
	Inventory_eventSetSelectedItemFeedback_Parms Parms;
	Parms._slot=_slot;
	UFunction* Func = FindFunctionChecked(NAME_AInventory_SetSelectedItemFeedback);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AInventory_SetSelectedItemFeedback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__slot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInventory_SetSelectedItemFeedback_Statics::NewProp__slot = { "_slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventSetSelectedItemFeedback_Parms, _slot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInventory_SetSelectedItemFeedback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_SetSelectedItemFeedback_Statics::NewProp__slot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_SetSelectedItemFeedback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInventory_SetSelectedItemFeedback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AInventory, nullptr, "SetSelectedItemFeedback", Z_Construct_UFunction_AInventory_SetSelectedItemFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_SetSelectedItemFeedback_Statics::PropPointers), sizeof(Inventory_eventSetSelectedItemFeedback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_SetSelectedItemFeedback_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInventory_SetSelectedItemFeedback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Inventory_eventSetSelectedItemFeedback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInventory_SetSelectedItemFeedback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInventory_SetSelectedItemFeedback_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AInventory Function SetSelectedItemFeedback ********************************

// ********** Begin Class AInventory Function SwitchInventoryVisibility ****************************
struct Inventory_eventSwitchInventoryVisibility_Parms
{
	bool _visible;
};
static FName NAME_AInventory_SwitchInventoryVisibility = FName(TEXT("SwitchInventoryVisibility"));
void AInventory::SwitchInventoryVisibility(bool _visible)
{
	Inventory_eventSwitchInventoryVisibility_Parms Parms;
	Parms._visible=_visible ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AInventory_SwitchInventoryVisibility);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AInventory_SwitchInventoryVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static void NewProp__visible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__visible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AInventory_SwitchInventoryVisibility_Statics::NewProp__visible_SetBit(void* Obj)
{
	((Inventory_eventSwitchInventoryVisibility_Parms*)Obj)->_visible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInventory_SwitchInventoryVisibility_Statics::NewProp__visible = { "_visible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventSwitchInventoryVisibility_Parms), &Z_Construct_UFunction_AInventory_SwitchInventoryVisibility_Statics::NewProp__visible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInventory_SwitchInventoryVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_SwitchInventoryVisibility_Statics::NewProp__visible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_SwitchInventoryVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInventory_SwitchInventoryVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AInventory, nullptr, "SwitchInventoryVisibility", Z_Construct_UFunction_AInventory_SwitchInventoryVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_SwitchInventoryVisibility_Statics::PropPointers), sizeof(Inventory_eventSwitchInventoryVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_SwitchInventoryVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInventory_SwitchInventoryVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Inventory_eventSwitchInventoryVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInventory_SwitchInventoryVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInventory_SwitchInventoryVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AInventory Function SwitchInventoryVisibility ******************************

// ********** Begin Class AInventory Function SwitchItemThrowPlayer ********************************
struct Z_Construct_UFunction_AInventory_SwitchItemThrowPlayer_Statics
{
	struct Inventory_eventSwitchItemThrowPlayer_Parms
	{
		int32 _direction;
		int32 _maxPlayers;
		bool _reset;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__direction;
	static const UECodeGen_Private::FIntPropertyParams NewProp__maxPlayers;
	static void NewProp__reset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__reset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInventory_SwitchItemThrowPlayer_Statics::NewProp__direction = { "_direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventSwitchItemThrowPlayer_Parms, _direction), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInventory_SwitchItemThrowPlayer_Statics::NewProp__maxPlayers = { "_maxPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventSwitchItemThrowPlayer_Parms, _maxPlayers), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AInventory_SwitchItemThrowPlayer_Statics::NewProp__reset_SetBit(void* Obj)
{
	((Inventory_eventSwitchItemThrowPlayer_Parms*)Obj)->_reset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInventory_SwitchItemThrowPlayer_Statics::NewProp__reset = { "_reset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventSwitchItemThrowPlayer_Parms), &Z_Construct_UFunction_AInventory_SwitchItemThrowPlayer_Statics::NewProp__reset_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInventory_SwitchItemThrowPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventSwitchItemThrowPlayer_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInventory_SwitchItemThrowPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_SwitchItemThrowPlayer_Statics::NewProp__direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_SwitchItemThrowPlayer_Statics::NewProp__maxPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_SwitchItemThrowPlayer_Statics::NewProp__reset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_SwitchItemThrowPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_SwitchItemThrowPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInventory_SwitchItemThrowPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AInventory, nullptr, "SwitchItemThrowPlayer", Z_Construct_UFunction_AInventory_SwitchItemThrowPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_SwitchItemThrowPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInventory_SwitchItemThrowPlayer_Statics::Inventory_eventSwitchItemThrowPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_SwitchItemThrowPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInventory_SwitchItemThrowPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AInventory_SwitchItemThrowPlayer_Statics::Inventory_eventSwitchItemThrowPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInventory_SwitchItemThrowPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInventory_SwitchItemThrowPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInventory::execSwitchItemThrowPlayer)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__direction);
	P_GET_PROPERTY(FIntProperty,Z_Param__maxPlayers);
	P_GET_UBOOL(Z_Param__reset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SwitchItemThrowPlayer(Z_Param__direction,Z_Param__maxPlayers,Z_Param__reset);
	P_NATIVE_END;
}
// ********** End Class AInventory Function SwitchItemThrowPlayer **********************************

// ********** Begin Class AInventory Function SwitchSelectedItemVisibility *************************
struct Inventory_eventSwitchSelectedItemVisibility_Parms
{
	bool _visible;
};
static FName NAME_AInventory_SwitchSelectedItemVisibility = FName(TEXT("SwitchSelectedItemVisibility"));
void AInventory::SwitchSelectedItemVisibility(bool _visible)
{
	Inventory_eventSwitchSelectedItemVisibility_Parms Parms;
	Parms._visible=_visible ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AInventory_SwitchSelectedItemVisibility);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AInventory_SwitchSelectedItemVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static void NewProp__visible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__visible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AInventory_SwitchSelectedItemVisibility_Statics::NewProp__visible_SetBit(void* Obj)
{
	((Inventory_eventSwitchSelectedItemVisibility_Parms*)Obj)->_visible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInventory_SwitchSelectedItemVisibility_Statics::NewProp__visible = { "_visible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventSwitchSelectedItemVisibility_Parms), &Z_Construct_UFunction_AInventory_SwitchSelectedItemVisibility_Statics::NewProp__visible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInventory_SwitchSelectedItemVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_SwitchSelectedItemVisibility_Statics::NewProp__visible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_SwitchSelectedItemVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInventory_SwitchSelectedItemVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AInventory, nullptr, "SwitchSelectedItemVisibility", Z_Construct_UFunction_AInventory_SwitchSelectedItemVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_SwitchSelectedItemVisibility_Statics::PropPointers), sizeof(Inventory_eventSwitchSelectedItemVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_SwitchSelectedItemVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInventory_SwitchSelectedItemVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Inventory_eventSwitchSelectedItemVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInventory_SwitchSelectedItemVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInventory_SwitchSelectedItemVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AInventory Function SwitchSelectedItemVisibility ***************************

// ********** Begin Class AInventory Function UseItem **********************************************
struct Z_Construct_UFunction_AInventory_UseItem_Statics
{
	struct Inventory_eventUseItem_Parms
	{
		AItem* _item;
		AMinion* _minion;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__minion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInventory_UseItem_Statics::NewProp__item = { "_item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventUseItem_Parms, _item), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInventory_UseItem_Statics::NewProp__minion = { "_minion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventUseItem_Parms, _minion), Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInventory_UseItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_UseItem_Statics::NewProp__item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_UseItem_Statics::NewProp__minion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_UseItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInventory_UseItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AInventory, nullptr, "UseItem", Z_Construct_UFunction_AInventory_UseItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_UseItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInventory_UseItem_Statics::Inventory_eventUseItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_UseItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInventory_UseItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AInventory_UseItem_Statics::Inventory_eventUseItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInventory_UseItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInventory_UseItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInventory::execUseItem)
{
	P_GET_OBJECT(AItem,Z_Param__item);
	P_GET_OBJECT(AMinion,Z_Param__minion);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UseItem(Z_Param__item,Z_Param__minion);
	P_NATIVE_END;
}
// ********** End Class AInventory Function UseItem ************************************************

// ********** Begin Class AInventory Function UseItemFromUI ****************************************
struct Z_Construct_UFunction_AInventory_UseItemFromUI_Statics
{
	struct Inventory_eventUseItemFromUI_Parms
	{
		AMinion* _minion;
		bool _instantUse;
		int32 _throwTeam;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__minion;
	static void NewProp__instantUse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__instantUse;
	static const UECodeGen_Private::FIntPropertyParams NewProp__throwTeam;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInventory_UseItemFromUI_Statics::NewProp__minion = { "_minion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventUseItemFromUI_Parms, _minion), Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AInventory_UseItemFromUI_Statics::NewProp__instantUse_SetBit(void* Obj)
{
	((Inventory_eventUseItemFromUI_Parms*)Obj)->_instantUse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInventory_UseItemFromUI_Statics::NewProp__instantUse = { "_instantUse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventUseItemFromUI_Parms), &Z_Construct_UFunction_AInventory_UseItemFromUI_Statics::NewProp__instantUse_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInventory_UseItemFromUI_Statics::NewProp__throwTeam = { "_throwTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventUseItemFromUI_Parms, _throwTeam), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AInventory_UseItemFromUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventUseItemFromUI_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInventory_UseItemFromUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventUseItemFromUI_Parms), &Z_Construct_UFunction_AInventory_UseItemFromUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInventory_UseItemFromUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_UseItemFromUI_Statics::NewProp__minion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_UseItemFromUI_Statics::NewProp__instantUse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_UseItemFromUI_Statics::NewProp__throwTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_UseItemFromUI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_UseItemFromUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInventory_UseItemFromUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AInventory, nullptr, "UseItemFromUI", Z_Construct_UFunction_AInventory_UseItemFromUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_UseItemFromUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInventory_UseItemFromUI_Statics::Inventory_eventUseItemFromUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_UseItemFromUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInventory_UseItemFromUI_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AInventory_UseItemFromUI_Statics::Inventory_eventUseItemFromUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInventory_UseItemFromUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInventory_UseItemFromUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInventory::execUseItemFromUI)
{
	P_GET_OBJECT(AMinion,Z_Param__minion);
	P_GET_UBOOL(Z_Param__instantUse);
	P_GET_PROPERTY(FIntProperty,Z_Param__throwTeam);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UseItemFromUI(Z_Param__minion,Z_Param__instantUse,Z_Param__throwTeam);
	P_NATIVE_END;
}
// ********** End Class AInventory Function UseItemFromUI ******************************************

// ********** Begin Class AInventory ***************************************************************
void AInventory::StaticRegisterNativesAInventory()
{
	UClass* Class = AInventory::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItem", &AInventory::execAddItem },
		{ "CheckIfIsEmptySpace", &AInventory::execCheckIfIsEmptySpace },
		{ "CheckIfItemExists", &AInventory::execCheckIfItemExists },
		{ "CheckIfThereIsSpaceToStoreItem", &AInventory::execCheckIfThereIsSpaceToStoreItem },
		{ "GetItemUseModeFromUI", &AInventory::execGetItemUseModeFromUI },
		{ "GetSortedInventory", &AInventory::execGetSortedInventory },
		{ "SwitchItemThrowPlayer", &AInventory::execSwitchItemThrowPlayer },
		{ "UseItem", &AInventory::execUseItem },
		{ "UseItemFromUI", &AInventory::execUseItemFromUI },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AInventory;
UClass* AInventory::GetPrivateStaticClass()
{
	using TClass = AInventory;
	if (!Z_Registration_Info_UClass_AInventory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inventory"),
			Z_Registration_Info_UClass_AInventory.InnerSingleton,
			StaticRegisterNativesAInventory,
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
	return Z_Registration_Info_UClass_AInventory.InnerSingleton;
}
UClass* Z_Construct_UClass_AInventory_NoRegister()
{
	return AInventory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Player/Inventory/Inventory.h" },
		{ "ModuleRelativePath", "Player/Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryIndex_MetaData[] = {
		{ "ModuleRelativePath", "Player/Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerThrowIndex_MetaData[] = {
		{ "ModuleRelativePath", "Player/Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmptyItemDice_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Player/Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmptyItemMisc_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Player/Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiceItem_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Player/Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallItem_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Player/Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhistleItem_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Player/Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReducedDiceTrapItem_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Player/Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortedInventory_MetaData[] = {
		{ "ModuleRelativePath", "Player/Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InventoryIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerThrowIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EmptyItemDice;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EmptyItemMisc;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DiceItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WallItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WhistleItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReducedDiceTrapItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SortedInventory_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SortedInventory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AInventory_AddItem, "AddItem" }, // 2954105088
		{ &Z_Construct_UFunction_AInventory_CheckIfIsEmptySpace, "CheckIfIsEmptySpace" }, // 196549424
		{ &Z_Construct_UFunction_AInventory_CheckIfItemExists, "CheckIfItemExists" }, // 3392324037
		{ &Z_Construct_UFunction_AInventory_CheckIfThereIsSpaceToStoreItem, "CheckIfThereIsSpaceToStoreItem" }, // 2191674630
		{ &Z_Construct_UFunction_AInventory_GetItemUseModeFromUI, "GetItemUseModeFromUI" }, // 303606112
		{ &Z_Construct_UFunction_AInventory_GetSortedInventory, "GetSortedInventory" }, // 4139357963
		{ &Z_Construct_UFunction_AInventory_SetInventoryPosition, "SetInventoryPosition" }, // 736717753
		{ &Z_Construct_UFunction_AInventory_SetItemToSlot, "SetItemToSlot" }, // 257365936
		{ &Z_Construct_UFunction_AInventory_SetSelectedItemFeedback, "SetSelectedItemFeedback" }, // 2181890398
		{ &Z_Construct_UFunction_AInventory_SwitchInventoryVisibility, "SwitchInventoryVisibility" }, // 1937366380
		{ &Z_Construct_UFunction_AInventory_SwitchItemThrowPlayer, "SwitchItemThrowPlayer" }, // 3449967652
		{ &Z_Construct_UFunction_AInventory_SwitchSelectedItemVisibility, "SwitchSelectedItemVisibility" }, // 1079413649
		{ &Z_Construct_UFunction_AInventory_UseItem, "UseItem" }, // 1955862155
		{ &Z_Construct_UFunction_AInventory_UseItemFromUI, "UseItemFromUI" }, // 700971113
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInventory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AInventory_Statics::NewProp_InventoryIndex = { "InventoryIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInventory, InventoryIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryIndex_MetaData), NewProp_InventoryIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AInventory_Statics::NewProp_PlayerThrowIndex = { "PlayerThrowIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInventory, PlayerThrowIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerThrowIndex_MetaData), NewProp_PlayerThrowIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInventory_Statics::NewProp_EmptyItemDice = { "EmptyItemDice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInventory, EmptyItemDice), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmptyItemDice_MetaData), NewProp_EmptyItemDice_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInventory_Statics::NewProp_EmptyItemMisc = { "EmptyItemMisc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInventory, EmptyItemMisc), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmptyItemMisc_MetaData), NewProp_EmptyItemMisc_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInventory_Statics::NewProp_DiceItem = { "DiceItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInventory, DiceItem), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiceItem_MetaData), NewProp_DiceItem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInventory_Statics::NewProp_WallItem = { "WallItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInventory, WallItem), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallItem_MetaData), NewProp_WallItem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInventory_Statics::NewProp_WhistleItem = { "WhistleItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInventory, WhistleItem), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhistleItem_MetaData), NewProp_WhistleItem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInventory_Statics::NewProp_ReducedDiceTrapItem = { "ReducedDiceTrapItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInventory, ReducedDiceTrapItem), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReducedDiceTrapItem_MetaData), NewProp_ReducedDiceTrapItem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInventory_Statics::NewProp_SortedInventory_Inner = { "SortedInventory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AInventory_Statics::NewProp_SortedInventory = { "SortedInventory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInventory, SortedInventory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortedInventory_MetaData), NewProp_SortedInventory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventory_Statics::NewProp_InventoryIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventory_Statics::NewProp_PlayerThrowIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventory_Statics::NewProp_EmptyItemDice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventory_Statics::NewProp_EmptyItemMisc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventory_Statics::NewProp_DiceItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventory_Statics::NewProp_WallItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventory_Statics::NewProp_WhistleItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventory_Statics::NewProp_ReducedDiceTrapItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventory_Statics::NewProp_SortedInventory_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventory_Statics::NewProp_SortedInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInventory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInventory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInventory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInventory_Statics::ClassParams = {
	&AInventory::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AInventory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AInventory_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInventory_Statics::Class_MetaDataParams), Z_Construct_UClass_AInventory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInventory()
{
	if (!Z_Registration_Info_UClass_AInventory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInventory.OuterSingleton, Z_Construct_UClass_AInventory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInventory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInventory);
AInventory::~AInventory() {}
// ********** End Class AInventory *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Inventory_Inventory_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInventory, AInventory::StaticClass, TEXT("AInventory"), &Z_Registration_Info_UClass_AInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInventory), 1859270807U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Inventory_Inventory_h__Script_PartyJungle_1658291955(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Inventory_Inventory_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Inventory_Inventory_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
