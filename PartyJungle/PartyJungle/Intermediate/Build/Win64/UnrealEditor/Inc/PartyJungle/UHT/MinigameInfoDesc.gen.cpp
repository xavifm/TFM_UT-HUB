// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Minigame/MinigameInfoDesc.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMinigameInfoDesc() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinigameInfoDesc();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinigameInfoDesc_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMinigameInfoDesc Function SetMinigameInfo *******************************
struct MinigameInfoDesc_eventSetMinigameInfo_Parms
{
	FText _title;
};
static FName NAME_AMinigameInfoDesc_SetMinigameInfo = FName(TEXT("SetMinigameInfo"));
void AMinigameInfoDesc::SetMinigameInfo(FText const& _title)
{
	MinigameInfoDesc_eventSetMinigameInfo_Parms Parms;
	Parms._title=_title;
	UFunction* Func = FindFunctionChecked(NAME_AMinigameInfoDesc_SetMinigameInfo);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMinigameInfoDesc_SetMinigameInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/MinigameInfoDesc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__title_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp__title;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AMinigameInfoDesc_SetMinigameInfo_Statics::NewProp__title = { "_title", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameInfoDesc_eventSetMinigameInfo_Parms, _title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__title_MetaData), NewProp__title_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameInfoDesc_SetMinigameInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameInfoDesc_SetMinigameInfo_Statics::NewProp__title,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameInfoDesc_SetMinigameInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameInfoDesc_SetMinigameInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameInfoDesc, nullptr, "SetMinigameInfo", Z_Construct_UFunction_AMinigameInfoDesc_SetMinigameInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameInfoDesc_SetMinigameInfo_Statics::PropPointers), sizeof(MinigameInfoDesc_eventSetMinigameInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameInfoDesc_SetMinigameInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameInfoDesc_SetMinigameInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(MinigameInfoDesc_eventSetMinigameInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameInfoDesc_SetMinigameInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameInfoDesc_SetMinigameInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AMinigameInfoDesc Function SetMinigameInfo *********************************

// ********** Begin Class AMinigameInfoDesc ********************************************************
void AMinigameInfoDesc::StaticRegisterNativesAMinigameInfoDesc()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMinigameInfoDesc;
UClass* AMinigameInfoDesc::GetPrivateStaticClass()
{
	using TClass = AMinigameInfoDesc;
	if (!Z_Registration_Info_UClass_AMinigameInfoDesc.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MinigameInfoDesc"),
			Z_Registration_Info_UClass_AMinigameInfoDesc.InnerSingleton,
			StaticRegisterNativesAMinigameInfoDesc,
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
	return Z_Registration_Info_UClass_AMinigameInfoDesc.InnerSingleton;
}
UClass* Z_Construct_UClass_AMinigameInfoDesc_NoRegister()
{
	return AMinigameInfoDesc::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMinigameInfoDesc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Minigame/MinigameInfoDesc.h" },
		{ "ModuleRelativePath", "Minigame/MinigameInfoDesc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinigameInfoMap_MetaData[] = {
		{ "Category", "MinigameInfoDesc" },
		{ "ModuleRelativePath", "Minigame/MinigameInfoDesc.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MinigameInfoMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MinigameInfoMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MinigameInfoMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMinigameInfoDesc_SetMinigameInfo, "SetMinigameInfo" }, // 648595034
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinigameInfoDesc>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMinigameInfoDesc_Statics::NewProp_MinigameInfoMap_ValueProp = { "MinigameInfoMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMinigameInfoDesc_Statics::NewProp_MinigameInfoMap_Key_KeyProp = { "MinigameInfoMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMinigameInfoDesc_Statics::NewProp_MinigameInfoMap = { "MinigameInfoMap", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameInfoDesc, MinigameInfoMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinigameInfoMap_MetaData), NewProp_MinigameInfoMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMinigameInfoDesc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameInfoDesc_Statics::NewProp_MinigameInfoMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameInfoDesc_Statics::NewProp_MinigameInfoMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameInfoDesc_Statics::NewProp_MinigameInfoMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigameInfoDesc_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMinigameInfoDesc_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigameInfoDesc_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMinigameInfoDesc_Statics::ClassParams = {
	&AMinigameInfoDesc::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMinigameInfoDesc_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMinigameInfoDesc_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigameInfoDesc_Statics::Class_MetaDataParams), Z_Construct_UClass_AMinigameInfoDesc_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMinigameInfoDesc()
{
	if (!Z_Registration_Info_UClass_AMinigameInfoDesc.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMinigameInfoDesc.OuterSingleton, Z_Construct_UClass_AMinigameInfoDesc_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMinigameInfoDesc.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMinigameInfoDesc);
AMinigameInfoDesc::~AMinigameInfoDesc() {}
// ********** End Class AMinigameInfoDesc **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_MinigameInfoDesc_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMinigameInfoDesc, AMinigameInfoDesc::StaticClass, TEXT("AMinigameInfoDesc"), &Z_Registration_Info_UClass_AMinigameInfoDesc, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMinigameInfoDesc), 608351554U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_MinigameInfoDesc_h__Script_PartyJungle_3892022270(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_MinigameInfoDesc_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_MinigameInfoDesc_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
