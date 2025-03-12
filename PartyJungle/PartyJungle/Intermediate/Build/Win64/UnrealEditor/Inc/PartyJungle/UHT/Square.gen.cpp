// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Map/Square.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSquare() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMapMenuCamera_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinion_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ASquare();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ASquare_NoRegister();
PARTYJUNGLE_API UEnum* Z_Construct_UEnum_PartyJungle_ESquareType();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// End Cross Module References

// Begin Enum ESquareType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESquareType;
static UEnum* ESquareType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESquareType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESquareType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PartyJungle_ESquareType, (UObject*)Z_Construct_UPackage__Script_PartyJungle(), TEXT("ESquareType"));
	}
	return Z_Registration_Info_UEnum_ESquareType.OuterSingleton;
}
template<> PARTYJUNGLE_API UEnum* StaticEnum<ESquareType>()
{
	return ESquareType_StaticEnum();
}
struct Z_Construct_UEnum_PartyJungle_ESquareType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Map/Square.h" },
		{ "NORMAL.DisplayName", "Normal" },
		{ "NORMAL.Name", "ESquareType::NORMAL" },
		{ "SAFE_ZONE.DisplayName", "Safe Zone" },
		{ "SAFE_ZONE.Name", "ESquareType::SAFE_ZONE" },
		{ "TRAP.DisplayName", "Trap" },
		{ "TRAP.Name", "ESquareType::TRAP" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESquareType::NORMAL", (int64)ESquareType::NORMAL },
		{ "ESquareType::TRAP", (int64)ESquareType::TRAP },
		{ "ESquareType::SAFE_ZONE", (int64)ESquareType::SAFE_ZONE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PartyJungle_ESquareType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PartyJungle,
	nullptr,
	"ESquareType",
	"ESquareType",
	Z_Construct_UEnum_PartyJungle_ESquareType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PartyJungle_ESquareType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PartyJungle_ESquareType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PartyJungle_ESquareType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PartyJungle_ESquareType()
{
	if (!Z_Registration_Info_UEnum_ESquareType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESquareType.InnerSingleton, Z_Construct_UEnum_PartyJungle_ESquareType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESquareType.InnerSingleton;
}
// End Enum ESquareType

// Begin Class ASquare
void ASquare::StaticRegisterNativesASquare()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASquare);
UClass* Z_Construct_UClass_ASquare_NoRegister()
{
	return ASquare::StaticClass();
}
struct Z_Construct_UClass_ASquare_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Map/Square.h" },
		{ "ModuleRelativePath", "Map/Square.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Money_MetaData[] = {
		{ "Category", "SquareProperties" },
		{ "ModuleRelativePath", "Map/Square.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Map/Square.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinionsList_MetaData[] = {
		{ "Category", "Minions List" },
		{ "ModuleRelativePath", "Map/Square.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Camera Connection" },
		{ "ModuleRelativePath", "Map/Square.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectedNodes_MetaData[] = {
		{ "Category", "SquareNodesProperties" },
		{ "ModuleRelativePath", "Map/Square.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Money;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Center;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MinionsList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MinionsList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConnectedNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConnectedNodes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASquare>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASquare_Statics::NewProp_Money = { "Money", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASquare, Money), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Money_MetaData), NewProp_Money_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASquare_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASquare, Center), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASquare_Statics::NewProp_MinionsList_Inner = { "MinionsList", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASquare_Statics::NewProp_MinionsList = { "MinionsList", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASquare, MinionsList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinionsList_MetaData), NewProp_MinionsList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASquare_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASquare, Camera), Z_Construct_UClass_AMapMenuCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASquare_Statics::NewProp_ConnectedNodes_Inner = { "ConnectedNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASquare_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASquare_Statics::NewProp_ConnectedNodes = { "ConnectedNodes", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASquare, ConnectedNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectedNodes_MetaData), NewProp_ConnectedNodes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASquare_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquare_Statics::NewProp_Money,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquare_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquare_Statics::NewProp_MinionsList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquare_Statics::NewProp_MinionsList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquare_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquare_Statics::NewProp_ConnectedNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquare_Statics::NewProp_ConnectedNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASquare_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASquare_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASquare_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASquare_Statics::ClassParams = {
	&ASquare::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASquare_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASquare_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASquare_Statics::Class_MetaDataParams), Z_Construct_UClass_ASquare_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASquare()
{
	if (!Z_Registration_Info_UClass_ASquare.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASquare.OuterSingleton, Z_Construct_UClass_ASquare_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASquare.OuterSingleton;
}
template<> PARTYJUNGLE_API UClass* StaticClass<ASquare>()
{
	return ASquare::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASquare);
ASquare::~ASquare() {}
// End Class ASquare

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_Square_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESquareType_StaticEnum, TEXT("ESquareType"), &Z_Registration_Info_UEnum_ESquareType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2154578961U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASquare, ASquare::StaticClass, TEXT("ASquare"), &Z_Registration_Info_UClass_ASquare, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASquare), 214079679U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_Square_h_823361119(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_Square_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_Square_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_Square_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_Square_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
