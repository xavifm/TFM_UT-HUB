// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Minigame/Minigame1/Minigame1Logic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinigame1Logic() {}

// Begin Cross Module References
PARTYJUNGLE_API UClass* Z_Construct_UClass_AAirCannon_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinigame1Logic();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinigame1Logic_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinigameLogic();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// End Cross Module References

// Begin Class AMinigame1Logic Function SetupAirCannonsInfo
struct Z_Construct_UFunction_AMinigame1Logic_SetupAirCannonsInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cannons_functions" },
		{ "ModuleRelativePath", "Minigame/Minigame1/Minigame1Logic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigame1Logic_SetupAirCannonsInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinigame1Logic, nullptr, "SetupAirCannonsInfo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame1Logic_SetupAirCannonsInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigame1Logic_SetupAirCannonsInfo_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMinigame1Logic_SetupAirCannonsInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigame1Logic_SetupAirCannonsInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigame1Logic::execSetupAirCannonsInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupAirCannonsInfo();
	P_NATIVE_END;
}
// End Class AMinigame1Logic Function SetupAirCannonsInfo

// Begin Class AMinigame1Logic Function StartCannonsCharge
struct Z_Construct_UFunction_AMinigame1Logic_StartCannonsCharge_Statics
{
	struct Minigame1Logic_eventStartCannonsCharge_Parms
	{
		float _time;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cannons_functions" },
		{ "ModuleRelativePath", "Minigame/Minigame1/Minigame1Logic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp__time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMinigame1Logic_StartCannonsCharge_Statics::NewProp__time = { "_time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Minigame1Logic_eventStartCannonsCharge_Parms, _time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigame1Logic_StartCannonsCharge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigame1Logic_StartCannonsCharge_Statics::NewProp__time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame1Logic_StartCannonsCharge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigame1Logic_StartCannonsCharge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinigame1Logic, nullptr, "StartCannonsCharge", nullptr, nullptr, Z_Construct_UFunction_AMinigame1Logic_StartCannonsCharge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame1Logic_StartCannonsCharge_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigame1Logic_StartCannonsCharge_Statics::Minigame1Logic_eventStartCannonsCharge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame1Logic_StartCannonsCharge_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigame1Logic_StartCannonsCharge_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMinigame1Logic_StartCannonsCharge_Statics::Minigame1Logic_eventStartCannonsCharge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigame1Logic_StartCannonsCharge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigame1Logic_StartCannonsCharge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigame1Logic::execStartCannonsCharge)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param__time);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartCannonsCharge(Z_Param__time);
	P_NATIVE_END;
}
// End Class AMinigame1Logic Function StartCannonsCharge

// Begin Class AMinigame1Logic
void AMinigame1Logic::StaticRegisterNativesAMinigame1Logic()
{
	UClass* Class = AMinigame1Logic::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetupAirCannonsInfo", &AMinigame1Logic::execSetupAirCannonsInfo },
		{ "StartCannonsCharge", &AMinigame1Logic::execStartCannonsCharge },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMinigame1Logic);
UClass* Z_Construct_UClass_AMinigame1Logic_NoRegister()
{
	return AMinigame1Logic::StaticClass();
}
struct Z_Construct_UClass_AMinigame1Logic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Minigame/Minigame1/Minigame1Logic.h" },
		{ "ModuleRelativePath", "Minigame/Minigame1/Minigame1Logic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirCannons_MetaData[] = {
		{ "Category", "Cannons" },
		{ "ModuleRelativePath", "Minigame/Minigame1/Minigame1Logic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CannonChargeTime_MetaData[] = {
		{ "Category", "Cannons_parameters" },
		{ "ModuleRelativePath", "Minigame/Minigame1/Minigame1Logic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AirCannons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AirCannons;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CannonChargeTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMinigame1Logic_SetupAirCannonsInfo, "SetupAirCannonsInfo" }, // 3347501747
		{ &Z_Construct_UFunction_AMinigame1Logic_StartCannonsCharge, "StartCannonsCharge" }, // 756080028
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinigame1Logic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigame1Logic_Statics::NewProp_AirCannons_Inner = { "AirCannons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AAirCannon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMinigame1Logic_Statics::NewProp_AirCannons = { "AirCannons", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame1Logic, AirCannons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirCannons_MetaData), NewProp_AirCannons_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMinigame1Logic_Statics::NewProp_CannonChargeTime = { "CannonChargeTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame1Logic, CannonChargeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CannonChargeTime_MetaData), NewProp_CannonChargeTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMinigame1Logic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame1Logic_Statics::NewProp_AirCannons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame1Logic_Statics::NewProp_AirCannons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame1Logic_Statics::NewProp_CannonChargeTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigame1Logic_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMinigame1Logic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMinigameLogic,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigame1Logic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMinigame1Logic_Statics::ClassParams = {
	&AMinigame1Logic::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMinigame1Logic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMinigame1Logic_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigame1Logic_Statics::Class_MetaDataParams), Z_Construct_UClass_AMinigame1Logic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMinigame1Logic()
{
	if (!Z_Registration_Info_UClass_AMinigame1Logic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMinigame1Logic.OuterSingleton, Z_Construct_UClass_AMinigame1Logic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMinigame1Logic.OuterSingleton;
}
template<> PARTYJUNGLE_API UClass* StaticClass<AMinigame1Logic>()
{
	return AMinigame1Logic::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMinigame1Logic);
AMinigame1Logic::~AMinigame1Logic() {}
// End Class AMinigame1Logic

// Begin Registration
struct Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Minigame_Minigame1_Minigame1Logic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMinigame1Logic, AMinigame1Logic::StaticClass, TEXT("AMinigame1Logic"), &Z_Registration_Info_UClass_AMinigame1Logic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMinigame1Logic), 179536960U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Minigame_Minigame1_Minigame1Logic_h_1297175643(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Minigame_Minigame1_Minigame1Logic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Minigame_Minigame1_Minigame1Logic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
