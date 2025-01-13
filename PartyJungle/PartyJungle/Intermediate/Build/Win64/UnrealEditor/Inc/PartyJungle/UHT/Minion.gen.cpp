// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Player/Minion/Minion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinion() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinion();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinion_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ASquare_NoRegister();
PARTYJUNGLE_API UEnum* Z_Construct_UEnum_PartyJungle_ETeam();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// End Cross Module References

// Begin Enum ETeam
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETeam;
static UEnum* ETeam_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETeam.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETeam.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PartyJungle_ETeam, (UObject*)Z_Construct_UPackage__Script_PartyJungle(), TEXT("ETeam"));
	}
	return Z_Registration_Info_UEnum_ETeam.OuterSingleton;
}
template<> PARTYJUNGLE_API UEnum* StaticEnum<ETeam>()
{
	return ETeam_StaticEnum();
}
struct Z_Construct_UEnum_PartyJungle_ETeam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Player/Minion/Minion.h" },
		{ "TEAM_FOUR.DisplayName", "Team Four" },
		{ "TEAM_FOUR.Name", "ETeam::TEAM_FOUR" },
		{ "TEAM_ONE.DisplayName", "Team One" },
		{ "TEAM_ONE.Name", "ETeam::TEAM_ONE" },
		{ "TEAM_THREE.DisplayName", "Team Three" },
		{ "TEAM_THREE.Name", "ETeam::TEAM_THREE" },
		{ "TEAM_TWO.DisplayName", "Team Two" },
		{ "TEAM_TWO.Name", "ETeam::TEAM_TWO" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETeam::TEAM_ONE", (int64)ETeam::TEAM_ONE },
		{ "ETeam::TEAM_TWO", (int64)ETeam::TEAM_TWO },
		{ "ETeam::TEAM_THREE", (int64)ETeam::TEAM_THREE },
		{ "ETeam::TEAM_FOUR", (int64)ETeam::TEAM_FOUR },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PartyJungle_ETeam_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PartyJungle,
	nullptr,
	"ETeam",
	"ETeam",
	Z_Construct_UEnum_PartyJungle_ETeam_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PartyJungle_ETeam_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PartyJungle_ETeam_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PartyJungle_ETeam_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PartyJungle_ETeam()
{
	if (!Z_Registration_Info_UEnum_ETeam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETeam.InnerSingleton, Z_Construct_UEnum_PartyJungle_ETeam_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETeam.InnerSingleton;
}
// End Enum ETeam

// Begin Class AMinion Function GetNextSquare
struct Z_Construct_UFunction_AMinion_GetNextSquare_Statics
{
	struct Minion_eventGetNextSquare_Parms
	{
		ASquare* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minion Actions" },
		{ "ModuleRelativePath", "Player/Minion/Minion.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinion_GetNextSquare_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Minion_eventGetNextSquare_Parms, ReturnValue), Z_Construct_UClass_ASquare_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinion_GetNextSquare_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinion_GetNextSquare_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_GetNextSquare_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinion_GetNextSquare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinion, nullptr, "GetNextSquare", nullptr, nullptr, Z_Construct_UFunction_AMinion_GetNextSquare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_GetNextSquare_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinion_GetNextSquare_Statics::Minion_eventGetNextSquare_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_GetNextSquare_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinion_GetNextSquare_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMinion_GetNextSquare_Statics::Minion_eventGetNextSquare_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinion_GetNextSquare()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinion_GetNextSquare_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinion::execGetNextSquare)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ASquare**)Z_Param__Result=P_THIS->GetNextSquare();
	P_NATIVE_END;
}
// End Class AMinion Function GetNextSquare

// Begin Class AMinion Function MoveToSquare
struct Z_Construct_UFunction_AMinion_MoveToSquare_Statics
{
	struct Minion_eventMoveToSquare_Parms
	{
		ASquare* TargetSquare;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minion Actions" },
		{ "ModuleRelativePath", "Player/Minion/Minion.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetSquare;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinion_MoveToSquare_Statics::NewProp_TargetSquare = { "TargetSquare", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Minion_eventMoveToSquare_Parms, TargetSquare), Z_Construct_UClass_ASquare_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinion_MoveToSquare_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinion_MoveToSquare_Statics::NewProp_TargetSquare,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_MoveToSquare_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinion_MoveToSquare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinion, nullptr, "MoveToSquare", nullptr, nullptr, Z_Construct_UFunction_AMinion_MoveToSquare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_MoveToSquare_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinion_MoveToSquare_Statics::Minion_eventMoveToSquare_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_MoveToSquare_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinion_MoveToSquare_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMinion_MoveToSquare_Statics::Minion_eventMoveToSquare_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinion_MoveToSquare()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinion_MoveToSquare_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinion::execMoveToSquare)
{
	P_GET_OBJECT(ASquare,Z_Param_TargetSquare);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveToSquare(Z_Param_TargetSquare);
	P_NATIVE_END;
}
// End Class AMinion Function MoveToSquare

// Begin Class AMinion Function SetMinionsMovements
struct Z_Construct_UFunction_AMinion_SetMinionsMovements_Statics
{
	struct Minion_eventSetMinionsMovements_Parms
	{
		int32 _movements;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minion Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Minion Properties\")\n//UMinionInventory* Inventory;\n" },
#endif
		{ "ModuleRelativePath", "Player/Minion/Minion.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Minion Properties\")\nUMinionInventory* Inventory;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__movements;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinion_SetMinionsMovements_Statics::NewProp__movements = { "_movements", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Minion_eventSetMinionsMovements_Parms, _movements), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinion_SetMinionsMovements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinion_SetMinionsMovements_Statics::NewProp__movements,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_SetMinionsMovements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinion_SetMinionsMovements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinion, nullptr, "SetMinionsMovements", nullptr, nullptr, Z_Construct_UFunction_AMinion_SetMinionsMovements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_SetMinionsMovements_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinion_SetMinionsMovements_Statics::Minion_eventSetMinionsMovements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_SetMinionsMovements_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinion_SetMinionsMovements_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMinion_SetMinionsMovements_Statics::Minion_eventSetMinionsMovements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinion_SetMinionsMovements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinion_SetMinionsMovements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinion::execSetMinionsMovements)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__movements);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMinionsMovements(Z_Param__movements);
	P_NATIVE_END;
}
// End Class AMinion Function SetMinionsMovements

// Begin Class AMinion
void AMinion::StaticRegisterNativesAMinion()
{
	UClass* Class = AMinion::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetNextSquare", &AMinion::execGetNextSquare },
		{ "MoveToSquare", &AMinion::execMoveToSquare },
		{ "SetMinionsMovements", &AMinion::execSetMinionsMovements },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMinion);
UClass* Z_Construct_UClass_AMinion_NoRegister()
{
	return AMinion::StaticClass();
}
struct Z_Construct_UClass_AMinion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Player/Minion/Minion.h" },
		{ "ModuleRelativePath", "Player/Minion/Minion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[] = {
		{ "Category", "Minion Properties" },
		{ "ModuleRelativePath", "Player/Minion/Minion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSquare_MetaData[] = {
		{ "Category", "Minion Properties" },
		{ "ModuleRelativePath", "Player/Minion/Minion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalLerpTime_MetaData[] = {
		{ "Category", "Minion Properties" },
		{ "ModuleRelativePath", "Player/Minion/Minion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Movements_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Minion Properties" },
		{ "ModuleRelativePath", "Player/Minion/Minion.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentSquare;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalLerpTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Movements;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMinion_GetNextSquare, "GetNextSquare" }, // 1662612968
		{ &Z_Construct_UFunction_AMinion_MoveToSquare, "MoveToSquare" }, // 472228771
		{ &Z_Construct_UFunction_AMinion_SetMinionsMovements, "SetMinionsMovements" }, // 4008956176
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinion>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMinion_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMinion_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinion, Team), Z_Construct_UEnum_PartyJungle_ETeam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Team_MetaData), NewProp_Team_MetaData) }; // 4119591115
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinion_Statics::NewProp_CurrentSquare = { "CurrentSquare", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinion, CurrentSquare), Z_Construct_UClass_ASquare_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSquare_MetaData), NewProp_CurrentSquare_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMinion_Statics::NewProp_TotalLerpTime = { "TotalLerpTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinion, TotalLerpTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalLerpTime_MetaData), NewProp_TotalLerpTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMinion_Statics::NewProp_Movements = { "Movements", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinion, Movements), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Movements_MetaData), NewProp_Movements_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMinion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinion_Statics::NewProp_Team_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinion_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinion_Statics::NewProp_CurrentSquare,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinion_Statics::NewProp_TotalLerpTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinion_Statics::NewProp_Movements,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinion_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMinion_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinion_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMinion_Statics::ClassParams = {
	&AMinion::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMinion_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMinion_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinion_Statics::Class_MetaDataParams), Z_Construct_UClass_AMinion_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMinion()
{
	if (!Z_Registration_Info_UClass_AMinion.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMinion.OuterSingleton, Z_Construct_UClass_AMinion_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMinion.OuterSingleton;
}
template<> PARTYJUNGLE_API UClass* StaticClass<AMinion>()
{
	return AMinion::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMinion);
AMinion::~AMinion() {}
// End Class AMinion

// Begin Registration
struct Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_Minion_Minion_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETeam_StaticEnum, TEXT("ETeam"), &Z_Registration_Info_UEnum_ETeam, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4119591115U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMinion, AMinion::StaticClass, TEXT("AMinion"), &Z_Registration_Info_UClass_AMinion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMinion), 1830842319U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_Minion_Minion_h_1996908473(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_Minion_Minion_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_Minion_Minion_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_Minion_Minion_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_Minion_Minion_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
