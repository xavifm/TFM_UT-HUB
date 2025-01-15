// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Player/UI/PlayerMapUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerMapUI() {}

// Begin Cross Module References
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinion_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UPlayerMapUI();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UPlayerMapUI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// End Cross Module References

// Begin Class UPlayerMapUI Function AssignMinionMovements
struct Z_Construct_UFunction_UPlayerMapUI_AssignMinionMovements_Statics
{
	struct PlayerMapUI_eventAssignMinionMovements_Parms
	{
		AMinion* _targetMinion;
		int32 _movements;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minion Movement" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__targetMinion;
	static const UECodeGen_Private::FIntPropertyParams NewProp__movements;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerMapUI_AssignMinionMovements_Statics::NewProp__targetMinion = { "_targetMinion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventAssignMinionMovements_Parms, _targetMinion), Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerMapUI_AssignMinionMovements_Statics::NewProp__movements = { "_movements", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventAssignMinionMovements_Parms, _movements), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMapUI_AssignMinionMovements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_AssignMinionMovements_Statics::NewProp__targetMinion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_AssignMinionMovements_Statics::NewProp__movements,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_AssignMinionMovements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_AssignMinionMovements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "AssignMinionMovements", nullptr, nullptr, Z_Construct_UFunction_UPlayerMapUI_AssignMinionMovements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_AssignMinionMovements_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerMapUI_AssignMinionMovements_Statics::PlayerMapUI_eventAssignMinionMovements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_AssignMinionMovements_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_AssignMinionMovements_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerMapUI_AssignMinionMovements_Statics::PlayerMapUI_eventAssignMinionMovements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMapUI_AssignMinionMovements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_AssignMinionMovements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerMapUI::execAssignMinionMovements)
{
	P_GET_OBJECT(AMinion,Z_Param__targetMinion);
	P_GET_PROPERTY(FIntProperty,Z_Param__movements);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AssignMinionMovements(Z_Param__targetMinion,Z_Param__movements);
	P_NATIVE_END;
}
// End Class UPlayerMapUI Function AssignMinionMovements

// Begin Class UPlayerMapUI Function RollAction
struct Z_Construct_UFunction_UPlayerMapUI_RollAction_Statics
{
	struct PlayerMapUI_eventRollAction_Parms
	{
		int32 _movements;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Click Logic" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__movements;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerMapUI_RollAction_Statics::NewProp__movements = { "_movements", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventRollAction_Parms, _movements), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMapUI_RollAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_RollAction_Statics::NewProp__movements,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_RollAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_RollAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "RollAction", nullptr, nullptr, Z_Construct_UFunction_UPlayerMapUI_RollAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_RollAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerMapUI_RollAction_Statics::PlayerMapUI_eventRollAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_RollAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_RollAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerMapUI_RollAction_Statics::PlayerMapUI_eventRollAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMapUI_RollAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_RollAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerMapUI::execRollAction)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__movements);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RollAction(Z_Param__movements);
	P_NATIVE_END;
}
// End Class UPlayerMapUI Function RollAction

// Begin Class UPlayerMapUI
void UPlayerMapUI::StaticRegisterNativesUPlayerMapUI()
{
	UClass* Class = UPlayerMapUI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AssignMinionMovements", &UPlayerMapUI::execAssignMinionMovements },
		{ "RollAction", &UPlayerMapUI::execRollAction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerMapUI);
UClass* Z_Construct_UClass_UPlayerMapUI_NoRegister()
{
	return UPlayerMapUI::StaticClass();
}
struct Z_Construct_UClass_UPlayerMapUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Player/UI/PlayerMapUI.h" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinionsList_MetaData[] = {
		{ "Category", "Minions List" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MinionsList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MinionsList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerMapUI_AssignMinionMovements, "AssignMinionMovements" }, // 3463115381
		{ &Z_Construct_UFunction_UPlayerMapUI_RollAction, "RollAction" }, // 3906773038
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerMapUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerMapUI_Statics::NewProp_MinionsList_Inner = { "MinionsList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerMapUI_Statics::NewProp_MinionsList = { "MinionsList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMapUI, MinionsList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinionsList_MetaData), NewProp_MinionsList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerMapUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMapUI_Statics::NewProp_MinionsList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMapUI_Statics::NewProp_MinionsList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMapUI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerMapUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMapUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerMapUI_Statics::ClassParams = {
	&UPlayerMapUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerMapUI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMapUI_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMapUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerMapUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerMapUI()
{
	if (!Z_Registration_Info_UClass_UPlayerMapUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerMapUI.OuterSingleton, Z_Construct_UClass_UPlayerMapUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerMapUI.OuterSingleton;
}
template<> PARTYJUNGLE_API UClass* StaticClass<UPlayerMapUI>()
{
	return UPlayerMapUI::StaticClass();
}
UPlayerMapUI::UPlayerMapUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerMapUI);
UPlayerMapUI::~UPlayerMapUI() {}
// End Class UPlayerMapUI

// Begin Registration
struct Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_UI_PlayerMapUI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerMapUI, UPlayerMapUI::StaticClass, TEXT("UPlayerMapUI"), &Z_Registration_Info_UClass_UPlayerMapUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerMapUI), 2600198518U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_UI_PlayerMapUI_h_2168154456(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_UI_PlayerMapUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_UI_PlayerMapUI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
