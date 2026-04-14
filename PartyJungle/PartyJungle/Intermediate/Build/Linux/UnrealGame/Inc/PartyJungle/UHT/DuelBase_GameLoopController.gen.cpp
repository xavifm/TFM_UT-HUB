// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Controllers/GameLoopControllers/DuelBase_GameLoopController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDuelBase_GameLoopController() {}

// ********** Begin Cross Module References ********************************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_ADuelBase_GameLoopController();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ADuelBase_GameLoopController_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AGameLoopControllerBase();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADuelBase_GameLoopController Function CloseDuelMenu **********************
struct Z_Construct_UFunction_ADuelBase_GameLoopController_CloseDuelMenu_Statics
{
	struct DuelBase_GameLoopController_eventCloseDuelMenu_Parms
	{
		bool a_EndTurn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Closes the Duel Menu\n\x09 * @param a_EndTurn True if its the last turn.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/GameLoopControllers/DuelBase_GameLoopController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Closes the Duel Menu\n@param a_EndTurn True if its the last turn." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_a_EndTurn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_a_EndTurn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ADuelBase_GameLoopController_CloseDuelMenu_Statics::NewProp_a_EndTurn_SetBit(void* Obj)
{
	((DuelBase_GameLoopController_eventCloseDuelMenu_Parms*)Obj)->a_EndTurn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADuelBase_GameLoopController_CloseDuelMenu_Statics::NewProp_a_EndTurn = { "a_EndTurn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DuelBase_GameLoopController_eventCloseDuelMenu_Parms), &Z_Construct_UFunction_ADuelBase_GameLoopController_CloseDuelMenu_Statics::NewProp_a_EndTurn_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADuelBase_GameLoopController_CloseDuelMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelBase_GameLoopController_CloseDuelMenu_Statics::NewProp_a_EndTurn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelBase_GameLoopController_CloseDuelMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADuelBase_GameLoopController_CloseDuelMenu_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADuelBase_GameLoopController, nullptr, "CloseDuelMenu", Z_Construct_UFunction_ADuelBase_GameLoopController_CloseDuelMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelBase_GameLoopController_CloseDuelMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADuelBase_GameLoopController_CloseDuelMenu_Statics::DuelBase_GameLoopController_eventCloseDuelMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelBase_GameLoopController_CloseDuelMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADuelBase_GameLoopController_CloseDuelMenu_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADuelBase_GameLoopController_CloseDuelMenu_Statics::DuelBase_GameLoopController_eventCloseDuelMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADuelBase_GameLoopController_CloseDuelMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADuelBase_GameLoopController_CloseDuelMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADuelBase_GameLoopController::execCloseDuelMenu)
{
	P_GET_UBOOL(Z_Param_a_EndTurn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseDuelMenu(Z_Param_a_EndTurn);
	P_NATIVE_END;
}
// ********** End Class ADuelBase_GameLoopController Function CloseDuelMenu ************************

// ********** Begin Class ADuelBase_GameLoopController Function FinishDuel *************************
struct Z_Construct_UFunction_ADuelBase_GameLoopController_FinishDuel_Statics
{
	struct DuelBase_GameLoopController_eventFinishDuel_Parms
	{
		int32 a_Winner;
		int32 a_DuelIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Duel Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Finishes the Duel.\n\x09 * @param a_Winner Id of the Winner player.\n\x09 * @param a_DuelIndex Id of the Duel to finish.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/GameLoopControllers/DuelBase_GameLoopController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finishes the Duel.\n@param a_Winner Id of the Winner player.\n@param a_DuelIndex Id of the Duel to finish." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_Winner;
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_DuelIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADuelBase_GameLoopController_FinishDuel_Statics::NewProp_a_Winner = { "a_Winner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DuelBase_GameLoopController_eventFinishDuel_Parms, a_Winner), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADuelBase_GameLoopController_FinishDuel_Statics::NewProp_a_DuelIndex = { "a_DuelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DuelBase_GameLoopController_eventFinishDuel_Parms, a_DuelIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADuelBase_GameLoopController_FinishDuel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelBase_GameLoopController_FinishDuel_Statics::NewProp_a_Winner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADuelBase_GameLoopController_FinishDuel_Statics::NewProp_a_DuelIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelBase_GameLoopController_FinishDuel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADuelBase_GameLoopController_FinishDuel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADuelBase_GameLoopController, nullptr, "FinishDuel", Z_Construct_UFunction_ADuelBase_GameLoopController_FinishDuel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelBase_GameLoopController_FinishDuel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADuelBase_GameLoopController_FinishDuel_Statics::DuelBase_GameLoopController_eventFinishDuel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADuelBase_GameLoopController_FinishDuel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADuelBase_GameLoopController_FinishDuel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADuelBase_GameLoopController_FinishDuel_Statics::DuelBase_GameLoopController_eventFinishDuel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADuelBase_GameLoopController_FinishDuel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADuelBase_GameLoopController_FinishDuel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADuelBase_GameLoopController::execFinishDuel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_a_Winner);
	P_GET_PROPERTY(FIntProperty,Z_Param_a_DuelIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishDuel(Z_Param_a_Winner,Z_Param_a_DuelIndex);
	P_NATIVE_END;
}
// ********** End Class ADuelBase_GameLoopController Function FinishDuel ***************************

// ********** Begin Class ADuelBase_GameLoopController *********************************************
void ADuelBase_GameLoopController::StaticRegisterNativesADuelBase_GameLoopController()
{
	UClass* Class = ADuelBase_GameLoopController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CloseDuelMenu", &ADuelBase_GameLoopController::execCloseDuelMenu },
		{ "FinishDuel", &ADuelBase_GameLoopController::execFinishDuel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADuelBase_GameLoopController;
UClass* ADuelBase_GameLoopController::GetPrivateStaticClass()
{
	using TClass = ADuelBase_GameLoopController;
	if (!Z_Registration_Info_UClass_ADuelBase_GameLoopController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DuelBase_GameLoopController"),
			Z_Registration_Info_UClass_ADuelBase_GameLoopController.InnerSingleton,
			StaticRegisterNativesADuelBase_GameLoopController,
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
	return Z_Registration_Info_UClass_ADuelBase_GameLoopController.InnerSingleton;
}
UClass* Z_Construct_UClass_ADuelBase_GameLoopController_NoRegister()
{
	return ADuelBase_GameLoopController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADuelBase_GameLoopController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base for GameLoop Duel Controllers.\n */" },
#endif
		{ "IncludePath", "Controllers/GameLoopControllers/DuelBase_GameLoopController.h" },
		{ "ModuleRelativePath", "Controllers/GameLoopControllers/DuelBase_GameLoopController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base for GameLoop Duel Controllers." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADuelBase_GameLoopController_CloseDuelMenu, "CloseDuelMenu" }, // 2803150266
		{ &Z_Construct_UFunction_ADuelBase_GameLoopController_FinishDuel, "FinishDuel" }, // 2415004668
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADuelBase_GameLoopController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADuelBase_GameLoopController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameLoopControllerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADuelBase_GameLoopController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADuelBase_GameLoopController_Statics::ClassParams = {
	&ADuelBase_GameLoopController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADuelBase_GameLoopController_Statics::Class_MetaDataParams), Z_Construct_UClass_ADuelBase_GameLoopController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADuelBase_GameLoopController()
{
	if (!Z_Registration_Info_UClass_ADuelBase_GameLoopController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADuelBase_GameLoopController.OuterSingleton, Z_Construct_UClass_ADuelBase_GameLoopController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADuelBase_GameLoopController.OuterSingleton;
}
ADuelBase_GameLoopController::ADuelBase_GameLoopController() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADuelBase_GameLoopController);
ADuelBase_GameLoopController::~ADuelBase_GameLoopController() {}
// ********** End Class ADuelBase_GameLoopController ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_DuelBase_GameLoopController_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADuelBase_GameLoopController, ADuelBase_GameLoopController::StaticClass, TEXT("ADuelBase_GameLoopController"), &Z_Registration_Info_UClass_ADuelBase_GameLoopController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADuelBase_GameLoopController), 4030423853U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_DuelBase_GameLoopController_h__Script_PartyJungle_496376678(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_DuelBase_GameLoopController_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_DuelBase_GameLoopController_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
