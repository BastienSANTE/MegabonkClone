// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MegabonkWorldSubsystem.h"

#ifdef MYPROJECT_MegabonkWorldSubsystem_generated_h
#error "MegabonkWorldSubsystem.generated.h already included, missing '#pragma once' in MegabonkWorldSubsystem.h"
#endif
#define MYPROJECT_MegabonkWorldSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMegabonkPlayerData ***********************************************
#define FID_Unreal_Projects_MyProject_Source_MyProject_MegabonkWorldSubsystem_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMegabonkPlayerData_Statics; \
	MYPROJECT_API static class UScriptStruct* StaticStruct();


struct FMegabonkPlayerData;
// ********** End ScriptStruct FMegabonkPlayerData *************************************************

// ********** Begin Class UMegabonkWorldSubsystem **************************************************
#define FID_Unreal_Projects_MyProject_Source_MyProject_MegabonkWorldSubsystem_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLevel); \
	DECLARE_FUNCTION(execGetRemainingTime); \
	DECLARE_FUNCTION(execGetExperience); \
	DECLARE_FUNCTION(execIncrementExperience); \
	DECLARE_FUNCTION(execLevelUp);


MYPROJECT_API UClass* Z_Construct_UClass_UMegabonkWorldSubsystem_NoRegister();

#define FID_Unreal_Projects_MyProject_Source_MyProject_MegabonkWorldSubsystem_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMegabonkWorldSubsystem(); \
	friend struct Z_Construct_UClass_UMegabonkWorldSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* Z_Construct_UClass_UMegabonkWorldSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMegabonkWorldSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_UMegabonkWorldSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMegabonkWorldSubsystem)


#define FID_Unreal_Projects_MyProject_Source_MyProject_MegabonkWorldSubsystem_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMegabonkWorldSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMegabonkWorldSubsystem(UMegabonkWorldSubsystem&&) = delete; \
	UMegabonkWorldSubsystem(const UMegabonkWorldSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMegabonkWorldSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMegabonkWorldSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMegabonkWorldSubsystem) \
	NO_API virtual ~UMegabonkWorldSubsystem();


#define FID_Unreal_Projects_MyProject_Source_MyProject_MegabonkWorldSubsystem_h_45_PROLOG
#define FID_Unreal_Projects_MyProject_Source_MyProject_MegabonkWorldSubsystem_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_MyProject_Source_MyProject_MegabonkWorldSubsystem_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_MyProject_Source_MyProject_MegabonkWorldSubsystem_h_48_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_MyProject_Source_MyProject_MegabonkWorldSubsystem_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMegabonkWorldSubsystem;

// ********** End Class UMegabonkWorldSubsystem ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_MyProject_Source_MyProject_MegabonkWorldSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
