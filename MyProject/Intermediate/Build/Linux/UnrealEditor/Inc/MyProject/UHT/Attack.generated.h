// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Attack.h"

#ifdef MYPROJECT_Attack_generated_h
#error "Attack.generated.h already included, missing '#pragma once' in Attack.h"
#endif
#define MYPROJECT_Attack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAttack ******************************************************************
MYPROJECT_API UClass* Z_Construct_UClass_AAttack_NoRegister();

#define FID_Unreal_Projects_MyProject_Source_MyProject_Attack_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAttack(); \
	friend struct Z_Construct_UClass_AAttack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* Z_Construct_UClass_AAttack_NoRegister(); \
public: \
	DECLARE_CLASS2(AAttack, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_AAttack_NoRegister) \
	DECLARE_SERIALIZER(AAttack)


#define FID_Unreal_Projects_MyProject_Source_MyProject_Attack_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAttack(AAttack&&) = delete; \
	AAttack(const AAttack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAttack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAttack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAttack) \
	NO_API virtual ~AAttack();


#define FID_Unreal_Projects_MyProject_Source_MyProject_Attack_h_12_PROLOG
#define FID_Unreal_Projects_MyProject_Source_MyProject_Attack_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_MyProject_Source_MyProject_Attack_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_MyProject_Source_MyProject_Attack_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAttack;

// ********** End Class AAttack ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_MyProject_Source_MyProject_Attack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
