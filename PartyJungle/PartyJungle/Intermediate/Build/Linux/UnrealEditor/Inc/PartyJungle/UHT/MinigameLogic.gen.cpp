// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Minigame/CrossInfo/MinigameLogic.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMinigameLogic() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMapMenuCamera_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinigameLogic();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinigameLogic_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinion_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ATeamsGenerator_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UMinigameDataGameInstance_NoRegister();
PARTYJUNGLE_API UEnum* Z_Construct_UEnum_PartyJungle_EMinigameType();
PARTYJUNGLE_API UEnum* Z_Construct_UEnum_PartyJungle_ETeamsMode();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EMinigameType *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMinigameType;
static UEnum* EMinigameType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMinigameType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMinigameType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PartyJungle_EMinigameType, (UObject*)Z_Construct_UPackage__Script_PartyJungle(), TEXT("EMinigameType"));
	}
	return Z_Registration_Info_UEnum_EMinigameType.OuterSingleton;
}
template<> PARTYJUNGLE_API UEnum* StaticEnum<EMinigameType>()
{
	return EMinigameType_StaticEnum();
}
struct Z_Construct_UEnum_PartyJungle_EMinigameType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DUEL.DisplayName", "DUEL" },
		{ "DUEL.Name", "EMinigameType::DUEL" },
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
		{ "TEAM_MINIGAME.DisplayName", "TEAM MINIGAME" },
		{ "TEAM_MINIGAME.Name", "EMinigameType::TEAM_MINIGAME" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMinigameType::DUEL", (int64)EMinigameType::DUEL },
		{ "EMinigameType::TEAM_MINIGAME", (int64)EMinigameType::TEAM_MINIGAME },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PartyJungle_EMinigameType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PartyJungle,
	nullptr,
	"EMinigameType",
	"EMinigameType",
	Z_Construct_UEnum_PartyJungle_EMinigameType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PartyJungle_EMinigameType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PartyJungle_EMinigameType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PartyJungle_EMinigameType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PartyJungle_EMinigameType()
{
	if (!Z_Registration_Info_UEnum_EMinigameType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMinigameType.InnerSingleton, Z_Construct_UEnum_PartyJungle_EMinigameType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMinigameType.InnerSingleton;
}
// ********** End Enum EMinigameType ***************************************************************

// ********** Begin Enum ETeamsMode ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETeamsMode;
static UEnum* ETeamsMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETeamsMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETeamsMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PartyJungle_ETeamsMode, (UObject*)Z_Construct_UPackage__Script_PartyJungle(), TEXT("ETeamsMode"));
	}
	return Z_Registration_Info_UEnum_ETeamsMode.OuterSingleton;
}
template<> PARTYJUNGLE_API UEnum* StaticEnum<ETeamsMode>()
{
	return ETeamsMode_StaticEnum();
}
struct Z_Construct_UEnum_PartyJungle_ETeamsMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
		{ "NOTEAM.DisplayName", "NO_TEAMS" },
		{ "NOTEAM.Name", "ETeamsMode::NOTEAM" },
		{ "ONE_VS_THREE.DisplayName", "ONE_VS_THREE" },
		{ "ONE_VS_THREE.Name", "ETeamsMode::ONE_VS_THREE" },
		{ "TWO_VS_TWO.DisplayName", "TWO_VS_TWO" },
		{ "TWO_VS_TWO.Name", "ETeamsMode::TWO_VS_TWO" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETeamsMode::NOTEAM", (int64)ETeamsMode::NOTEAM },
		{ "ETeamsMode::TWO_VS_TWO", (int64)ETeamsMode::TWO_VS_TWO },
		{ "ETeamsMode::ONE_VS_THREE", (int64)ETeamsMode::ONE_VS_THREE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PartyJungle_ETeamsMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PartyJungle,
	nullptr,
	"ETeamsMode",
	"ETeamsMode",
	Z_Construct_UEnum_PartyJungle_ETeamsMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PartyJungle_ETeamsMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PartyJungle_ETeamsMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PartyJungle_ETeamsMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PartyJungle_ETeamsMode()
{
	if (!Z_Registration_Info_UEnum_ETeamsMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETeamsMode.InnerSingleton, Z_Construct_UEnum_PartyJungle_ETeamsMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETeamsMode.InnerSingleton;
}
// ********** End Enum ETeamsMode ******************************************************************

// ********** Begin Class AMinigameLogic Function BeginMinigame ************************************
struct Z_Construct_UFunction_AMinigameLogic_BeginMinigame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameLogic_BeginMinigame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameLogic, nullptr, "BeginMinigame", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_BeginMinigame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameLogic_BeginMinigame_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMinigameLogic_BeginMinigame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameLogic_BeginMinigame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameLogic::execBeginMinigame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginMinigame();
	P_NATIVE_END;
}
// ********** End Class AMinigameLogic Function BeginMinigame **************************************

// ********** Begin Class AMinigameLogic Function CalculateTeamMinigameWinners *********************
struct Z_Construct_UFunction_AMinigameLogic_CalculateTeamMinigameWinners_Statics
{
	struct MinigameLogic_eventCalculateTeamMinigameWinners_Parms
	{
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinigameLogic_CalculateTeamMinigameWinners_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMinigameLogic_CalculateTeamMinigameWinners_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameLogic_eventCalculateTeamMinigameWinners_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameLogic_CalculateTeamMinigameWinners_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameLogic_CalculateTeamMinigameWinners_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameLogic_CalculateTeamMinigameWinners_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_CalculateTeamMinigameWinners_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameLogic_CalculateTeamMinigameWinners_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameLogic, nullptr, "CalculateTeamMinigameWinners", Z_Construct_UFunction_AMinigameLogic_CalculateTeamMinigameWinners_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_CalculateTeamMinigameWinners_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameLogic_CalculateTeamMinigameWinners_Statics::MinigameLogic_eventCalculateTeamMinigameWinners_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_CalculateTeamMinigameWinners_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameLogic_CalculateTeamMinigameWinners_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMinigameLogic_CalculateTeamMinigameWinners_Statics::MinigameLogic_eventCalculateTeamMinigameWinners_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameLogic_CalculateTeamMinigameWinners()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameLogic_CalculateTeamMinigameWinners_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameLogic::execCalculateTeamMinigameWinners)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=P_THIS->CalculateTeamMinigameWinners();
	P_NATIVE_END;
}
// ********** End Class AMinigameLogic Function CalculateTeamMinigameWinners ***********************

// ********** Begin Class AMinigameLogic Function CheckIfTheMinigameHasFinished ********************
struct Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished_Statics
{
	struct MinigameLogic_eventCheckIfTheMinigameHasFinished_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MinigameLogic_eventCheckIfTheMinigameHasFinished_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MinigameLogic_eventCheckIfTheMinigameHasFinished_Parms), &Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameLogic, nullptr, "CheckIfTheMinigameHasFinished", Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished_Statics::MinigameLogic_eventCheckIfTheMinigameHasFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished_Statics::MinigameLogic_eventCheckIfTheMinigameHasFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameLogic::execCheckIfTheMinigameHasFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckIfTheMinigameHasFinished();
	P_NATIVE_END;
}
// ********** End Class AMinigameLogic Function CheckIfTheMinigameHasFinished **********************

// ********** Begin Class AMinigameLogic Function DelayedSceneSwitch *******************************
struct Z_Construct_UFunction_AMinigameLogic_DelayedSceneSwitch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameLogic_DelayedSceneSwitch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameLogic, nullptr, "DelayedSceneSwitch", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_DelayedSceneSwitch_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameLogic_DelayedSceneSwitch_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMinigameLogic_DelayedSceneSwitch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameLogic_DelayedSceneSwitch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameLogic::execDelayedSceneSwitch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DelayedSceneSwitch();
	P_NATIVE_END;
}
// ********** End Class AMinigameLogic Function DelayedSceneSwitch *********************************

