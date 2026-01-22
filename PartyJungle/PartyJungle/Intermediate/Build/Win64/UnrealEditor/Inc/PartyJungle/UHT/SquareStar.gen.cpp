// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Map/SquareStar.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSquareStar() {}

// ********** Begin Cross Module References ********************************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_ASquare();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ASquareStar();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ASquareStar_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASquareStar Function IsEnabledStar ***************************************
struct Z_Construct_UFunction_ASquareStar_IsEnabledStar_Statics
{
	struct SquareStar_eventIsEnabledStar_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Map/SquareStar.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASquareStar_IsEnabledStar_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SquareStar_eventIsEnabledStar_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASquareStar_IsEnabledStar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SquareStar_eventIsEnabledStar_Parms), &Z_Construct_UFunction_ASquareStar_IsEnabledStar_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASquareStar_IsEnabledStar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquareStar_IsEnabledStar_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquareStar_IsEnabledStar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASquareStar_IsEnabledStar_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASquareStar, nullptr, "IsEnabledStar", Z_Construct_UFunction_ASquareStar_IsEnabledStar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquareStar_IsEnabledStar_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASquareStar_IsEnabledStar_Statics::SquareStar_eventIsEnabledStar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquareStar_IsEnabledStar_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASquareStar_IsEnabledStar_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASquareStar_IsEnabledStar_Statics::SquareStar_eventIsEnabledStar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASquareStar_IsEnabledStar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASquareStar_IsEnabledStar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASquareStar::execIsEnabledStar)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEnabledStar();
	P_NATIVE_END;
}
// ********** End Class ASquareStar Function IsEnabledStar *****************************************

