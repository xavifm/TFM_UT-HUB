// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Player/Map/MapMenuCamera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapMenuCamera() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ADice_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMapDatabase_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMapMenuCamera();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMapMenuCamera_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinion_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// End Cross Module References

// Begin Class AMapMenuCamera
void AMapMenuCamera::StaticRegisterNativesAMapMenuCamera()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMapMenuCamera);
UClass* Z_Construct_UClass_AMapMenuCamera_NoRegister()
{
	return AMapMenuCamera::StaticClass();
}
struct Z_Construct_UClass_AMapMenuCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/Map/MapMenuCamera.h" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusAnotherMinionAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollTheDiceAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraSpeed_MetaData[] = {
		{ "Category", "Camera Parameters" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMinion_MetaData[] = {
		{ "Category", "Minion On Camera" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapDb_MetaData[] = {
		{ "Category", "Camera Navigation" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMinionPos_MetaData[] = {
		{ "Category", "Camera Navigation" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMinionTeam_MetaData[] = {
		{ "Category", "Camera Navigation" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dice_MetaData[] = {
		{ "Category", "Dice System" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_MenuWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FocusAnotherMinionAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RollTheDiceAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentMinion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapDb;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentMinionPos;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentMinionTeam;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dice;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapMenuCamera>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_MenuWidgetClass = { "MenuWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, MenuWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuWidgetClass_MetaData), NewProp_MenuWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_FocusAnotherMinionAction = { "FocusAnotherMinionAction", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, FocusAnotherMinionAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusAnotherMinionAction_MetaData), NewProp_FocusAnotherMinionAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_RollTheDiceAction = { "RollTheDiceAction", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, RollTheDiceAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollTheDiceAction_MetaData), NewProp_RollTheDiceAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_CameraSpeed = { "CameraSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, CameraSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraSpeed_MetaData), NewProp_CameraSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_CurrentMinion = { "CurrentMinion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, CurrentMinion), Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMinion_MetaData), NewProp_CurrentMinion_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_MapDb = { "MapDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, MapDb), Z_Construct_UClass_AMapDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapDb_MetaData), NewProp_MapDb_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_CurrentMinionPos = { "CurrentMinionPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, CurrentMinionPos), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMinionPos_MetaData), NewProp_CurrentMinionPos_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_CurrentMinionTeam = { "CurrentMinionTeam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, CurrentMinionTeam), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMinionTeam_MetaData), NewProp_CurrentMinionTeam_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_Dice = { "Dice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, Dice), Z_Construct_UClass_ADice_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dice_MetaData), NewProp_Dice_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapMenuCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_MenuWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_FocusAnotherMinionAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_RollTheDiceAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_CameraSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_CurrentMinion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_MapDb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_CurrentMinionPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_CurrentMinionTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_Dice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapMenuCamera_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMapMenuCamera_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapMenuCamera_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapMenuCamera_Statics::ClassParams = {
	&AMapMenuCamera::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMapMenuCamera_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMapMenuCamera_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapMenuCamera_Statics::Class_MetaDataParams), Z_Construct_UClass_AMapMenuCamera_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMapMenuCamera()
{
	if (!Z_Registration_Info_UClass_AMapMenuCamera.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapMenuCamera.OuterSingleton, Z_Construct_UClass_AMapMenuCamera_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMapMenuCamera.OuterSingleton;
}
template<> PARTYJUNGLE_API UClass* StaticClass<AMapMenuCamera>()
{
	return AMapMenuCamera::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMapMenuCamera);
AMapMenuCamera::~AMapMenuCamera() {}
// End Class AMapMenuCamera

// Begin Registration
struct Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMapMenuCamera, AMapMenuCamera::StaticClass, TEXT("AMapMenuCamera"), &Z_Registration_Info_UClass_AMapMenuCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapMenuCamera), 1092338198U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_2647661663(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
