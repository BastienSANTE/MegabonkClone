// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/MegabonkWorldSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMegabonkWorldSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
MYPROJECT_API UClass* Z_Construct_UClass_UMegabonkWorldSubsystem();
MYPROJECT_API UClass* Z_Construct_UClass_UMegabonkWorldSubsystem_NoRegister();
MYPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMegabonkPlayerData();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMegabonkPlayerData ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMegabonkPlayerData;
class UScriptStruct* FMegabonkPlayerData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMegabonkPlayerData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMegabonkPlayerData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMegabonkPlayerData, (UObject*)Z_Construct_UPackage__Script_MyProject(), TEXT("MegabonkPlayerData"));
	}
	return Z_Registration_Info_UScriptStruct_FMegabonkPlayerData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMegabonkPlayerData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Player data structure. This handles all the\nbasic player-relevant data, such as level, XP, money, etc.\nInitialization happens here ATM, ask Julien if it's clean enough.\nSince there is always 1 and only player, I'm not enclined to\nuse a data table.\n\n---x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x---\n\nEnemies will deal damage to the player by asking a setting\nto the values of this struct. Moreover, since this is part\nof a singleton, we don't have to worry about multiple Player\ndata structures existing.\n*/" },
#endif
		{ "ModuleRelativePath", "MegabonkWorldSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player data structure. This handles all the\nbasic player-relevant data, such as level, XP, money, etc.\nInitialization happens here ATM, ask Julien if it's clean enough.\nSince there is always 1 and only player, I'm not enclined to\nuse a data table.\n\n---x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x---\n\nEnemies will deal damage to the player by asking a setting\nto the values of this struct. Moreover, since this is part\nof a singleton, we don't have to worry about multiple Player\ndata structures existing." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMegabonkPlayerData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMegabonkPlayerData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	nullptr,
	&NewStructOps,
	"MegabonkPlayerData",
	nullptr,
	0,
	sizeof(FMegabonkPlayerData),
	alignof(FMegabonkPlayerData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMegabonkPlayerData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMegabonkPlayerData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMegabonkPlayerData()
{
	if (!Z_Registration_Info_UScriptStruct_FMegabonkPlayerData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMegabonkPlayerData.InnerSingleton, Z_Construct_UScriptStruct_FMegabonkPlayerData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMegabonkPlayerData.InnerSingleton;
}
// ********** End ScriptStruct FMegabonkPlayerData *************************************************

// ********** Begin Class UMegabonkWorldSubsystem Function GetExperience ***************************
struct Z_Construct_UFunction_UMegabonkWorldSubsystem_GetExperience_Statics
{
	struct MegabonkWorldSubsystem_eventGetExperience_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A few getters to ease interaction w/ ui\n" },
#endif
		{ "ModuleRelativePath", "MegabonkWorldSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A few getters to ease interaction w/ ui" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMegabonkWorldSubsystem_GetExperience_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MegabonkWorldSubsystem_eventGetExperience_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMegabonkWorldSubsystem_GetExperience_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMegabonkWorldSubsystem_GetExperience_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMegabonkWorldSubsystem_GetExperience_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMegabonkWorldSubsystem_GetExperience_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMegabonkWorldSubsystem, nullptr, "GetExperience", Z_Construct_UFunction_UMegabonkWorldSubsystem_GetExperience_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMegabonkWorldSubsystem_GetExperience_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMegabonkWorldSubsystem_GetExperience_Statics::MegabonkWorldSubsystem_eventGetExperience_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMegabonkWorldSubsystem_GetExperience_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMegabonkWorldSubsystem_GetExperience_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMegabonkWorldSubsystem_GetExperience_Statics::MegabonkWorldSubsystem_eventGetExperience_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMegabonkWorldSubsystem_GetExperience()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMegabonkWorldSubsystem_GetExperience_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMegabonkWorldSubsystem::execGetExperience)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetExperience();
	P_NATIVE_END;
}
// ********** End Class UMegabonkWorldSubsystem Function GetExperience *****************************

// ********** Begin Class UMegabonkWorldSubsystem Function GetLevel ********************************
struct Z_Construct_UFunction_UMegabonkWorldSubsystem_GetLevel_Statics
{
	struct MegabonkWorldSubsystem_eventGetLevel_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "MegabonkWorldSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMegabonkWorldSubsystem_GetLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MegabonkWorldSubsystem_eventGetLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMegabonkWorldSubsystem_GetLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMegabonkWorldSubsystem_GetLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMegabonkWorldSubsystem_GetLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMegabonkWorldSubsystem_GetLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMegabonkWorldSubsystem, nullptr, "GetLevel", Z_Construct_UFunction_UMegabonkWorldSubsystem_GetLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMegabonkWorldSubsystem_GetLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMegabonkWorldSubsystem_GetLevel_Statics::MegabonkWorldSubsystem_eventGetLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMegabonkWorldSubsystem_GetLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMegabonkWorldSubsystem_GetLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMegabonkWorldSubsystem_GetLevel_Statics::MegabonkWorldSubsystem_eventGetLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMegabonkWorldSubsystem_GetLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMegabonkWorldSubsystem_GetLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMegabonkWorldSubsystem::execGetLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetLevel();
	P_NATIVE_END;
}
// ********** End Class UMegabonkWorldSubsystem Function GetLevel **********************************

// ********** Begin Class UMegabonkWorldSubsystem Function GetRemainingTime ************************
struct Z_Construct_UFunction_UMegabonkWorldSubsystem_GetRemainingTime_Statics
{
	struct MegabonkWorldSubsystem_eventGetRemainingTime_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "MegabonkWorldSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMegabonkWorldSubsystem_GetRemainingTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MegabonkWorldSubsystem_eventGetRemainingTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMegabonkWorldSubsystem_GetRemainingTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMegabonkWorldSubsystem_GetRemainingTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMegabonkWorldSubsystem_GetRemainingTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMegabonkWorldSubsystem_GetRemainingTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMegabonkWorldSubsystem, nullptr, "GetRemainingTime", Z_Construct_UFunction_UMegabonkWorldSubsystem_GetRemainingTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMegabonkWorldSubsystem_GetRemainingTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMegabonkWorldSubsystem_GetRemainingTime_Statics::MegabonkWorldSubsystem_eventGetRemainingTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMegabonkWorldSubsystem_GetRemainingTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMegabonkWorldSubsystem_GetRemainingTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMegabonkWorldSubsystem_GetRemainingTime_Statics::MegabonkWorldSubsystem_eventGetRemainingTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMegabonkWorldSubsystem_GetRemainingTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMegabonkWorldSubsystem_GetRemainingTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMegabonkWorldSubsystem::execGetRemainingTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetRemainingTime();
	P_NATIVE_END;
}
// ********** End Class UMegabonkWorldSubsystem Function GetRemainingTime **************************

// ********** Begin Class UMegabonkWorldSubsystem Function IncrementExperience *********************
struct Z_Construct_UFunction_UMegabonkWorldSubsystem_IncrementExperience_Statics
{
	struct MegabonkWorldSubsystem_eventIncrementExperience_Parms
	{
		int32 gainedExperience;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "MegabonkWorldSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_gainedExperience;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMegabonkWorldSubsystem_IncrementExperience_Statics::NewProp_gainedExperience = { "gainedExperience", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MegabonkWorldSubsystem_eventIncrementExperience_Parms, gainedExperience), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMegabonkWorldSubsystem_IncrementExperience_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMegabonkWorldSubsystem_IncrementExperience_Statics::NewProp_gainedExperience,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMegabonkWorldSubsystem_IncrementExperience_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMegabonkWorldSubsystem_IncrementExperience_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMegabonkWorldSubsystem, nullptr, "IncrementExperience", Z_Construct_UFunction_UMegabonkWorldSubsystem_IncrementExperience_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMegabonkWorldSubsystem_IncrementExperience_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMegabonkWorldSubsystem_IncrementExperience_Statics::MegabonkWorldSubsystem_eventIncrementExperience_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMegabonkWorldSubsystem_IncrementExperience_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMegabonkWorldSubsystem_IncrementExperience_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMegabonkWorldSubsystem_IncrementExperience_Statics::MegabonkWorldSubsystem_eventIncrementExperience_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMegabonkWorldSubsystem_IncrementExperience()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMegabonkWorldSubsystem_IncrementExperience_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMegabonkWorldSubsystem::execIncrementExperience)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_gainedExperience);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncrementExperience(Z_Param_gainedExperience);
	P_NATIVE_END;
}
// ********** End Class UMegabonkWorldSubsystem Function IncrementExperience ***********************

// ********** Begin Class UMegabonkWorldSubsystem Function LevelUp *********************************
struct Z_Construct_UFunction_UMegabonkWorldSubsystem_LevelUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum game length\n" },
#endif
		{ "ModuleRelativePath", "MegabonkWorldSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum game length" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMegabonkWorldSubsystem_LevelUp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMegabonkWorldSubsystem, nullptr, "LevelUp", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMegabonkWorldSubsystem_LevelUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMegabonkWorldSubsystem_LevelUp_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMegabonkWorldSubsystem_LevelUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMegabonkWorldSubsystem_LevelUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMegabonkWorldSubsystem::execLevelUp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LevelUp();
	P_NATIVE_END;
}
// ********** End Class UMegabonkWorldSubsystem Function LevelUp ***********************************

// ********** Begin Class UMegabonkWorldSubsystem **************************************************
void UMegabonkWorldSubsystem::StaticRegisterNativesUMegabonkWorldSubsystem()
{
	UClass* Class = UMegabonkWorldSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetExperience", &UMegabonkWorldSubsystem::execGetExperience },
		{ "GetLevel", &UMegabonkWorldSubsystem::execGetLevel },
		{ "GetRemainingTime", &UMegabonkWorldSubsystem::execGetRemainingTime },
		{ "IncrementExperience", &UMegabonkWorldSubsystem::execIncrementExperience },
		{ "LevelUp", &UMegabonkWorldSubsystem::execLevelUp },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMegabonkWorldSubsystem;
UClass* UMegabonkWorldSubsystem::GetPrivateStaticClass()
{
	using TClass = UMegabonkWorldSubsystem;
	if (!Z_Registration_Info_UClass_UMegabonkWorldSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MegabonkWorldSubsystem"),
			Z_Registration_Info_UClass_UMegabonkWorldSubsystem.InnerSingleton,
			StaticRegisterNativesUMegabonkWorldSubsystem,
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
	return Z_Registration_Info_UClass_UMegabonkWorldSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UMegabonkWorldSubsystem_NoRegister()
{
	return UMegabonkWorldSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMegabonkWorldSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MegabonkWorldSubsystem.h" },
		{ "ModuleRelativePath", "MegabonkWorldSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameLength_MetaData[] = {
		{ "Category", "Time Management" },
		{ "ModuleRelativePath", "MegabonkWorldSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GameLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMegabonkWorldSubsystem_GetExperience, "GetExperience" }, // 2649303723
		{ &Z_Construct_UFunction_UMegabonkWorldSubsystem_GetLevel, "GetLevel" }, // 425609255
		{ &Z_Construct_UFunction_UMegabonkWorldSubsystem_GetRemainingTime, "GetRemainingTime" }, // 2969391063
		{ &Z_Construct_UFunction_UMegabonkWorldSubsystem_IncrementExperience, "IncrementExperience" }, // 851250865
		{ &Z_Construct_UFunction_UMegabonkWorldSubsystem_LevelUp, "LevelUp" }, // 1747651365
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMegabonkWorldSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMegabonkWorldSubsystem_Statics::NewProp_GameLength = { "GameLength", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMegabonkWorldSubsystem, GameLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameLength_MetaData), NewProp_GameLength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMegabonkWorldSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMegabonkWorldSubsystem_Statics::NewProp_GameLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMegabonkWorldSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMegabonkWorldSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMegabonkWorldSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMegabonkWorldSubsystem_Statics::ClassParams = {
	&UMegabonkWorldSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMegabonkWorldSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMegabonkWorldSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMegabonkWorldSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMegabonkWorldSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMegabonkWorldSubsystem()
{
	if (!Z_Registration_Info_UClass_UMegabonkWorldSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMegabonkWorldSubsystem.OuterSingleton, Z_Construct_UClass_UMegabonkWorldSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMegabonkWorldSubsystem.OuterSingleton;
}
UMegabonkWorldSubsystem::UMegabonkWorldSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMegabonkWorldSubsystem);
UMegabonkWorldSubsystem::~UMegabonkWorldSubsystem() {}
// ********** End Class UMegabonkWorldSubsystem ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_MyProject_Source_MyProject_MegabonkWorldSubsystem_h__Script_MyProject_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMegabonkPlayerData::StaticStruct, Z_Construct_UScriptStruct_FMegabonkPlayerData_Statics::NewStructOps, TEXT("MegabonkPlayerData"), &Z_Registration_Info_UScriptStruct_FMegabonkPlayerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMegabonkPlayerData), 1556346294U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMegabonkWorldSubsystem, UMegabonkWorldSubsystem::StaticClass, TEXT("UMegabonkWorldSubsystem"), &Z_Registration_Info_UClass_UMegabonkWorldSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMegabonkWorldSubsystem), 4013754656U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_MyProject_Source_MyProject_MegabonkWorldSubsystem_h__Script_MyProject_1290574956(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_MyProject_Source_MyProject_MegabonkWorldSubsystem_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_MyProject_Source_MyProject_MegabonkWorldSubsystem_h__Script_MyProject_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_MyProject_Source_MyProject_MegabonkWorldSubsystem_h__Script_MyProject_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_MyProject_Source_MyProject_MegabonkWorldSubsystem_h__Script_MyProject_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
