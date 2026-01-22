// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Map/SquareShop.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSquareShop() {}

// ********** Begin Cross Module References ********************************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_AItem_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ASquare();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ASquareShop();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ASquareShop_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASquareShop Function GetCurrentShopItem **********************************
struct Z_Construct_UFunction_ASquareShop_GetCurrentShopItem_Statics
{
	struct SquareShop_eventGetCurrentShopItem_Parms
	{
		AItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Map/SquareShop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASquareShop_GetCurrentShopItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SquareShop_eventGetCurrentShopItem_Parms, ReturnValue), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASquareShop_GetCurrentShopItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquareShop_GetCurrentShopItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquareShop_GetCurrentShopItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASquareShop_GetCurrentShopItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASquareShop, nullptr, "GetCurrentShopItem", Z_Construct_UFunction_ASquareShop_GetCurrentShopItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquareShop_GetCurrentShopItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASquareShop_GetCurrentShopItem_Statics::SquareShop_eventGetCurrentShopItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquareShop_GetCurrentShopItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASquareShop_GetCurrentShopItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASquareShop_GetCurrentShopItem_Statics::SquareShop_eventGetCurrentShopItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASquareShop_GetCurrentShopItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASquareShop_GetCurrentShopItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASquareShop::execGetCurrentShopItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AItem**)Z_Param__Result=P_THIS->GetCurrentShopItem();
	P_NATIVE_END;
}
// ********** End Class ASquareShop Function GetCurrentShopItem ************************************

