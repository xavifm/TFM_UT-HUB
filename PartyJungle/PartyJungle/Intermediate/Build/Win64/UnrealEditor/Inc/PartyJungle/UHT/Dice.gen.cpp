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
ENGINE_API UClass* Z_Construct_UClass_AActor();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ADice();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ADice_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// End Cross Module References

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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
		{ Z_Construct_UClass_ADice, ADice::StaticClass, TEXT("ADice"), &Z_Registration_Info_UClass_ADice, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADice), 1605498119U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Dice_Dice_h_2154283834(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Dice_Dice_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Dice_Dice_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
