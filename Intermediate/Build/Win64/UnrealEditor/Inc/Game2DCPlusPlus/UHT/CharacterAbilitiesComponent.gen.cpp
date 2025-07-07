// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/Components/CharacterAbilitiesComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterAbilitiesComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AMyProjectileBase_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UCharacterAbilitiesComponent();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UCharacterAbilitiesComponent_NoRegister();
GAME2DCPLUSPLUS_API UEnum* Z_Construct_UEnum_Game2DCPlusPlus_EProjectileType();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// End Cross Module References

// Begin Enum EProjectileType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProjectileType;
static UEnum* EProjectileType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EProjectileType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EProjectileType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Game2DCPlusPlus_EProjectileType, (UObject*)Z_Construct_UPackage__Script_Game2DCPlusPlus(), TEXT("EProjectileType"));
	}
	return Z_Registration_Info_UEnum_EProjectileType.OuterSingleton;
}
template<> GAME2DCPLUSPLUS_API UEnum* StaticEnum<EProjectileType>()
{
	return EProjectileType_StaticEnum();
}
struct Z_Construct_UEnum_Game2DCPlusPlus_EProjectileType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Fireball.DisplayName", "Fireball" },
		{ "Fireball.Name", "EProjectileType::Fireball" },
		{ "Kamehameha.DisplayName", "Kamehameha" },
		{ "Kamehameha.Name", "EProjectileType::Kamehameha" },
		{ "ModuleRelativePath", "Components/CharacterAbilitiesComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EProjectileType::Kamehameha", (int64)EProjectileType::Kamehameha },
		{ "EProjectileType::Fireball", (int64)EProjectileType::Fireball },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Game2DCPlusPlus_EProjectileType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
	nullptr,
	"EProjectileType",
	"EProjectileType",
	Z_Construct_UEnum_Game2DCPlusPlus_EProjectileType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Game2DCPlusPlus_EProjectileType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Game2DCPlusPlus_EProjectileType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Game2DCPlusPlus_EProjectileType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Game2DCPlusPlus_EProjectileType()
{
	if (!Z_Registration_Info_UEnum_EProjectileType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProjectileType.InnerSingleton, Z_Construct_UEnum_Game2DCPlusPlus_EProjectileType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EProjectileType.InnerSingleton;
}
// End Enum EProjectileType

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
		{ "IncludePath", "Components/CharacterAbilitiesComponent.h" },
		{ "ModuleRelativePath", "Components/CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashDistance_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Components/CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashCooldown_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Components/CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashDuration_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Components/CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Components/CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KiCostForAttack_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Components/CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwordDamages_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Components/CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Components/CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxKi_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Components/CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KamehamehaClass_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Components/CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireballClass_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Components/CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Components/CharacterAbilitiesComponent.h" },
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
	static const UECodeGen_Private::FClassPropertyParams NewProp_KamehamehaClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FireballClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
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
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_KamehamehaClass = { "KamehamehaClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, KamehamehaClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AMyProjectileBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KamehamehaClass_MetaData), NewProp_KamehamehaClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_FireballClass = { "FireballClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, FireballClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AMyProjectileBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireballClass_MetaData), NewProp_FireballClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AMyProjectileBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_DashDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_DashCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_DashDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_AttackDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_KiCostForAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_SwordDamages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_MaxKi,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_KamehamehaClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_FireballClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_ProjectileClass,
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
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Components_CharacterAbilitiesComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EProjectileType_StaticEnum, TEXT("EProjectileType"), &Z_Registration_Info_UEnum_EProjectileType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 530737925U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterAbilitiesComponent, UCharacterAbilitiesComponent::StaticClass, TEXT("UCharacterAbilitiesComponent"), &Z_Registration_Info_UClass_UCharacterAbilitiesComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterAbilitiesComponent), 2774789370U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Components_CharacterAbilitiesComponent_h_3102020511(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Components_CharacterAbilitiesComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Components_CharacterAbilitiesComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Components_CharacterAbilitiesComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Components_CharacterAbilitiesComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
