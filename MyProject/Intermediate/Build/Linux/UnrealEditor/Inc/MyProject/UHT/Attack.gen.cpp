// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Attack.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAttack() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_AAttack();
MYPROJECT_API UClass* Z_Construct_UClass_AAttack_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAttack ******************************************************************
void AAttack::StaticRegisterNativesAAttack()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAttack;
UClass* AAttack::GetPrivateStaticClass()
{
	using TClass = AAttack;
	if (!Z_Registration_Info_UClass_AAttack.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Attack"),
			Z_Registration_Info_UClass_AAttack.InnerSingleton,
			StaticRegisterNativesAAttack,
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
	return Z_Registration_Info_UClass_AAttack.InnerSingleton;
}
UClass* Z_Construct_UClass_AAttack_NoRegister()
{
	return AAttack::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Attack.h" },
		{ "ModuleRelativePath", "Attack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cooldown_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Attack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default attack cooldown time\n" },
#endif
		{ "ModuleRelativePath", "Attack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default attack cooldown time" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Attack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackMeshComponent_MetaData[] = {
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*VISUALS*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Attack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VISUALS" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Cooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAttack_Statics::NewProp_Cooldown = { "Cooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAttack, Cooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cooldown_MetaData), NewProp_Cooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAttack_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAttack, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAttack_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAttack, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAttack_Statics::NewProp_AttackMeshComponent = { "AttackMeshComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAttack, AttackMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackMeshComponent_MetaData), NewProp_AttackMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttack_Statics::NewProp_Cooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttack_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttack_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttack_Statics::NewProp_AttackMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAttack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAttack_Statics::ClassParams = {
	&AAttack::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAttack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAttack_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_AAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAttack()
{
	if (!Z_Registration_Info_UClass_AAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAttack.OuterSingleton, Z_Construct_UClass_AAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAttack.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAttack);
AAttack::~AAttack() {}
// ********** End Class AAttack ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_MyProject_Source_MyProject_Attack_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAttack, AAttack::StaticClass, TEXT("AAttack"), &Z_Registration_Info_UClass_AAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAttack), 792709173U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_MyProject_Source_MyProject_Attack_h__Script_MyProject_2809974617(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_MyProject_Source_MyProject_Attack_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_MyProject_Source_MyProject_Attack_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
