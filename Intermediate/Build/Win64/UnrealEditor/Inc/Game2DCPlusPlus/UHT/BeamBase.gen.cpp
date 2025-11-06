// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Beams/BeamBase.h"
#include "Engine/HitResult.h"
#include "Game2DCPlusPlus/Data/FBeamAttackData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBeamBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_ABeamBase();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_ABeamBase_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AMyKiAttack();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UHitboxComponent_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();
GAME2DCPLUSPLUS_API UScriptStruct* Z_Construct_UScriptStruct_FBeamAttackData();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABeamBase Function ApplyBeamDamage ***************************************
struct Z_Construct_UFunction_ABeamBase_ApplyBeamDamage_Statics
{
	struct BeamBase_eventApplyBeamDamage_Parms
	{
		AActor* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Beam" },
		{ "ModuleRelativePath", "Abilities/Beams/BeamBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABeamBase_ApplyBeamDamage_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BeamBase_eventApplyBeamDamage_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABeamBase_ApplyBeamDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABeamBase_ApplyBeamDamage_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABeamBase_ApplyBeamDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABeamBase_ApplyBeamDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABeamBase, nullptr, "ApplyBeamDamage", Z_Construct_UFunction_ABeamBase_ApplyBeamDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABeamBase_ApplyBeamDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABeamBase_ApplyBeamDamage_Statics::BeamBase_eventApplyBeamDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABeamBase_ApplyBeamDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABeamBase_ApplyBeamDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABeamBase_ApplyBeamDamage_Statics::BeamBase_eventApplyBeamDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABeamBase_ApplyBeamDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABeamBase_ApplyBeamDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABeamBase::execApplyBeamDamage)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyBeamDamage(Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class ABeamBase Function ApplyBeamDamage *****************************************

// ********** Begin Class ABeamBase Function OnBeamOverlap *****************************************
struct Z_Construct_UFunction_ABeamBase_OnBeamOverlap_Statics
{
	struct BeamBase_eventOnBeamOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Beam" },
		{ "ModuleRelativePath", "Abilities/Beams/BeamBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABeamBase_OnBeamOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BeamBase_eventOnBeamOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABeamBase_OnBeamOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BeamBase_eventOnBeamOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABeamBase_OnBeamOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BeamBase_eventOnBeamOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABeamBase_OnBeamOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BeamBase_eventOnBeamOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ABeamBase_OnBeamOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((BeamBase_eventOnBeamOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABeamBase_OnBeamOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BeamBase_eventOnBeamOverlap_Parms), &Z_Construct_UFunction_ABeamBase_OnBeamOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABeamBase_OnBeamOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BeamBase_eventOnBeamOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABeamBase_OnBeamOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABeamBase_OnBeamOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABeamBase_OnBeamOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABeamBase_OnBeamOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABeamBase_OnBeamOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABeamBase_OnBeamOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABeamBase_OnBeamOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABeamBase_OnBeamOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABeamBase_OnBeamOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABeamBase, nullptr, "OnBeamOverlap", Z_Construct_UFunction_ABeamBase_OnBeamOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABeamBase_OnBeamOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABeamBase_OnBeamOverlap_Statics::BeamBase_eventOnBeamOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABeamBase_OnBeamOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABeamBase_OnBeamOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABeamBase_OnBeamOverlap_Statics::BeamBase_eventOnBeamOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABeamBase_OnBeamOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABeamBase_OnBeamOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABeamBase::execOnBeamOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeamOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class ABeamBase Function OnBeamOverlap *******************************************

// ********** Begin Class ABeamBase Function PerformBeamTraceAndDamage *****************************
struct Z_Construct_UFunction_ABeamBase_PerformBeamTraceAndDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Beam" },
		{ "ModuleRelativePath", "Abilities/Beams/BeamBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABeamBase_PerformBeamTraceAndDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABeamBase, nullptr, "PerformBeamTraceAndDamage", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABeamBase_PerformBeamTraceAndDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABeamBase_PerformBeamTraceAndDamage_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABeamBase_PerformBeamTraceAndDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABeamBase_PerformBeamTraceAndDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABeamBase::execPerformBeamTraceAndDamage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PerformBeamTraceAndDamage();
	P_NATIVE_END;
}
// ********** End Class ABeamBase Function PerformBeamTraceAndDamage *******************************

// ********** Begin Class ABeamBase Function ReleaseBeam *******************************************
struct Z_Construct_UFunction_ABeamBase_ReleaseBeam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Beam" },
		{ "ModuleRelativePath", "Abilities/Beams/BeamBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABeamBase_ReleaseBeam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABeamBase, nullptr, "ReleaseBeam", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABeamBase_ReleaseBeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABeamBase_ReleaseBeam_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABeamBase_ReleaseBeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABeamBase_ReleaseBeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABeamBase::execReleaseBeam)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReleaseBeam();
	P_NATIVE_END;
}
// ********** End Class ABeamBase Function ReleaseBeam *********************************************

// ********** Begin Class ABeamBase Function StartChargingBeam *************************************
struct Z_Construct_UFunction_ABeamBase_StartChargingBeam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Beam" },
		{ "ModuleRelativePath", "Abilities/Beams/BeamBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABeamBase_StartChargingBeam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABeamBase, nullptr, "StartChargingBeam", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABeamBase_StartChargingBeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABeamBase_StartChargingBeam_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABeamBase_StartChargingBeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABeamBase_StartChargingBeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABeamBase::execStartChargingBeam)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartChargingBeam();
	P_NATIVE_END;
}
// ********** End Class ABeamBase Function StartChargingBeam ***************************************

// ********** Begin Class ABeamBase Function StopBeam **********************************************
struct Z_Construct_UFunction_ABeamBase_StopBeam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Beam" },
		{ "ModuleRelativePath", "Abilities/Beams/BeamBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABeamBase_StopBeam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABeamBase, nullptr, "StopBeam", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABeamBase_StopBeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABeamBase_StopBeam_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABeamBase_StopBeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABeamBase_StopBeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABeamBase::execStopBeam)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopBeam();
	P_NATIVE_END;
}
// ********** End Class ABeamBase Function StopBeam ************************************************

// ********** Begin Class ABeamBase ****************************************************************
void ABeamBase::StaticRegisterNativesABeamBase()
{
	UClass* Class = ABeamBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyBeamDamage", &ABeamBase::execApplyBeamDamage },
		{ "OnBeamOverlap", &ABeamBase::execOnBeamOverlap },
		{ "PerformBeamTraceAndDamage", &ABeamBase::execPerformBeamTraceAndDamage },
		{ "ReleaseBeam", &ABeamBase::execReleaseBeam },
		{ "StartChargingBeam", &ABeamBase::execStartChargingBeam },
		{ "StopBeam", &ABeamBase::execStopBeam },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABeamBase;
UClass* ABeamBase::GetPrivateStaticClass()
{
	using TClass = ABeamBase;
	if (!Z_Registration_Info_UClass_ABeamBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BeamBase"),
			Z_Registration_Info_UClass_ABeamBase.InnerSingleton,
			StaticRegisterNativesABeamBase,
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
	return Z_Registration_Info_UClass_ABeamBase.InnerSingleton;
}
UClass* Z_Construct_UClass_ABeamBase_NoRegister()
{
	return ABeamBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABeamBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/Beams/BeamBase.h" },
		{ "ModuleRelativePath", "Abilities/Beams/BeamBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Abilities/Beams/BeamBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Abilities/Beams/BeamBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitboxComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Abilities/Beams/BeamBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatsComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Abilities/Beams/BeamBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlipbookComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Abilities/Beams/BeamBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageTickInterval_MetaData[] = {
		{ "Category", "Beam|Damage" },
		{ "ModuleRelativePath", "Abilities/Beams/BeamBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageCooldown_MetaData[] = {
		{ "Category", "Beam|Damage" },
		{ "ModuleRelativePath", "Abilities/Beams/BeamBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeamData_MetaData[] = {
		{ "Category", "Beam|Data" },
		{ "ModuleRelativePath", "Abilities/Beams/BeamBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecentlyDamagedActors_MetaData[] = {
		{ "ModuleRelativePath", "Abilities/Beams/BeamBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitboxComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatsComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlipbookComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageTickInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageCooldown;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeamData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RecentlyDamagedActors_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_RecentlyDamagedActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABeamBase_ApplyBeamDamage, "ApplyBeamDamage" }, // 3050102305
		{ &Z_Construct_UFunction_ABeamBase_OnBeamOverlap, "OnBeamOverlap" }, // 1405416994
		{ &Z_Construct_UFunction_ABeamBase_PerformBeamTraceAndDamage, "PerformBeamTraceAndDamage" }, // 992515908
		{ &Z_Construct_UFunction_ABeamBase_ReleaseBeam, "ReleaseBeam" }, // 3608108089
		{ &Z_Construct_UFunction_ABeamBase_StartChargingBeam, "StartChargingBeam" }, // 3126133553
		{ &Z_Construct_UFunction_ABeamBase_StopBeam, "StopBeam" }, // 3345937971
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABeamBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeamBase_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABeamBase, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeamBase_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABeamBase, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeamBase_Statics::NewProp_HitboxComponent = { "HitboxComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABeamBase, HitboxComponent), Z_Construct_UClass_UHitboxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitboxComponent_MetaData), NewProp_HitboxComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeamBase_Statics::NewProp_StatsComponent = { "StatsComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABeamBase, StatsComponent), Z_Construct_UClass_UStatsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatsComponent_MetaData), NewProp_StatsComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeamBase_Statics::NewProp_FlipbookComponent = { "FlipbookComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABeamBase, FlipbookComponent), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlipbookComponent_MetaData), NewProp_FlipbookComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABeamBase_Statics::NewProp_DamageTickInterval = { "DamageTickInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABeamBase, DamageTickInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageTickInterval_MetaData), NewProp_DamageTickInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABeamBase_Statics::NewProp_DamageCooldown = { "DamageCooldown", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABeamBase, DamageCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageCooldown_MetaData), NewProp_DamageCooldown_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABeamBase_Statics::NewProp_BeamData = { "BeamData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABeamBase, BeamData), Z_Construct_UScriptStruct_FBeamAttackData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeamData_MetaData), NewProp_BeamData_MetaData) }; // 1982421153
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeamBase_Statics::NewProp_RecentlyDamagedActors_ElementProp = { "RecentlyDamagedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ABeamBase_Statics::NewProp_RecentlyDamagedActors = { "RecentlyDamagedActors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABeamBase, RecentlyDamagedActors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecentlyDamagedActors_MetaData), NewProp_RecentlyDamagedActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABeamBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeamBase_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeamBase_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeamBase_Statics::NewProp_HitboxComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeamBase_Statics::NewProp_StatsComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeamBase_Statics::NewProp_FlipbookComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeamBase_Statics::NewProp_DamageTickInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeamBase_Statics::NewProp_DamageCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeamBase_Statics::NewProp_BeamData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeamBase_Statics::NewProp_RecentlyDamagedActors_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeamBase_Statics::NewProp_RecentlyDamagedActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABeamBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABeamBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMyKiAttack,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABeamBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABeamBase_Statics::ClassParams = {
	&ABeamBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABeamBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABeamBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABeamBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ABeamBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABeamBase()
{
	if (!Z_Registration_Info_UClass_ABeamBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABeamBase.OuterSingleton, Z_Construct_UClass_ABeamBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABeamBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ABeamBase);
ABeamBase::~ABeamBase() {}
// ********** End Class ABeamBase ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Beams_BeamBase_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABeamBase, ABeamBase::StaticClass, TEXT("ABeamBase"), &Z_Registration_Info_UClass_ABeamBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABeamBase), 2711140519U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Beams_BeamBase_h__Script_Game2DCPlusPlus_1059755741(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Beams_BeamBase_h__Script_Game2DCPlusPlus_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Beams_BeamBase_h__Script_Game2DCPlusPlus_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
