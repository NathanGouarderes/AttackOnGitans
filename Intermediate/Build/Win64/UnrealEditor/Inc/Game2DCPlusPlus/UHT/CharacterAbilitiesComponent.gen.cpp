// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CharacterAbilitiesComponent.h"
#include "Game2DCPlusPlus/Data/FBeamAttackData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCharacterAbilitiesComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_ABeamBase_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AChargingBeamSphere_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AMyProjectileBase_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AMyStandBase_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UCharacterAbilitiesComponent();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UCharacterAbilitiesComponent_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UCharacterKiComponent_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UCharacterStateComponent_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UStandComponent_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();
GAME2DCPLUSPLUS_API UScriptStruct* Z_Construct_UScriptStruct_FBeamAttackData();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCharacterAbilitiesComponent Function ConsumeKiWhileChargingBeam *********
struct Z_Construct_UFunction_UCharacterAbilitiesComponent_ConsumeKiWhileChargingBeam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CharacterAbilitiesComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAbilitiesComponent_ConsumeKiWhileChargingBeam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterAbilitiesComponent, nullptr, "ConsumeKiWhileChargingBeam", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAbilitiesComponent_ConsumeKiWhileChargingBeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterAbilitiesComponent_ConsumeKiWhileChargingBeam_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCharacterAbilitiesComponent_ConsumeKiWhileChargingBeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterAbilitiesComponent_ConsumeKiWhileChargingBeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterAbilitiesComponent::execConsumeKiWhileChargingBeam)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConsumeKiWhileChargingBeam();
	P_NATIVE_END;
}
// ********** End Class UCharacterAbilitiesComponent Function ConsumeKiWhileChargingBeam ***********

// ********** Begin Class UCharacterAbilitiesComponent Function ReleaseBeam ************************
struct Z_Construct_UFunction_UCharacterAbilitiesComponent_ReleaseBeam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CharacterAbilitiesComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAbilitiesComponent_ReleaseBeam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterAbilitiesComponent, nullptr, "ReleaseBeam", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAbilitiesComponent_ReleaseBeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterAbilitiesComponent_ReleaseBeam_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCharacterAbilitiesComponent_ReleaseBeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterAbilitiesComponent_ReleaseBeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterAbilitiesComponent::execReleaseBeam)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReleaseBeam();
	P_NATIVE_END;
}
// ********** End Class UCharacterAbilitiesComponent Function ReleaseBeam **************************

// ********** Begin Class UCharacterAbilitiesComponent Function StartChargingBeam ******************
struct Z_Construct_UFunction_UCharacterAbilitiesComponent_StartChargingBeam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CharacterAbilitiesComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAbilitiesComponent_StartChargingBeam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterAbilitiesComponent, nullptr, "StartChargingBeam", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAbilitiesComponent_StartChargingBeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterAbilitiesComponent_StartChargingBeam_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCharacterAbilitiesComponent_StartChargingBeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterAbilitiesComponent_StartChargingBeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterAbilitiesComponent::execStartChargingBeam)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartChargingBeam();
	P_NATIVE_END;
}
// ********** End Class UCharacterAbilitiesComponent Function StartChargingBeam ********************

