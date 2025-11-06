// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Projectiles/KiProjectile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKiProjectile() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AKiProjectile();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AKiProjectile_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AMyKiAttack();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UHitboxComponent_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AKiProjectile Function HandleHit *****************************************
struct Z_Construct_UFunction_AKiProjectile_HandleHit_Statics
{
	struct KiProjectile_eventHandleHit_Parms
	{
		AActor* self;
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Abilities/Projectiles/KiProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_self;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKiProjectile_HandleHit_Statics::NewProp_self = { "self", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KiProjectile_eventHandleHit_Parms, self), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKiProjectile_HandleHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KiProjectile_eventHandleHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKiProjectile_HandleHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKiProjectile_HandleHit_Statics::NewProp_self,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKiProjectile_HandleHit_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AKiProjectile_HandleHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKiProjectile_HandleHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AKiProjectile, nullptr, "HandleHit", Z_Construct_UFunction_AKiProjectile_HandleHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKiProjectile_HandleHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AKiProjectile_HandleHit_Statics::KiProjectile_eventHandleHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKiProjectile_HandleHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKiProjectile_HandleHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AKiProjectile_HandleHit_Statics::KiProjectile_eventHandleHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AKiProjectile_HandleHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKiProjectile_HandleHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AKiProjectile::execHandleHit)
{
	P_GET_OBJECT(AActor,Z_Param_self);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleHit(Z_Param_self,Z_Param_OtherActor);
	P_NATIVE_END;
}
// ********** End Class AKiProjectile Function HandleHit *******************************************

// ********** Begin Class AKiProjectile ************************************************************
void AKiProjectile::StaticRegisterNativesAKiProjectile()
{
	UClass* Class = AKiProjectile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleHit", &AKiProjectile::execHandleHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AKiProjectile;
UClass* AKiProjectile::GetPrivateStaticClass()
{
	using TClass = AKiProjectile;
	if (!Z_Registration_Info_UClass_AKiProjectile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("KiProjectile"),
			Z_Registration_Info_UClass_AKiProjectile.InnerSingleton,
			StaticRegisterNativesAKiProjectile,
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
	return Z_Registration_Info_UClass_AKiProjectile.InnerSingleton;
}
UClass* Z_Construct_UClass_AKiProjectile_NoRegister()
{
	return AKiProjectile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AKiProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Abilities/Projectiles/KiProjectile.h" },
		{ "ModuleRelativePath", "Abilities/Projectiles/KiProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlipbookComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Abilities/Projectiles/KiProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitboxComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Abilities/Projectiles/KiProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpeed_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UBoxComponent* BoxComponent;\n" },
#endif
		{ "ModuleRelativePath", "Abilities/Projectiles/KiProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UBoxComponent* BoxComponent;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlipbookComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitboxComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AKiProjectile_HandleHit, "HandleHit" }, // 3710624693
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKiProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKiProjectile_Statics::NewProp_FlipbookComponent = { "FlipbookComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKiProjectile, FlipbookComponent), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlipbookComponent_MetaData), NewProp_FlipbookComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKiProjectile_Statics::NewProp_HitboxComponent = { "HitboxComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKiProjectile, HitboxComponent), Z_Construct_UClass_UHitboxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitboxComponent_MetaData), NewProp_HitboxComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKiProjectile_Statics::NewProp_ProjectileSpeed = { "ProjectileSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKiProjectile, ProjectileSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileSpeed_MetaData), NewProp_ProjectileSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKiProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKiProjectile_Statics::NewProp_FlipbookComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKiProjectile_Statics::NewProp_HitboxComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKiProjectile_Statics::NewProp_ProjectileSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKiProjectile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AKiProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMyKiAttack,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKiProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKiProjectile_Statics::ClassParams = {
	&AKiProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AKiProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AKiProjectile_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKiProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AKiProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKiProjectile()
{
	if (!Z_Registration_Info_UClass_AKiProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKiProjectile.OuterSingleton, Z_Construct_UClass_AKiProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKiProjectile.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AKiProjectile);
AKiProjectile::~AKiProjectile() {}
// ********** End Class AKiProjectile **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Projectiles_KiProjectile_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKiProjectile, AKiProjectile::StaticClass, TEXT("AKiProjectile"), &Z_Registration_Info_UClass_AKiProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKiProjectile), 1256168291U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Projectiles_KiProjectile_h__Script_Game2DCPlusPlus_2575558266(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Projectiles_KiProjectile_h__Script_Game2DCPlusPlus_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Projectiles_KiProjectile_h__Script_Game2DCPlusPlus_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
