// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Dice/Dice.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDice() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ADice();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ADice_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// End Cross Module References

// Begin Class ADice Function SwitchDicePosition
struct Dice_eventSwitchDicePosition_Parms
{
	FVector NewPosition;
};
static FName NAME_ADice_SwitchDicePosition = FName(TEXT("SwitchDicePosition"));
void ADice::SwitchDicePosition(FVector NewPosition)
{
	Dice_eventSwitchDicePosition_Parms Parms;
	Parms.NewPosition=NewPosition;
	ProcessEvent(FindFunctionChecked(NAME_ADice_SwitchDicePosition),&Parms);
}
struct Z_Construct_UFunction_ADice_SwitchDicePosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dice Displacement" },
		{ "ModuleRelativePath", "Dice/Dice.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADice_SwitchDicePosition_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dice_eventSwitchDicePosition_Parms, NewPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADice_SwitchDicePosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADice_SwitchDicePosition_Statics::NewProp_NewPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADice_SwitchDicePosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADice_SwitchDicePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADice, nullptr, "SwitchDicePosition", nullptr, nullptr, Z_Construct_UFunction_ADice_SwitchDicePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADice_SwitchDicePosition_Statics::PropPointers), sizeof(Dice_eventSwitchDicePosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADice_SwitchDicePosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADice_SwitchDicePosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Dice_eventSwitchDicePosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADice_SwitchDicePosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADice_SwitchDicePosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ADice Function SwitchDicePosition

// Begin Class ADice
void ADice::StaticRegisterNativesADice()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADice);
UClass* Z_Construct_UClass_ADice_NoRegister()
{
	return ADice::StaticClass();
}
struct Z_Construct_UClass_ADice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Dice/Dice.h" },
		{ "ModuleRelativePath", "Dice/Dice.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADice_SwitchDicePosition, "SwitchDicePosition" }, // 1479629512
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADice>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADice_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADice_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADice_Statics::ClassParams = {
	&ADice::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADice_Statics::Class_MetaDataParams), Z_Construct_UClass_ADice_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADice()
{
	if (!Z_Registration_Info_UClass_ADice.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADice.OuterSingleton, Z_Construct_UClass_ADice_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADice.OuterSingleton;
}
template<> PARTYJUNGLE_API UClass* StaticClass<ADice>()
{
	return ADice::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADice);
ADice::~ADice() {}
// End Class ADice

// Begin Registration
struct Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Dice_Dice_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADice, ADice::StaticClass, TEXT("ADice"), &Z_Registration_Info_UClass_ADice, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADice), 538687369U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Dice_Dice_h_2882722693(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Dice_Dice_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Dice_Dice_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