// ********** Begin Class ASquareShop Function SetCurrentShopItem **********************************
struct SquareShop_eventSetCurrentShopItem_Parms
{
	AItem* _item;
};
static FName NAME_ASquareShop_SetCurrentShopItem = FName(TEXT("SetCurrentShopItem"));
void ASquareShop::SetCurrentShopItem(AItem* _item)
{
	SquareShop_eventSetCurrentShopItem_Parms Parms;
	Parms._item=_item;
	UFunction* Func = FindFunctionChecked(NAME_ASquareShop_SetCurrentShopItem);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ASquareShop_SetCurrentShopItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Map/SquareShop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASquareShop_SetCurrentShopItem_Statics::NewProp__item = { "_item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SquareShop_eventSetCurrentShopItem_Parms, _item), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASquareShop_SetCurrentShopItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquareShop_SetCurrentShopItem_Statics::NewProp__item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquareShop_SetCurrentShopItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASquareShop_SetCurrentShopItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASquareShop, nullptr, "SetCurrentShopItem", Z_Construct_UFunction_ASquareShop_SetCurrentShopItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquareShop_SetCurrentShopItem_Statics::PropPointers), sizeof(SquareShop_eventSetCurrentShopItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquareShop_SetCurrentShopItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASquareShop_SetCurrentShopItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SquareShop_eventSetCurrentShopItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASquareShop_SetCurrentShopItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASquareShop_SetCurrentShopItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ASquareShop Function SetCurrentShopItem ************************************

// ********** Begin Class ASquareShop Function SwitchShop ******************************************
struct Z_Construct_UFunction_ASquareShop_SwitchShop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Map/SquareShop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASquareShop_SwitchShop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASquareShop, nullptr, "SwitchShop", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquareShop_SwitchShop_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASquareShop_SwitchShop_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASquareShop_SwitchShop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASquareShop_SwitchShop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASquareShop::execSwitchShop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchShop();
	P_NATIVE_END;
}
// ********** End Class ASquareShop Function SwitchShop ********************************************

// ********** Begin Class ASquareShop Function SwitchShopItem **************************************
struct Z_Construct_UFunction_ASquareShop_SwitchShopItem_Statics
{
	struct SquareShop_eventSwitchShopItem_Parms
	{
		int32 _direction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Map/SquareShop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASquareShop_SwitchShopItem_Statics::NewProp__direction = { "_direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SquareShop_eventSwitchShopItem_Parms, _direction), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASquareShop_SwitchShopItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquareShop_SwitchShopItem_Statics::NewProp__direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquareShop_SwitchShopItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASquareShop_SwitchShopItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASquareShop, nullptr, "SwitchShopItem", Z_Construct_UFunction_ASquareShop_SwitchShopItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquareShop_SwitchShopItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASquareShop_SwitchShopItem_Statics::SquareShop_eventSwitchShopItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquareShop_SwitchShopItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASquareShop_SwitchShopItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASquareShop_SwitchShopItem_Statics::SquareShop_eventSwitchShopItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASquareShop_SwitchShopItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASquareShop_SwitchShopItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASquareShop::execSwitchShopItem)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchShopItem(Z_Param__direction);
	P_NATIVE_END;
}
// ********** End Class ASquareShop Function SwitchShopItem ****************************************

// ********** Begin Class ASquareShop Function SwitchShopVisibility ********************************
struct SquareShop_eventSwitchShopVisibility_Parms
{
	bool _shopEnabled;
};
static FName NAME_ASquareShop_SwitchShopVisibility = FName(TEXT("SwitchShopVisibility"));
void ASquareShop::SwitchShopVisibility(bool _shopEnabled)
{
	SquareShop_eventSwitchShopVisibility_Parms Parms;
	Parms._shopEnabled=_shopEnabled ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_ASquareShop_SwitchShopVisibility);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ASquareShop_SwitchShopVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Map/SquareShop.h" },
	};
#endif // WITH_METADATA
	static void NewProp__shopEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__shopEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASquareShop_SwitchShopVisibility_Statics::NewProp__shopEnabled_SetBit(void* Obj)
{
	((SquareShop_eventSwitchShopVisibility_Parms*)Obj)->_shopEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASquareShop_SwitchShopVisibility_Statics::NewProp__shopEnabled = { "_shopEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SquareShop_eventSwitchShopVisibility_Parms), &Z_Construct_UFunction_ASquareShop_SwitchShopVisibility_Statics::NewProp__shopEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASquareShop_SwitchShopVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquareShop_SwitchShopVisibility_Statics::NewProp__shopEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquareShop_SwitchShopVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASquareShop_SwitchShopVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASquareShop, nullptr, "SwitchShopVisibility", Z_Construct_UFunction_ASquareShop_SwitchShopVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquareShop_SwitchShopVisibility_Statics::PropPointers), sizeof(SquareShop_eventSwitchShopVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquareShop_SwitchShopVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASquareShop_SwitchShopVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SquareShop_eventSwitchShopVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASquareShop_SwitchShopVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASquareShop_SwitchShopVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ASquareShop Function SwitchShopVisibility **********************************

// ********** Begin Class ASquareShop **************************************************************
void ASquareShop::StaticRegisterNativesASquareShop()
{
	UClass* Class = ASquareShop::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentShopItem", &ASquareShop::execGetCurrentShopItem },
		{ "SwitchShop", &ASquareShop::execSwitchShop },
		{ "SwitchShopItem", &ASquareShop::execSwitchShopItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASquareShop;
UClass* ASquareShop::GetPrivateStaticClass()
{
	using TClass = ASquareShop;
	if (!Z_Registration_Info_UClass_ASquareShop.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SquareShop"),
			Z_Registration_Info_UClass_ASquareShop.InnerSingleton,
			StaticRegisterNativesASquareShop,
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
	return Z_Registration_Info_UClass_ASquareShop.InnerSingleton;
}
UClass* Z_Construct_UClass_ASquareShop_NoRegister()
{
	return ASquareShop::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASquareShop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Map/SquareShop.h" },
		{ "ModuleRelativePath", "Map/SquareShop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemsInShop_MetaData[] = {
		{ "Category", "SquareShop" },
		{ "ModuleRelativePath", "Map/SquareShop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentItemStored_MetaData[] = {
		{ "ModuleRelativePath", "Map/SquareShop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShopIndex_MetaData[] = {
		{ "ModuleRelativePath", "Map/SquareShop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShopEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Map/SquareShop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemsInShop_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemsInShop;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentItemStored;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShopIndex;
	static void NewProp_ShopEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShopEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASquareShop_GetCurrentShopItem, "GetCurrentShopItem" }, // 2358969309
		{ &Z_Construct_UFunction_ASquareShop_SetCurrentShopItem, "SetCurrentShopItem" }, // 2984434886
		{ &Z_Construct_UFunction_ASquareShop_SwitchShop, "SwitchShop" }, // 2541602414
		{ &Z_Construct_UFunction_ASquareShop_SwitchShopItem, "SwitchShopItem" }, // 3690332948
		{ &Z_Construct_UFunction_ASquareShop_SwitchShopVisibility, "SwitchShopVisibility" }, // 1272472205
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASquareShop>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASquareShop_Statics::NewProp_ItemsInShop_Inner = { "ItemsInShop", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASquareShop_Statics::NewProp_ItemsInShop = { "ItemsInShop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASquareShop, ItemsInShop), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemsInShop_MetaData), NewProp_ItemsInShop_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASquareShop_Statics::NewProp_CurrentItemStored = { "CurrentItemStored", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASquareShop, CurrentItemStored), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentItemStored_MetaData), NewProp_CurrentItemStored_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASquareShop_Statics::NewProp_ShopIndex = { "ShopIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASquareShop, ShopIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShopIndex_MetaData), NewProp_ShopIndex_MetaData) };
void Z_Construct_UClass_ASquareShop_Statics::NewProp_ShopEnabled_SetBit(void* Obj)
{
	((ASquareShop*)Obj)->ShopEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASquareShop_Statics::NewProp_ShopEnabled = { "ShopEnabled", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASquareShop), &Z_Construct_UClass_ASquareShop_Statics::NewProp_ShopEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShopEnabled_MetaData), NewProp_ShopEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASquareShop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquareShop_Statics::NewProp_ItemsInShop_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquareShop_Statics::NewProp_ItemsInShop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquareShop_Statics::NewProp_CurrentItemStored,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquareShop_Statics::NewProp_ShopIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquareShop_Statics::NewProp_ShopEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASquareShop_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASquareShop_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASquare,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASquareShop_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASquareShop_Statics::ClassParams = {
	&ASquareShop::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASquareShop_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASquareShop_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASquareShop_Statics::Class_MetaDataParams), Z_Construct_UClass_ASquareShop_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASquareShop()
{
	if (!Z_Registration_Info_UClass_ASquareShop.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASquareShop.OuterSingleton, Z_Construct_UClass_ASquareShop_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASquareShop.OuterSingleton;
}
ASquareShop::ASquareShop() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASquareShop);
ASquareShop::~ASquareShop() {}
// ********** End Class ASquareShop ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_SquareShop_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASquareShop, ASquareShop::StaticClass, TEXT("ASquareShop"), &Z_Registration_Info_UClass_ASquareShop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASquareShop), 2863810844U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_SquareShop_h__Script_PartyJungle_215198890(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_SquareShop_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_SquareShop_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