// ********** Begin Class UCharacterAbilitiesComponent *********************************************
void UCharacterAbilitiesComponent::StaticRegisterNativesUCharacterAbilitiesComponent()
{
	UClass* Class = UCharacterAbilitiesComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConsumeKiWhileChargingBeam", &UCharacterAbilitiesComponent::execConsumeKiWhileChargingBeam },
		{ "ReleaseBeam", &UCharacterAbilitiesComponent::execReleaseBeam },
		{ "StartChargingBeam", &UCharacterAbilitiesComponent::execStartChargingBeam },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCharacterAbilitiesComponent;
UClass* UCharacterAbilitiesComponent::GetPrivateStaticClass()
{
	using TClass = UCharacterAbilitiesComponent;
	if (!Z_Registration_Info_UClass_UCharacterAbilitiesComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CharacterAbilitiesComponent"),
			Z_Registration_Info_UClass_UCharacterAbilitiesComponent.InnerSingleton,
			StaticRegisterNativesUCharacterAbilitiesComponent,
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
	return Z_Registration_Info_UClass_UCharacterAbilitiesComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UCharacterAbilitiesComponent_NoRegister()
{
	return UCharacterAbilitiesComponent::GetPrivateStaticClass();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BP_KiBallClass_MetaData[] = {
		{ "Category", "Projectiles" },
		{ "ModuleRelativePath", "Components/CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BP_Kamehameha_MetaData[] = {
		{ "Category", "Projectiles" },
		{ "ModuleRelativePath", "Components/CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BP_ChargingBeamSphere_MetaData[] = {
		{ "Category", "Projectiles" },
		{ "ModuleRelativePath", "Components/CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeamClass_MetaData[] = {
		{ "Category", "Projectiles" },
		{ "ModuleRelativePath", "Components/CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandClass_MetaData[] = {
		{ "Category", "Stand" },
		{ "ModuleRelativePath", "Components/CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBeamSelected_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Components/CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KiComponent_MetaData[] = {
		{ "Category", "Combat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatsComponent_MetaData[] = {
		{ "Category", "Combat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBeam_MetaData[] = {
		{ "ModuleRelativePath", "Components/CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBeamName_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Components/CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KamehamehaData_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Components/CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileDataTable_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Components/CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeamDataTable_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Components/CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalAttackDataTable_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Components/CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateComponent_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/CharacterAbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandComponent_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
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
	static const UECodeGen_Private::FClassPropertyParams NewProp_BP_KiBallClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BP_Kamehameha;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_BP_ChargingBeamSphere;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BeamClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StandClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CurrentBeamSelected;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KiComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatsComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentBeam;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentBeamName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KamehamehaData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileDataTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BeamDataTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicalAttackDataTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StateComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StandComponent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterAbilitiesComponent_ConsumeKiWhileChargingBeam, "ConsumeKiWhileChargingBeam" }, // 3644660310
		{ &Z_Construct_UFunction_UCharacterAbilitiesComponent_ReleaseBeam, "ReleaseBeam" }, // 2512045658
		{ &Z_Construct_UFunction_UCharacterAbilitiesComponent_StartChargingBeam, "StartChargingBeam" }, // 3619985969
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
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
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_KamehamehaClass = { "KamehamehaClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, KamehamehaClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AMyProjectileBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KamehamehaClass_MetaData), NewProp_KamehamehaClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_FireballClass = { "FireballClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, FireballClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AMyProjectileBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireballClass_MetaData), NewProp_FireballClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_BP_KiBallClass = { "BP_KiBallClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, BP_KiBallClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BP_KiBallClass_MetaData), NewProp_BP_KiBallClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_BP_Kamehameha = { "BP_Kamehameha", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, BP_Kamehameha), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BP_Kamehameha_MetaData), NewProp_BP_Kamehameha_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_BP_ChargingBeamSphere = { "BP_ChargingBeamSphere", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, BP_ChargingBeamSphere), Z_Construct_UClass_AChargingBeamSphere_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BP_ChargingBeamSphere_MetaData), NewProp_BP_ChargingBeamSphere_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_BeamClass = { "BeamClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, BeamClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_ABeamBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeamClass_MetaData), NewProp_BeamClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_StandClass = { "StandClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, StandClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AMyStandBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandClass_MetaData), NewProp_StandClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_CurrentBeamSelected = { "CurrentBeamSelected", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, CurrentBeamSelected), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_ABeamBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentBeamSelected_MetaData), NewProp_CurrentBeamSelected_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_KiComponent = { "KiComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, KiComponent), Z_Construct_UClass_UCharacterKiComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KiComponent_MetaData), NewProp_KiComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_StatsComponent = { "StatsComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, StatsComponent), Z_Construct_UClass_UStatsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatsComponent_MetaData), NewProp_StatsComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_CurrentBeam = { "CurrentBeam", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, CurrentBeam), Z_Construct_UClass_ABeamBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentBeam_MetaData), NewProp_CurrentBeam_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_CurrentBeamName = { "CurrentBeamName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, CurrentBeamName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentBeamName_MetaData), NewProp_CurrentBeamName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_KamehamehaData = { "KamehamehaData", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, KamehamehaData), Z_Construct_UScriptStruct_FBeamAttackData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KamehamehaData_MetaData), NewProp_KamehamehaData_MetaData) }; // 1982421153
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_ProjectileDataTable = { "ProjectileDataTable", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, ProjectileDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileDataTable_MetaData), NewProp_ProjectileDataTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_BeamDataTable = { "BeamDataTable", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, BeamDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeamDataTable_MetaData), NewProp_BeamDataTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_PhysicalAttackDataTable = { "PhysicalAttackDataTable", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, PhysicalAttackDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalAttackDataTable_MetaData), NewProp_PhysicalAttackDataTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_StateComponent = { "StateComponent", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, StateComponent), Z_Construct_UClass_UCharacterStateComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateComponent_MetaData), NewProp_StateComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_StandComponent = { "StandComponent", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, StandComponent), Z_Construct_UClass_UStandComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandComponent_MetaData), NewProp_StandComponent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitiesComponent, ProjectileClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AMyProjectileBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
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
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_BP_KiBallClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_BP_Kamehameha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_BP_ChargingBeamSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_BeamClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_StandClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_CurrentBeamSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_KiComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_StatsComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_CurrentBeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_CurrentBeamName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_KamehamehaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_ProjectileDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_BeamDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_PhysicalAttackDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_StateComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::NewProp_StandComponent,
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
	FuncInfo,
	Z_Construct_UClass_UCharacterAbilitiesComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCharacterAbilitiesComponent);
UCharacterAbilitiesComponent::~UCharacterAbilitiesComponent() {}
// ********** End Class UCharacterAbilitiesComponent ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterAbilitiesComponent_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterAbilitiesComponent, UCharacterAbilitiesComponent::StaticClass, TEXT("UCharacterAbilitiesComponent"), &Z_Registration_Info_UClass_UCharacterAbilitiesComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterAbilitiesComponent), 724500042U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterAbilitiesComponent_h__Script_Game2DCPlusPlus_3766820834(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterAbilitiesComponent_h__Script_Game2DCPlusPlus_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterAbilitiesComponent_h__Script_Game2DCPlusPlus_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
