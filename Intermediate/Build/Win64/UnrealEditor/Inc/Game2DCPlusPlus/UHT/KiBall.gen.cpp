// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Projectiles/KiBall.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKiBall() {}

// ********** Begin Cross Module References ********************************************************
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AKiBall();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AKiBall_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AKiProjectile();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AKiBall ******************************************************************
void AKiBall::StaticRegisterNativesAKiBall()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AKiBall;
UClass* AKiBall::GetPrivateStaticClass()
{
	using TClass = AKiBall;
	if (!Z_Registration_Info_UClass_AKiBall.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("KiBall"),
			Z_Registration_Info_UClass_AKiBall.InnerSingleton,
			StaticRegisterNativesAKiBall,
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
	return Z_Registration_Info_UClass_AKiBall.InnerSingleton;
}
UClass* Z_Construct_UClass_AKiBall_NoRegister()
{
	return AKiBall::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AKiBall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Abilities/Projectiles/KiBall.h" },
		{ "ModuleRelativePath", "Abilities/Projectiles/KiBall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "Category", "FX" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Abilities/Projectiles/KiBall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraEffect_MetaData[] = {
		{ "Category", "FX" },
		{ "ModuleRelativePath", "Abilities/Projectiles/KiBall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlipbookAsset_MetaData[] = {
		{ "Category", "Visual" },
		{ "ModuleRelativePath", "Abilities/Projectiles/KiBall.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlipbookAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKiBall>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKiBall_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKiBall, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKiBall_Statics::NewProp_NiagaraEffect = { "NiagaraEffect", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKiBall, NiagaraEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraEffect_MetaData), NewProp_NiagaraEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKiBall_Statics::NewProp_FlipbookAsset = { "FlipbookAsset", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKiBall, FlipbookAsset), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlipbookAsset_MetaData), NewProp_FlipbookAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKiBall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKiBall_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKiBall_Statics::NewProp_NiagaraEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKiBall_Statics::NewProp_FlipbookAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKiBall_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AKiBall_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AKiProjectile,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKiBall_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKiBall_Statics::ClassParams = {
	&AKiBall::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AKiBall_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AKiBall_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKiBall_Statics::Class_MetaDataParams), Z_Construct_UClass_AKiBall_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKiBall()
{
	if (!Z_Registration_Info_UClass_AKiBall.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKiBall.OuterSingleton, Z_Construct_UClass_AKiBall_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKiBall.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AKiBall);
AKiBall::~AKiBall() {}
// ********** End Class AKiBall ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Projectiles_KiBall_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKiBall, AKiBall::StaticClass, TEXT("AKiBall"), &Z_Registration_Info_UClass_AKiBall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKiBall), 433468414U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Projectiles_KiBall_h__Script_Game2DCPlusPlus_1852061324(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Projectiles_KiBall_h__Script_Game2DCPlusPlus_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Projectiles_KiBall_h__Script_Game2DCPlusPlus_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
