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

// Begin Class ABoardMenu
void ABoardMenu::StaticRegisterNativesABoardMenu()
{
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoardMenu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
struct Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABoardMenu, ABoardMenu::StaticClass, TEXT("ABoardMenu"), &Z_Registration_Info_UClass_ABoardMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoardMenu), 1658851395U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h_2537254905(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
