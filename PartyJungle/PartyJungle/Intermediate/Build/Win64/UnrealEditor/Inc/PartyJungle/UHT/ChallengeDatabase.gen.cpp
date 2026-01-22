// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Challenge/ChallengeDatabase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeChallengeDatabase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AChallengeDatabase();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AChallengeDatabase_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UChallengeDto_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AChallengeDatabase Function RegisterDuel *********************************
struct Z_Construct_UFunction_AChallengeDatabase_RegisterDuel_Statics
{
	struct ChallengeDatabase_eventRegisterDuel_Parms
	{
		int32 Attacker;
		int32 Victim;
		int32 Winner;
		int32 BetStyle;
		int32 Coins;
		int32 Crowns;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Challenge" },
		{ "CPP_Default_Crowns", "0" },
		{ "ModuleRelativePath", "Challenge/ChallengeDatabase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Attacker;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Victim;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Winner;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BetStyle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Coins;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Crowns;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChallengeDatabase_RegisterDuel_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChallengeDatabase_eventRegisterDuel_Parms, Attacker), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChallengeDatabase_RegisterDuel_Statics::NewProp_Victim = { "Victim", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChallengeDatabase_eventRegisterDuel_Parms, Victim), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChallengeDatabase_RegisterDuel_Statics::NewProp_Winner = { "Winner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChallengeDatabase_eventRegisterDuel_Parms, Winner), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChallengeDatabase_RegisterDuel_Statics::NewProp_BetStyle = { "BetStyle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChallengeDatabase_eventRegisterDuel_Parms, BetStyle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChallengeDatabase_RegisterDuel_Statics::NewProp_Coins = { "Coins", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChallengeDatabase_eventRegisterDuel_Parms, Coins), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChallengeDatabase_RegisterDuel_Statics::NewProp_Crowns = { "Crowns", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChallengeDatabase_eventRegisterDuel_Parms, Crowns), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChallengeDatabase_RegisterDuel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeDatabase_RegisterDuel_Statics::NewProp_Attacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeDatabase_RegisterDuel_Statics::NewProp_Victim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeDatabase_RegisterDuel_Statics::NewProp_Winner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeDatabase_RegisterDuel_Statics::NewProp_BetStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeDatabase_RegisterDuel_Statics::NewProp_Coins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChallengeDatabase_RegisterDuel_Statics::NewProp_Crowns,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeDatabase_RegisterDuel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChallengeDatabase_RegisterDuel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AChallengeDatabase, nullptr, "RegisterDuel", Z_Construct_UFunction_AChallengeDatabase_RegisterDuel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeDatabase_RegisterDuel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChallengeDatabase_RegisterDuel_Statics::ChallengeDatabase_eventRegisterDuel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeDatabase_RegisterDuel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChallengeDatabase_RegisterDuel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AChallengeDatabase_RegisterDuel_Statics::ChallengeDatabase_eventRegisterDuel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChallengeDatabase_RegisterDuel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChallengeDatabase_RegisterDuel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChallengeDatabase::execRegisterDuel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Attacker);
	P_GET_PROPERTY(FIntProperty,Z_Param_Victim);
	P_GET_PROPERTY(FIntProperty,Z_Param_Winner);
	P_GET_PROPERTY(FIntProperty,Z_Param_BetStyle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Coins);
	P_GET_PROPERTY(FIntProperty,Z_Param_Crowns);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterDuel(Z_Param_Attacker,Z_Param_Victim,Z_Param_Winner,Z_Param_BetStyle,Z_Param_Coins,Z_Param_Crowns);
	P_NATIVE_END;
}
// ********** End Class AChallengeDatabase Function RegisterDuel ***********************************

// ********** Begin Class AChallengeDatabase Function SendRegistryToInstance ***********************
struct Z_Construct_UFunction_AChallengeDatabase_SendRegistryToInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Challenge" },
		{ "ModuleRelativePath", "Challenge/ChallengeDatabase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChallengeDatabase_SendRegistryToInstance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AChallengeDatabase, nullptr, "SendRegistryToInstance", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChallengeDatabase_SendRegistryToInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChallengeDatabase_SendRegistryToInstance_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AChallengeDatabase_SendRegistryToInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChallengeDatabase_SendRegistryToInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChallengeDatabase::execSendRegistryToInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendRegistryToInstance();
	P_NATIVE_END;
}
// ********** End Class AChallengeDatabase Function SendRegistryToInstance *************************

// ********** Begin Class AChallengeDatabase *******************************************************
void AChallengeDatabase::StaticRegisterNativesAChallengeDatabase()
{
	UClass* Class = AChallengeDatabase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RegisterDuel", &AChallengeDatabase::execRegisterDuel },
		{ "SendRegistryToInstance", &AChallengeDatabase::execSendRegistryToInstance },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AChallengeDatabase;
UClass* AChallengeDatabase::GetPrivateStaticClass()
{
	using TClass = AChallengeDatabase;
	if (!Z_Registration_Info_UClass_AChallengeDatabase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ChallengeDatabase"),
			Z_Registration_Info_UClass_AChallengeDatabase.InnerSingleton,
			StaticRegisterNativesAChallengeDatabase,
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
	return Z_Registration_Info_UClass_AChallengeDatabase.InnerSingleton;
}
UClass* Z_Construct_UClass_AChallengeDatabase_NoRegister()
{
	return AChallengeDatabase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AChallengeDatabase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Challenge/ChallengeDatabase.h" },
		{ "ModuleRelativePath", "Challenge/ChallengeDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChallengesRegistry_MetaData[] = {
		{ "ModuleRelativePath", "Challenge/ChallengeDatabase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChallengesRegistry_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChallengesRegistry;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AChallengeDatabase_RegisterDuel, "RegisterDuel" }, // 2678374334
		{ &Z_Construct_UFunction_AChallengeDatabase_SendRegistryToInstance, "SendRegistryToInstance" }, // 402277633
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChallengeDatabase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChallengeDatabase_Statics::NewProp_ChallengesRegistry_Inner = { "ChallengesRegistry", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UChallengeDto_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AChallengeDatabase_Statics::NewProp_ChallengesRegistry = { "ChallengesRegistry", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChallengeDatabase, ChallengesRegistry), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChallengesRegistry_MetaData), NewProp_ChallengesRegistry_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChallengeDatabase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChallengeDatabase_Statics::NewProp_ChallengesRegistry_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChallengeDatabase_Statics::NewProp_ChallengesRegistry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChallengeDatabase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AChallengeDatabase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChallengeDatabase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AChallengeDatabase_Statics::ClassParams = {
	&AChallengeDatabase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AChallengeDatabase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AChallengeDatabase_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChallengeDatabase_Statics::Class_MetaDataParams), Z_Construct_UClass_AChallengeDatabase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AChallengeDatabase()
{
	if (!Z_Registration_Info_UClass_AChallengeDatabase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChallengeDatabase.OuterSingleton, Z_Construct_UClass_AChallengeDatabase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AChallengeDatabase.OuterSingleton;
}
AChallengeDatabase::AChallengeDatabase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AChallengeDatabase);
AChallengeDatabase::~AChallengeDatabase() {}
// ********** End Class AChallengeDatabase *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeDatabase_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AChallengeDatabase, AChallengeDatabase::StaticClass, TEXT("AChallengeDatabase"), &Z_Registration_Info_UClass_AChallengeDatabase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChallengeDatabase), 971404359U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeDatabase_h__Script_PartyJungle_3983746420(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeDatabase_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeDatabase_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