// ********** Begin Class ASquareStar Function SwitchStar ******************************************
struct Z_Construct_UFunction_ASquareStar_SwitchStar_Statics
{
	struct SquareStar_eventSwitchStar_Parms
	{
		bool _enabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Map/SquareStar.h" },
	};
#endif // WITH_METADATA
	static void NewProp__enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__enabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASquareStar_SwitchStar_Statics::NewProp__enabled_SetBit(void* Obj)
{
	((SquareStar_eventSwitchStar_Parms*)Obj)->_enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASquareStar_SwitchStar_Statics::NewProp__enabled = { "_enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SquareStar_eventSwitchStar_Parms), &Z_Construct_UFunction_ASquareStar_SwitchStar_Statics::NewProp__enabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASquareStar_SwitchStar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquareStar_SwitchStar_Statics::NewProp__enabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquareStar_SwitchStar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASquareStar_SwitchStar_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASquareStar, nullptr, "SwitchStar", Z_Construct_UFunction_ASquareStar_SwitchStar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquareStar_SwitchStar_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASquareStar_SwitchStar_Statics::SquareStar_eventSwitchStar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquareStar_SwitchStar_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASquareStar_SwitchStar_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASquareStar_SwitchStar_Statics::SquareStar_eventSwitchStar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASquareStar_SwitchStar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASquareStar_SwitchStar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASquareStar::execSwitchStar)
{
	P_GET_UBOOL(Z_Param__enabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchStar(Z_Param__enabled);
	P_NATIVE_END;
}
// ********** End Class ASquareStar Function SwitchStar ********************************************

// ********** Begin Class ASquareStar Function SwitchStarVisibility ********************************
struct SquareStar_eventSwitchStarVisibility_Parms
{
	bool _visibility;
};
static FName NAME_ASquareStar_SwitchStarVisibility = FName(TEXT("SwitchStarVisibility"));
void ASquareStar::SwitchStarVisibility(bool _visibility)
{
	SquareStar_eventSwitchStarVisibility_Parms Parms;
	Parms._visibility=_visibility ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_ASquareStar_SwitchStarVisibility);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ASquareStar_SwitchStarVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Square Functions" },
		{ "ModuleRelativePath", "Map/SquareStar.h" },
	};
#endif // WITH_METADATA
	static void NewProp__visibility_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__visibility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASquareStar_SwitchStarVisibility_Statics::NewProp__visibility_SetBit(void* Obj)
{
	((SquareStar_eventSwitchStarVisibility_Parms*)Obj)->_visibility = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASquareStar_SwitchStarVisibility_Statics::NewProp__visibility = { "_visibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SquareStar_eventSwitchStarVisibility_Parms), &Z_Construct_UFunction_ASquareStar_SwitchStarVisibility_Statics::NewProp__visibility_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASquareStar_SwitchStarVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquareStar_SwitchStarVisibility_Statics::NewProp__visibility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquareStar_SwitchStarVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASquareStar_SwitchStarVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASquareStar, nullptr, "SwitchStarVisibility", Z_Construct_UFunction_ASquareStar_SwitchStarVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquareStar_SwitchStarVisibility_Statics::PropPointers), sizeof(SquareStar_eventSwitchStarVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASquareStar_SwitchStarVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASquareStar_SwitchStarVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SquareStar_eventSwitchStarVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASquareStar_SwitchStarVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASquareStar_SwitchStarVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ASquareStar Function SwitchStarVisibility **********************************

// ********** Begin Class ASquareStar **************************************************************
void ASquareStar::StaticRegisterNativesASquareStar()
{
	UClass* Class = ASquareStar::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsEnabledStar", &ASquareStar::execIsEnabledStar },
		{ "SwitchStar", &ASquareStar::execSwitchStar },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASquareStar;
UClass* ASquareStar::GetPrivateStaticClass()
{
	using TClass = ASquareStar;
	if (!Z_Registration_Info_UClass_ASquareStar.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SquareStar"),
			Z_Registration_Info_UClass_ASquareStar.InnerSingleton,
			StaticRegisterNativesASquareStar,
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
	return Z_Registration_Info_UClass_ASquareStar.InnerSingleton;
}
UClass* Z_Construct_UClass_ASquareStar_NoRegister()
{
	return ASquareStar::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASquareStar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Map/SquareStar.h" },
		{ "ModuleRelativePath", "Map/SquareStar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShopEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Map/SquareStar.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ShopEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShopEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASquareStar_IsEnabledStar, "IsEnabledStar" }, // 1850855258
		{ &Z_Construct_UFunction_ASquareStar_SwitchStar, "SwitchStar" }, // 1259204986
		{ &Z_Construct_UFunction_ASquareStar_SwitchStarVisibility, "SwitchStarVisibility" }, // 1662692409
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASquareStar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ASquareStar_Statics::NewProp_ShopEnabled_SetBit(void* Obj)
{
	((ASquareStar*)Obj)->ShopEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASquareStar_Statics::NewProp_ShopEnabled = { "ShopEnabled", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASquareStar), &Z_Construct_UClass_ASquareStar_Statics::NewProp_ShopEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShopEnabled_MetaData), NewProp_ShopEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASquareStar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquareStar_Statics::NewProp_ShopEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASquareStar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASquareStar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASquare,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASquareStar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASquareStar_Statics::ClassParams = {
	&ASquareStar::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASquareStar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASquareStar_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASquareStar_Statics::Class_MetaDataParams), Z_Construct_UClass_ASquareStar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASquareStar()
{
	if (!Z_Registration_Info_UClass_ASquareStar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASquareStar.OuterSingleton, Z_Construct_UClass_ASquareStar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASquareStar.OuterSingleton;
}
ASquareStar::ASquareStar() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASquareStar);
ASquareStar::~ASquareStar() {}
// ********** End Class ASquareStar ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_SquareStar_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASquareStar, ASquareStar::StaticClass, TEXT("ASquareStar"), &Z_Registration_Info_UClass_ASquareStar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASquareStar), 2027192515U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_SquareStar_h__Script_PartyJungle_2680842017(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_SquareStar_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_SquareStar_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
