// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/CharacterAbilitiesComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterAbilitiesComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AMyProjectileBase_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UCharacterAbilitiesComponent();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UCharacterAbilitiesComponent_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UCharacterCombatComponent_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// End Cross Module References

// Begin Class UCharacterAbilitiesComponent
void UCharacterAbilitiesComponent::StaticRegisterNativesUCharacterAbilitiesComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterAbilitiesComponent);
UClass* Z_Construct_UClass_UCharacterAbilitiesComponent_NoRegister()
{
	return UCharacterAbilitiesComponent::StaticClass();
}
struct Z_Construct_UClass_UCharacterAbilitiesComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CharacterAbilitiesComponent.h" },
		{ "ModuleRelativePath", "CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashDistance_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashCooldown_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashDuration_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KiCostForAttack_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwordDamages_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxKi_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Swing1SwordFlipbook_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Swing2SwordFlipbook_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Swing3SwordFlipbook_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "CharacterAbilitiesComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DashDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DashCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DashDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KiCostForAttack;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SwordDamages;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxKi;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatComponent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Swing1SwordFlipbook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Swing2SwordFlipbook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Swing3SwordFlipbook;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterAbilitiesComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_DashDistance = { "DashDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, DashDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashDistance_MetaData), NewProp_DashDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_DashCooldown = { "DashCooldown", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, DashCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashCooldown_MetaData), NewProp_DashCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_DashDuration = { "DashDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, DashDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashDuration_MetaData), NewProp_DashDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_AttackDamage = { "AttackDamage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, AttackDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDamage_MetaData), NewProp_AttackDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_KiCostForAttack = { "KiCostForAttack", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, KiCostForAttack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KiCostForAttack_MetaData), NewProp_KiCostForAttack_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_SwordDamages = { "SwordDamages", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, SwordDamages), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwordDamages_MetaData), NewProp_SwordDamages_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_MaxKi = { "MaxKi", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, MaxKi), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxKi_MetaData), NewProp_MaxKi_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_CombatComponent = { "CombatComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, CombatComponent), Z_Construct_UClass_UCharacterCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatComponent_MetaData), NewProp_CombatComponent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AMyProjectileBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_Swing1SwordFlipbook = { "Swing1SwordFlipbook", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, Swing1SwordFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Swing1SwordFlipbook_MetaData), NewProp_Swing1SwordFlipbook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_Swing2SwordFlipbook = { "Swing2SwordFlipbook", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, Swing2SwordFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Swing2SwordFlipbook_MetaData), NewProp_Swing2SwordFlipbook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_Swing3SwordFlipbook = { "Swing3SwordFlipbook", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, Swing3SwordFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Swing3SwordFlipbook_MetaData), NewProp_Swing3SwordFlipbook_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_DashDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_DashCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_DashDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_AttackDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_KiCostForAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_SwordDamages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_MaxKi,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_CombatComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_ProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_Swing1SwordFlipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_Swing2SwordFlipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_Swing3SwordFlipbook,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::ClassParams = {
	&UCharacterAbilitiesComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterAbilitiesComponent()
{
	if (!Z_Registration_Info_UClass_UCharacterAbilitiesComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterAbilitiesComponent.OuterSingleton, Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterAbilitiesComponent.OuterSingleton;
}
template<> GAME2DCPLUSPLUS_API UClass* StaticClass<UCharacterAbilitiesComponent>()
{
	return UCharacterAbilitiesComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterAbilitiesComponent);
UCharacterAbilitiesComponent::~UCharacterAbilitiesComponent() {}
// End Class UCharacterAbilitiesComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_CharacterAbilitiesComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterAbilitiesComponent, UCharacterAbilitiesComponent::StaticClass, TEXT("UCharacterAbilitiesComponent"), &Z_Registration_Info_UClass_UCharacterAbilitiesComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterAbilitiesComponent), 267828976U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_CharacterAbilitiesComponent_h_3162667441(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_CharacterAbilitiesComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_CharacterAbilitiesComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