// ********** Begin Class AMinigameLogic Function FinishMinigame ***********************************
struct Z_Construct_UFunction_AMinigameLogic_FinishMinigame_Statics
{
	struct MinigameLogic_eventFinishMinigame_Parms
	{
		TArray<int32> _winners;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__winners_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__winners;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinigameLogic_FinishMinigame_Statics::NewProp__winners_Inner = { "_winners", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMinigameLogic_FinishMinigame_Statics::NewProp__winners = { "_winners", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameLogic_eventFinishMinigame_Parms, _winners), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameLogic_FinishMinigame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameLogic_FinishMinigame_Statics::NewProp__winners_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameLogic_FinishMinigame_Statics::NewProp__winners,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_FinishMinigame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameLogic_FinishMinigame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameLogic, nullptr, "FinishMinigame", Z_Construct_UFunction_AMinigameLogic_FinishMinigame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_FinishMinigame_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameLogic_FinishMinigame_Statics::MinigameLogic_eventFinishMinigame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_FinishMinigame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameLogic_FinishMinigame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMinigameLogic_FinishMinigame_Statics::MinigameLogic_eventFinishMinigame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameLogic_FinishMinigame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameLogic_FinishMinigame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameLogic::execFinishMinigame)
{
	P_GET_TARRAY(int32,Z_Param__winners);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishMinigame(Z_Param__winners);
	P_NATIVE_END;
}
// ********** End Class AMinigameLogic Function FinishMinigame *************************************

// ********** Begin Class AMinigameLogic Function InitializeMinigameInfoForDuel ********************
struct Z_Construct_UFunction_AMinigameLogic_InitializeMinigameInfoForDuel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameLogic_InitializeMinigameInfoForDuel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameLogic, nullptr, "InitializeMinigameInfoForDuel", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_InitializeMinigameInfoForDuel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameLogic_InitializeMinigameInfoForDuel_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMinigameLogic_InitializeMinigameInfoForDuel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameLogic_InitializeMinigameInfoForDuel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameLogic::execInitializeMinigameInfoForDuel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeMinigameInfoForDuel();
	P_NATIVE_END;
}
// ********** End Class AMinigameLogic Function InitializeMinigameInfoForDuel **********************

// ********** Begin Class AMinigameLogic Function InitializeMinigameInfoForTeam ********************
struct Z_Construct_UFunction_AMinigameLogic_InitializeMinigameInfoForTeam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameLogic_InitializeMinigameInfoForTeam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameLogic, nullptr, "InitializeMinigameInfoForTeam", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_InitializeMinigameInfoForTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameLogic_InitializeMinigameInfoForTeam_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMinigameLogic_InitializeMinigameInfoForTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameLogic_InitializeMinigameInfoForTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameLogic::execInitializeMinigameInfoForTeam)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeMinigameInfoForTeam();
	P_NATIVE_END;
}
// ********** End Class AMinigameLogic Function InitializeMinigameInfoForTeam **********************

