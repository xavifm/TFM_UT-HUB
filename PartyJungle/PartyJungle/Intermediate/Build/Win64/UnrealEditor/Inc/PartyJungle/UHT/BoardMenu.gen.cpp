// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Menu/BoardMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoardMenu() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ABoardMenu();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ABoardMenu_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// End Cross Module References

// Begin Class ABoardMenu Function PerformMenuAction
struct BoardMenu_eventPerformMenuAction_Parms
{
	int32 CurrentBoardPosition;
};
static FName NAME_ABoardMenu_PerformMenuAction = FName(TEXT("PerformMenuAction"));
void ABoardMenu::PerformMenuAction(int32 CurrentBoardPosition)
{
	BoardMenu_eventPerformMenuAction_Parms Parms;
	Parms.CurrentBoardPosition=CurrentBoardPosition;
	ProcessEvent(FindFunctionChecked(NAME_ABoardMenu_PerformMenuAction),&Parms);
}
struct Z_Construct_UFunction_ABoardMenu_PerformMenuAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Menu/BoardMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentBoardPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABoardMenu_PerformMenuAction_Statics::NewProp_CurrentBoardPosition = { "CurrentBoardPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoardMenu_eventPerformMenuAction_Parms, CurrentBoardPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoardMenu_PerformMenuAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoardMenu_PerformMenuAction_Statics::NewProp_CurrentBoardPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_PerformMenuAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoardMenu_PerformMenuAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoardMenu, nullptr, "PerformMenuAction", nullptr, nullptr, Z_Construct_UFunction_ABoardMenu_PerformMenuAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_PerformMenuAction_Statics::PropPointers), sizeof(BoardMenu_eventPerformMenuAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_PerformMenuAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABoardMenu_PerformMenuAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(BoardMenu_eventPerformMenuAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABoardMenu_PerformMenuAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABoardMenu_PerformMenuAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABoardMenu Function PerformMenuAction

// Begin Class ABoardMenu Function SwitchBoardVisibleOption
struct BoardMenu_eventSwitchBoardVisibleOption_Parms
{
	int32 _position;
};
static FName NAME_ABoardMenu_SwitchBoardVisibleOption = FName(TEXT("SwitchBoardVisibleOption"));
void ABoardMenu::SwitchBoardVisibleOption(int32 _position)
{
	BoardMenu_eventSwitchBoardVisibleOption_Parms Parms;
	Parms._position=_position;
	ProcessEvent(FindFunctionChecked(NAME_ABoardMenu_SwitchBoardVisibleOption),&Parms);
}
struct Z_Construct_UFunction_ABoardMenu_SwitchBoardVisibleOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Menu/BoardMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABoardMenu_SwitchBoardVisibleOption_Statics::NewProp__position = { "_position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoardMenu_eventSwitchBoardVisibleOption_Parms, _position), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoardMenu_SwitchBoardVisibleOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoardMenu_SwitchBoardVisibleOption_Statics::NewProp__position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_SwitchBoardVisibleOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoardMenu_SwitchBoardVisibleOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoardMenu, nullptr, "SwitchBoardVisibleOption", nullptr, nullptr, Z_Construct_UFunction_ABoardMenu_SwitchBoardVisibleOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_SwitchBoardVisibleOption_Statics::PropPointers), sizeof(BoardMenu_eventSwitchBoardVisibleOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_SwitchBoardVisibleOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABoardMenu_SwitchBoardVisibleOption_Statics::Function_MetaDataParams) };
static_assert(sizeof(BoardMenu_eventSwitchBoardVisibleOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABoardMenu_SwitchBoardVisibleOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABoardMenu_SwitchBoardVisibleOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABoardMenu Function SwitchBoardVisibleOption

// Begin Class ABoardMenu Function SwitchMenuPosition
struct Z_Construct_UFunction_ABoardMenu_SwitchMenuPosition_Statics
{
	struct BoardMenu_eventSwitchMenuPosition_Parms
	{
		int32 _direction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Menu/BoardMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABoardMenu_SwitchMenuPosition_Statics::NewProp__direction = { "_direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoardMenu_eventSwitchMenuPosition_Parms, _direction), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoardMenu_SwitchMenuPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoardMenu_SwitchMenuPosition_Statics::NewProp__direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_SwitchMenuPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoardMenu_SwitchMenuPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoardMenu, nullptr, "SwitchMenuPosition", nullptr, nullptr, Z_Construct_UFunction_ABoardMenu_SwitchMenuPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_SwitchMenuPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABoardMenu_SwitchMenuPosition_Statics::BoardMenu_eventSwitchMenuPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_SwitchMenuPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABoardMenu_SwitchMenuPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABoardMenu_SwitchMenuPosition_Statics::BoardMenu_eventSwitchMenuPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABoardMenu_SwitchMenuPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABoardMenu_SwitchMenuPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABoardMenu::execSwitchMenuPosition)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchMenuPosition(Z_Param__direction);
	P_NATIVE_END;
}
// End Class ABoardMenu Function SwitchMenuPosition

// Begin Class ABoardMenu
void ABoardMenu::StaticRegisterNativesABoardMenu()
{
	UClass* Class = ABoardMenu::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SwitchMenuPosition", &ABoardMenu::execSwitchMenuPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoardMenu);
UClass* Z_Construct_UClass_ABoardMenu_NoRegister()
{
	return ABoardMenu::StaticClass();
}
struct Z_Construct_UClass_ABoardMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Menu/BoardMenu.h" },
		{ "ModuleRelativePath", "Menu/BoardMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMenuPosition_MetaData[] = {
		{ "ModuleRelativePath", "Menu/BoardMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentMenuPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABoardMenu_PerformMenuAction, "PerformMenuAction" }, // 2517392734
		{ &Z_Construct_UFunction_ABoardMenu_SwitchBoardVisibleOption, "SwitchBoardVisibleOption" }, // 437679192
		{ &Z_Construct_UFunction_ABoardMenu_SwitchMenuPosition, "SwitchMenuPosition" }, // 308954599
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoardMenu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABoardMenu_Statics::NewProp_CurrentMenuPosition = { "CurrentMenuPosition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoardMenu, CurrentMenuPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMenuPosition_MetaData), NewProp_CurrentMenuPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoardMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoardMenu_Statics::NewProp_CurrentMenuPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoardMenu_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABoardMenu_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoardMenu_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoardMenu_Statics::ClassParams = {
	&ABoardMenu::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABoardMenu_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABoardMenu_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoardMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_ABoardMenu_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABoardMenu()
{
	if (!Z_Registration_Info_UClass_ABoardMenu.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoardMenu.OuterSingleton, Z_Construct_UClass_ABoardMenu_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABoardMenu.OuterSingleton;
}
template<> PARTYJUNGLE_API UClass* StaticClass<ABoardMenu>()
{
	return ABoardMenu::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABoardMenu);
ABoardMenu::~ABoardMenu() {}
// End Class ABoardMenu

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABoardMenu, ABoardMenu::StaticClass, TEXT("ABoardMenu"), &Z_Registration_Info_UClass_ABoardMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoardMenu), 770047414U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h_2258181716(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