// ********** Begin Class AMinigameLogic Function ResetMinigameScene *******************************
struct Z_Construct_UFunction_AMinigameLogic_ResetMinigameScene_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minigame_functions" },
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameLogic_ResetMinigameScene_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameLogic, nullptr, "ResetMinigameScene", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_ResetMinigameScene_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameLogic_ResetMinigameScene_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMinigameLogic_ResetMinigameScene()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameLogic_ResetMinigameScene_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameLogic::execResetMinigameScene)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetMinigameScene();
	P_NATIVE_END;
}
// ********** End Class AMinigameLogic Function ResetMinigameScene *********************************

// ********** Begin Class AMinigameLogic Function SetTeamReady *************************************
struct Z_Construct_UFunction_AMinigameLogic_SetTeamReady_Statics
{
	struct MinigameLogic_eventSetTeamReady_Parms
	{
		int32 _team;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__team;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinigameLogic_SetTeamReady_Statics::NewProp__team = { "_team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameLogic_eventSetTeamReady_Parms, _team), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameLogic_SetTeamReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameLogic_SetTeamReady_Statics::NewProp__team,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_SetTeamReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameLogic_SetTeamReady_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameLogic, nullptr, "SetTeamReady", Z_Construct_UFunction_AMinigameLogic_SetTeamReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_SetTeamReady_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameLogic_SetTeamReady_Statics::MinigameLogic_eventSetTeamReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_SetTeamReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameLogic_SetTeamReady_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMinigameLogic_SetTeamReady_Statics::MinigameLogic_eventSetTeamReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameLogic_SetTeamReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameLogic_SetTeamReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameLogic::execSetTeamReady)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__team);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTeamReady(Z_Param__team);
	P_NATIVE_END;
}
// ********** End Class AMinigameLogic Function SetTeamReady ***************************************

// ********** Begin Class AMinigameLogic Function SetTeamScore *************************************
struct Z_Construct_UFunction_AMinigameLogic_SetTeamScore_Statics
{
	struct MinigameLogic_eventSetTeamScore_Parms
	{
		int32 _team;
		int32 _score;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__team;
	static const UECodeGen_Private::FIntPropertyParams NewProp__score;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinigameLogic_SetTeamScore_Statics::NewProp__team = { "_team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameLogic_eventSetTeamScore_Parms, _team), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinigameLogic_SetTeamScore_Statics::NewProp__score = { "_score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameLogic_eventSetTeamScore_Parms, _score), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameLogic_SetTeamScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameLogic_SetTeamScore_Statics::NewProp__team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameLogic_SetTeamScore_Statics::NewProp__score,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_SetTeamScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameLogic_SetTeamScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameLogic, nullptr, "SetTeamScore", Z_Construct_UFunction_AMinigameLogic_SetTeamScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_SetTeamScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameLogic_SetTeamScore_Statics::MinigameLogic_eventSetTeamScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_SetTeamScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameLogic_SetTeamScore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMinigameLogic_SetTeamScore_Statics::MinigameLogic_eventSetTeamScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameLogic_SetTeamScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameLogic_SetTeamScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameLogic::execSetTeamScore)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__team);
	P_GET_PROPERTY(FIntProperty,Z_Param__score);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTeamScore(Z_Param__team,Z_Param__score);
	P_NATIVE_END;
}
// ********** End Class AMinigameLogic Function SetTeamScore ***************************************

// ********** Begin Class AMinigameLogic Function ShowEndScreenSequence ****************************
struct MinigameLogic_eventShowEndScreenSequence_Parms
{
	int32 _winner;
};
static FName NAME_AMinigameLogic_ShowEndScreenSequence = FName(TEXT("ShowEndScreenSequence"));
void AMinigameLogic::ShowEndScreenSequence(int32 _winner)
{
	MinigameLogic_eventShowEndScreenSequence_Parms Parms;
	Parms._winner=_winner;
	UFunction* Func = FindFunctionChecked(NAME_AMinigameLogic_ShowEndScreenSequence);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMinigameLogic_ShowEndScreenSequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__winner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinigameLogic_ShowEndScreenSequence_Statics::NewProp__winner = { "_winner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameLogic_eventShowEndScreenSequence_Parms, _winner), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameLogic_ShowEndScreenSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameLogic_ShowEndScreenSequence_Statics::NewProp__winner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_ShowEndScreenSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameLogic_ShowEndScreenSequence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameLogic, nullptr, "ShowEndScreenSequence", Z_Construct_UFunction_AMinigameLogic_ShowEndScreenSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_ShowEndScreenSequence_Statics::PropPointers), sizeof(MinigameLogic_eventShowEndScreenSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_ShowEndScreenSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameLogic_ShowEndScreenSequence_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(MinigameLogic_eventShowEndScreenSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameLogic_ShowEndScreenSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameLogic_ShowEndScreenSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AMinigameLogic Function ShowEndScreenSequence ******************************

// ********** Begin Class AMinigameLogic Function ShowStartScreenSequence **************************
static FName NAME_AMinigameLogic_ShowStartScreenSequence = FName(TEXT("ShowStartScreenSequence"));
void AMinigameLogic::ShowStartScreenSequence()
{
	UFunction* Func = FindFunctionChecked(NAME_AMinigameLogic_ShowStartScreenSequence);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMinigameLogic_ShowStartScreenSequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameLogic_ShowStartScreenSequence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameLogic, nullptr, "ShowStartScreenSequence", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_ShowStartScreenSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameLogic_ShowStartScreenSequence_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMinigameLogic_ShowStartScreenSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameLogic_ShowStartScreenSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AMinigameLogic Function ShowStartScreenSequence ****************************

// ********** Begin Class AMinigameLogic Function ShowTeamEndScreenSequence ************************
struct MinigameLogic_eventShowTeamEndScreenSequence_Parms
{
	FText Message;
};
static FName NAME_AMinigameLogic_ShowTeamEndScreenSequence = FName(TEXT("ShowTeamEndScreenSequence"));
void AMinigameLogic::ShowTeamEndScreenSequence(FText const& Message)
{
	MinigameLogic_eventShowTeamEndScreenSequence_Parms Parms;
	Parms.Message=Message;
	UFunction* Func = FindFunctionChecked(NAME_AMinigameLogic_ShowTeamEndScreenSequence);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMinigameLogic_ShowTeamEndScreenSequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AMinigameLogic_ShowTeamEndScreenSequence_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameLogic_eventShowTeamEndScreenSequence_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameLogic_ShowTeamEndScreenSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameLogic_ShowTeamEndScreenSequence_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_ShowTeamEndScreenSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameLogic_ShowTeamEndScreenSequence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameLogic, nullptr, "ShowTeamEndScreenSequence", Z_Construct_UFunction_AMinigameLogic_ShowTeamEndScreenSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_ShowTeamEndScreenSequence_Statics::PropPointers), sizeof(MinigameLogic_eventShowTeamEndScreenSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_ShowTeamEndScreenSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameLogic_ShowTeamEndScreenSequence_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(MinigameLogic_eventShowTeamEndScreenSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameLogic_ShowTeamEndScreenSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameLogic_ShowTeamEndScreenSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AMinigameLogic Function ShowTeamEndScreenSequence **************************

// ********** Begin Class AMinigameLogic Function ShowWinnerScene **********************************
struct Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene_Statics
{
	struct MinigameLogic_eventShowWinnerScene_Parms
	{
		int32 _endMinigameTime;
		TArray<int32> _winners;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__endMinigameTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp__winners_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__winners;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene_Statics::NewProp__endMinigameTime = { "_endMinigameTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameLogic_eventShowWinnerScene_Parms, _endMinigameTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene_Statics::NewProp__winners_Inner = { "_winners", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene_Statics::NewProp__winners = { "_winners", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameLogic_eventShowWinnerScene_Parms, _winners), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene_Statics::NewProp__endMinigameTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene_Statics::NewProp__winners_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene_Statics::NewProp__winners,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameLogic, nullptr, "ShowWinnerScene", Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene_Statics::MinigameLogic_eventShowWinnerScene_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene_Statics::MinigameLogic_eventShowWinnerScene_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameLogic::execShowWinnerScene)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__endMinigameTime);
	P_GET_TARRAY(int32,Z_Param__winners);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowWinnerScene(Z_Param__endMinigameTime,Z_Param__winners);
	P_NATIVE_END;
}
// ********** End Class AMinigameLogic Function ShowWinnerScene ************************************

// ********** Begin Class AMinigameLogic Function StartMinigame ************************************
struct Z_Construct_UFunction_AMinigameLogic_StartMinigame_Statics
{
	struct MinigameLogic_eventStartMinigame_Parms
	{
		int32 _startTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__startTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinigameLogic_StartMinigame_Statics::NewProp__startTime = { "_startTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameLogic_eventStartMinigame_Parms, _startTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameLogic_StartMinigame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameLogic_StartMinigame_Statics::NewProp__startTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_StartMinigame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameLogic_StartMinigame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameLogic, nullptr, "StartMinigame", Z_Construct_UFunction_AMinigameLogic_StartMinigame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_StartMinigame_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameLogic_StartMinigame_Statics::MinigameLogic_eventStartMinigame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_StartMinigame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameLogic_StartMinigame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMinigameLogic_StartMinigame_Statics::MinigameLogic_eventStartMinigame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameLogic_StartMinigame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameLogic_StartMinigame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameLogic::execStartMinigame)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__startTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartMinigame(Z_Param__startTime);
	P_NATIVE_END;
}
// ********** End Class AMinigameLogic Function StartMinigame **************************************

// ********** Begin Class AMinigameLogic Function StartMinigameScoresAndReadyInfo ******************
struct Z_Construct_UFunction_AMinigameLogic_StartMinigameScoresAndReadyInfo_Statics
{
	struct MinigameLogic_eventStartMinigameScoresAndReadyInfo_Parms
	{
		TArray<AMinion*> _minions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__minions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__minions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinigameLogic_StartMinigameScoresAndReadyInfo_Statics::NewProp__minions_Inner = { "_minions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMinigameLogic_StartMinigameScoresAndReadyInfo_Statics::NewProp__minions = { "_minions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameLogic_eventStartMinigameScoresAndReadyInfo_Parms, _minions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameLogic_StartMinigameScoresAndReadyInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameLogic_StartMinigameScoresAndReadyInfo_Statics::NewProp__minions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameLogic_StartMinigameScoresAndReadyInfo_Statics::NewProp__minions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_StartMinigameScoresAndReadyInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameLogic_StartMinigameScoresAndReadyInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameLogic, nullptr, "StartMinigameScoresAndReadyInfo", Z_Construct_UFunction_AMinigameLogic_StartMinigameScoresAndReadyInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_StartMinigameScoresAndReadyInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameLogic_StartMinigameScoresAndReadyInfo_Statics::MinigameLogic_eventStartMinigameScoresAndReadyInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_StartMinigameScoresAndReadyInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameLogic_StartMinigameScoresAndReadyInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMinigameLogic_StartMinigameScoresAndReadyInfo_Statics::MinigameLogic_eventStartMinigameScoresAndReadyInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameLogic_StartMinigameScoresAndReadyInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameLogic_StartMinigameScoresAndReadyInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameLogic::execStartMinigameScoresAndReadyInfo)
{
	P_GET_TARRAY(AMinion*,Z_Param__minions);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartMinigameScoresAndReadyInfo(Z_Param__minions);
	P_NATIVE_END;
}
// ********** End Class AMinigameLogic Function StartMinigameScoresAndReadyInfo ********************

// ********** Begin Class AMinigameLogic ***********************************************************
void AMinigameLogic::StaticRegisterNativesAMinigameLogic()
{
	UClass* Class = AMinigameLogic::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginMinigame", &AMinigameLogic::execBeginMinigame },
		{ "CalculateTeamMinigameWinners", &AMinigameLogic::execCalculateTeamMinigameWinners },
		{ "CheckIfTheMinigameHasFinished", &AMinigameLogic::execCheckIfTheMinigameHasFinished },
		{ "DelayedSceneSwitch", &AMinigameLogic::execDelayedSceneSwitch },
		{ "FinishMinigame", &AMinigameLogic::execFinishMinigame },
		{ "InitializeMinigameInfoForDuel", &AMinigameLogic::execInitializeMinigameInfoForDuel },
		{ "InitializeMinigameInfoForTeam", &AMinigameLogic::execInitializeMinigameInfoForTeam },
		{ "ResetMinigameScene", &AMinigameLogic::execResetMinigameScene },
		{ "SetTeamReady", &AMinigameLogic::execSetTeamReady },
		{ "SetTeamScore", &AMinigameLogic::execSetTeamScore },
		{ "ShowWinnerScene", &AMinigameLogic::execShowWinnerScene },
		{ "StartMinigame", &AMinigameLogic::execStartMinigame },
		{ "StartMinigameScoresAndReadyInfo", &AMinigameLogic::execStartMinigameScoresAndReadyInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMinigameLogic;
UClass* AMinigameLogic::GetPrivateStaticClass()
{
	using TClass = AMinigameLogic;
	if (!Z_Registration_Info_UClass_AMinigameLogic.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MinigameLogic"),
			Z_Registration_Info_UClass_AMinigameLogic.InnerSingleton,
			StaticRegisterNativesAMinigameLogic,
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
	return Z_Registration_Info_UClass_AMinigameLogic.InnerSingleton;
}
UClass* Z_Construct_UClass_AMinigameLogic_NoRegister()
{
	return AMinigameLogic::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMinigameLogic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Minigame/CrossInfo/MinigameLogic.h" },
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinigameType_MetaData[] = {
		{ "Category", "Minigame Type" },
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamMode_MetaData[] = {
		{ "Category", "Minigame Type" },
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinigameActors_MetaData[] = {
		{ "Category", "Minigame Assets" },
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Minigame Camera" },
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinigameMoney_MetaData[] = {
		{ "Category", "MinigameLogic" },
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamsGenerator_MetaData[] = {
		{ "Category", "Minigame Camera" },
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapMenuCamera_MetaData[] = {
		{ "Category", "MinigameLogic" },
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayingMinionsDuel_MetaData[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WinnerMinions_MetaData[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamMinigameScores_MetaData[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamsReady_MetaData[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinigameStarted_MetaData[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Winners_MetaData[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MinigameType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MinigameType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TeamMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TeamMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MinigameActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MinigameActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinigameMoney;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TeamsGenerator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapMenuCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayingMinionsDuel_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayingMinionsDuel_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PlayingMinionsDuel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WinnerMinions_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WinnerMinions_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_WinnerMinions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamMinigameScores_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamMinigameScores_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TeamMinigameScores;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TeamsReady_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamsReady_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TeamsReady;
	static void NewProp_MinigameStarted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MinigameStarted;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Winners_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Winners;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMinigameLogic_BeginMinigame, "BeginMinigame" }, // 2798710708
		{ &Z_Construct_UFunction_AMinigameLogic_CalculateTeamMinigameWinners, "CalculateTeamMinigameWinners" }, // 3135116638
		{ &Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished, "CheckIfTheMinigameHasFinished" }, // 2507045694
		{ &Z_Construct_UFunction_AMinigameLogic_DelayedSceneSwitch, "DelayedSceneSwitch" }, // 989486226
		{ &Z_Construct_UFunction_AMinigameLogic_FinishMinigame, "FinishMinigame" }, // 724874432
		{ &Z_Construct_UFunction_AMinigameLogic_InitializeMinigameInfoForDuel, "InitializeMinigameInfoForDuel" }, // 3822354565
		{ &Z_Construct_UFunction_AMinigameLogic_InitializeMinigameInfoForTeam, "InitializeMinigameInfoForTeam" }, // 1709230702
		{ &Z_Construct_UFunction_AMinigameLogic_ResetMinigameScene, "ResetMinigameScene" }, // 814468740
		{ &Z_Construct_UFunction_AMinigameLogic_SetTeamReady, "SetTeamReady" }, // 3079824194
		{ &Z_Construct_UFunction_AMinigameLogic_SetTeamScore, "SetTeamScore" }, // 317174834
		{ &Z_Construct_UFunction_AMinigameLogic_ShowEndScreenSequence, "ShowEndScreenSequence" }, // 192778728
		{ &Z_Construct_UFunction_AMinigameLogic_ShowStartScreenSequence, "ShowStartScreenSequence" }, // 297265215
		{ &Z_Construct_UFunction_AMinigameLogic_ShowTeamEndScreenSequence, "ShowTeamEndScreenSequence" }, // 2586637747
		{ &Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene, "ShowWinnerScene" }, // 2238785350
		{ &Z_Construct_UFunction_AMinigameLogic_StartMinigame, "StartMinigame" }, // 3749851246
		{ &Z_Construct_UFunction_AMinigameLogic_StartMinigameScoresAndReadyInfo, "StartMinigameScoresAndReadyInfo" }, // 2169996804
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinigameLogic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_MinigameType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_MinigameType = { "MinigameType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameLogic, MinigameType), Z_Construct_UEnum_PartyJungle_EMinigameType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinigameType_MetaData), NewProp_MinigameType_MetaData) }; // 2530748103
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_TeamMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_TeamMode = { "TeamMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameLogic, TeamMode), Z_Construct_UEnum_PartyJungle_ETeamsMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamMode_MetaData), NewProp_TeamMode_MetaData) }; // 3706549719
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_MinigameActors_Inner = { "MinigameActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_MinigameActors = { "MinigameActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameLogic, MinigameActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinigameActors_MetaData), NewProp_MinigameActors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameLogic, Camera), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_MinigameMoney = { "MinigameMoney", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameLogic, MinigameMoney), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinigameMoney_MetaData), NewProp_MinigameMoney_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_TeamsGenerator = { "TeamsGenerator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameLogic, TeamsGenerator), Z_Construct_UClass_ATeamsGenerator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamsGenerator_MetaData), NewProp_TeamsGenerator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_GameInstance = { "GameInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameLogic, GameInstance), Z_Construct_UClass_UMinigameDataGameInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameInstance_MetaData), NewProp_GameInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_MapMenuCamera = { "MapMenuCamera", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameLogic, MapMenuCamera), Z_Construct_UClass_AMapMenuCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapMenuCamera_MetaData), NewProp_MapMenuCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_PlayingMinionsDuel_ValueProp = { "PlayingMinionsDuel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_PlayingMinionsDuel_Key_KeyProp = { "PlayingMinionsDuel_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_PlayingMinionsDuel = { "PlayingMinionsDuel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameLogic, PlayingMinionsDuel), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayingMinionsDuel_MetaData), NewProp_PlayingMinionsDuel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_WinnerMinions_ValueProp = { "WinnerMinions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_WinnerMinions_Key_KeyProp = { "WinnerMinions_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_WinnerMinions = { "WinnerMinions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameLogic, WinnerMinions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WinnerMinions_MetaData), NewProp_WinnerMinions_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_TeamMinigameScores_ValueProp = { "TeamMinigameScores", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_TeamMinigameScores_Key_KeyProp = { "TeamMinigameScores_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_TeamMinigameScores = { "TeamMinigameScores", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameLogic, TeamMinigameScores), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamMinigameScores_MetaData), NewProp_TeamMinigameScores_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_TeamsReady_ValueProp = { "TeamsReady", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_TeamsReady_Key_KeyProp = { "TeamsReady_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_TeamsReady = { "TeamsReady", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameLogic, TeamsReady), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamsReady_MetaData), NewProp_TeamsReady_MetaData) };
void Z_Construct_UClass_AMinigameLogic_Statics::NewProp_MinigameStarted_SetBit(void* Obj)
{
	((AMinigameLogic*)Obj)->MinigameStarted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_MinigameStarted = { "MinigameStarted", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMinigameLogic), &Z_Construct_UClass_AMinigameLogic_Statics::NewProp_MinigameStarted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinigameStarted_MetaData), NewProp_MinigameStarted_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameLogic, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_Winners_Inner = { "Winners", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_Winners = { "Winners", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameLogic, Winners), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Winners_MetaData), NewProp_Winners_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMinigameLogic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_MinigameType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_MinigameType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_TeamMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_TeamMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_MinigameActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_MinigameActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_MinigameMoney,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_TeamsGenerator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_GameInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_MapMenuCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_PlayingMinionsDuel_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_PlayingMinionsDuel_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_PlayingMinionsDuel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_WinnerMinions_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_WinnerMinions_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_WinnerMinions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_TeamMinigameScores_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_TeamMinigameScores_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_TeamMinigameScores,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_TeamsReady_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_TeamsReady_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_TeamsReady,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_MinigameStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_Winners_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_Winners,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigameLogic_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMinigameLogic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigameLogic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMinigameLogic_Statics::ClassParams = {
	&AMinigameLogic::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMinigameLogic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMinigameLogic_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigameLogic_Statics::Class_MetaDataParams), Z_Construct_UClass_AMinigameLogic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMinigameLogic()
{
	if (!Z_Registration_Info_UClass_AMinigameLogic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMinigameLogic.OuterSingleton, Z_Construct_UClass_AMinigameLogic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMinigameLogic.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMinigameLogic);
AMinigameLogic::~AMinigameLogic() {}
// ********** End Class AMinigameLogic *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h__Script_PartyJungle_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMinigameType_StaticEnum, TEXT("EMinigameType"), &Z_Registration_Info_UEnum_EMinigameType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2530748103U) },
		{ ETeamsMode_StaticEnum, TEXT("ETeamsMode"), &Z_Registration_Info_UEnum_ETeamsMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3706549719U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMinigameLogic, AMinigameLogic::StaticClass, TEXT("AMinigameLogic"), &Z_Registration_Info_UClass_AMinigameLogic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMinigameLogic), 1716749809U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h__Script_PartyJungle_182400999(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h__Script_PartyJungle_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h__Script_PartyJungle_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
