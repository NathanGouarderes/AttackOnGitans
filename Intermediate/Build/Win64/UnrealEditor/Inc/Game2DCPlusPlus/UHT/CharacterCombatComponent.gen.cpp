// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CharacterCombatComponent.h"
#include "Engine/HitResult.h"
#include "Game2DCPlusPlus/Data/FAttackData.h"
#include "Game2DCPlusPlus/Data/FCharacterData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCharacterCombatComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UCharacterAbilitiesComponent_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UCharacterAnimationComponent_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UCharacterCombatComponent();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UCharacterCombatComponent_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UCharacterStateComponent_NoRegister();
GAME2DCPLUSPLUS_API UScriptStruct* Z_Construct_UScriptStruct_FAttackData();
GAME2DCPLUSPLUS_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterData();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCharacterCombatComponent Function DoWeaponTrace *************************
struct Z_Construct_UFunction_UCharacterCombatComponent_DoWeaponTrace_Statics
{
	struct CharacterCombatComponent_eventDoWeaponTrace_Parms
	{
		FAttackData AttackData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Components/CharacterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterCombatComponent_DoWeaponTrace_Statics::NewProp_AttackData = { "AttackData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterCombatComponent_eventDoWeaponTrace_Parms, AttackData), Z_Construct_UScriptStruct_FAttackData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackData_MetaData), NewProp_AttackData_MetaData) }; // 3263392156
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterCombatComponent_DoWeaponTrace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCombatComponent_DoWeaponTrace_Statics::NewProp_AttackData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCombatComponent_DoWeaponTrace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterCombatComponent_DoWeaponTrace_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterCombatComponent, nullptr, "DoWeaponTrace", Z_Construct_UFunction_UCharacterCombatComponent_DoWeaponTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCombatComponent_DoWeaponTrace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterCombatComponent_DoWeaponTrace_Statics::CharacterCombatComponent_eventDoWeaponTrace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCombatComponent_DoWeaponTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterCombatComponent_DoWeaponTrace_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterCombatComponent_DoWeaponTrace_Statics::CharacterCombatComponent_eventDoWeaponTrace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterCombatComponent_DoWeaponTrace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterCombatComponent_DoWeaponTrace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterCombatComponent::execDoWeaponTrace)
{
	P_GET_STRUCT_REF(FAttackData,Z_Param_Out_AttackData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoWeaponTrace(Z_Param_Out_AttackData);
	P_NATIVE_END;
}
// ********** End Class UCharacterCombatComponent Function DoWeaponTrace ***************************

// ********** Begin Class UCharacterCombatComponent Function IsAttacking ***************************
struct Z_Construct_UFunction_UCharacterCombatComponent_IsAttacking_Statics
{
	struct CharacterCombatComponent_eventIsAttacking_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Components/CharacterCombatComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCharacterCombatComponent_IsAttacking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterCombatComponent_eventIsAttacking_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterCombatComponent_IsAttacking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterCombatComponent_eventIsAttacking_Parms), &Z_Construct_UFunction_UCharacterCombatComponent_IsAttacking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterCombatComponent_IsAttacking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCombatComponent_IsAttacking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCombatComponent_IsAttacking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterCombatComponent_IsAttacking_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterCombatComponent, nullptr, "IsAttacking", Z_Construct_UFunction_UCharacterCombatComponent_IsAttacking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCombatComponent_IsAttacking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterCombatComponent_IsAttacking_Statics::CharacterCombatComponent_eventIsAttacking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCombatComponent_IsAttacking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterCombatComponent_IsAttacking_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterCombatComponent_IsAttacking_Statics::CharacterCombatComponent_eventIsAttacking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterCombatComponent_IsAttacking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterCombatComponent_IsAttacking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterCombatComponent::execIsAttacking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAttacking();
	P_NATIVE_END;
}
// ********** End Class UCharacterCombatComponent Function IsAttacking *****************************

// ********** Begin Class UCharacterCombatComponent Function OnSwordOverlap ************************
struct Z_Construct_UFunction_UCharacterCombatComponent_OnSwordOverlap_Statics
{
	struct CharacterCombatComponent_eventOnSwordOverlap_Parms
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
		{ "ModuleRelativePath", "Components/CharacterCombatComponent.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterCombatComponent_OnSwordOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterCombatComponent_eventOnSwordOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterCombatComponent_OnSwordOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterCombatComponent_eventOnSwordOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterCombatComponent_OnSwordOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterCombatComponent_eventOnSwordOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterCombatComponent_OnSwordOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterCombatComponent_eventOnSwordOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCharacterCombatComponent_OnSwordOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((CharacterCombatComponent_eventOnSwordOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterCombatComponent_OnSwordOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterCombatComponent_eventOnSwordOverlap_Parms), &Z_Construct_UFunction_UCharacterCombatComponent_OnSwordOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterCombatComponent_OnSwordOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterCombatComponent_eventOnSwordOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterCombatComponent_OnSwordOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCombatComponent_OnSwordOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCombatComponent_OnSwordOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCombatComponent_OnSwordOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCombatComponent_OnSwordOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCombatComponent_OnSwordOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCombatComponent_OnSwordOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCombatComponent_OnSwordOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterCombatComponent_OnSwordOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterCombatComponent, nullptr, "OnSwordOverlap", Z_Construct_UFunction_UCharacterCombatComponent_OnSwordOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCombatComponent_OnSwordOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterCombatComponent_OnSwordOverlap_Statics::CharacterCombatComponent_eventOnSwordOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCombatComponent_OnSwordOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterCombatComponent_OnSwordOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterCombatComponent_OnSwordOverlap_Statics::CharacterCombatComponent_eventOnSwordOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterCombatComponent_OnSwordOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterCombatComponent_OnSwordOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterCombatComponent::execOnSwordOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSwordOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class UCharacterCombatComponent Function OnSwordOverlap **************************

// ********** Begin Class UCharacterCombatComponent Function UpdateHitboxFromSockets ***************
struct Z_Construct_UFunction_UCharacterCombatComponent_UpdateHitboxFromSockets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION(BlueprintCallable, Category = \"Combat\")\n//void EquipWeapon(AMyWeaponBase* NewWeapon);\n" },
#endif
		{ "ModuleRelativePath", "Components/CharacterCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"Combat\")\nvoid EquipWeapon(AMyWeaponBase* NewWeapon);" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterCombatComponent_UpdateHitboxFromSockets_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterCombatComponent, nullptr, "UpdateHitboxFromSockets", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCombatComponent_UpdateHitboxFromSockets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterCombatComponent_UpdateHitboxFromSockets_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCharacterCombatComponent_UpdateHitboxFromSockets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterCombatComponent_UpdateHitboxFromSockets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterCombatComponent::execUpdateHitboxFromSockets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateHitboxFromSockets();
	P_NATIVE_END;
}
// ********** End Class UCharacterCombatComponent Function UpdateHitboxFromSockets *****************

// ********** Begin Class UCharacterCombatComponent ************************************************
void UCharacterCombatComponent::StaticRegisterNativesUCharacterCombatComponent()
{
	UClass* Class = UCharacterCombatComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoWeaponTrace", &UCharacterCombatComponent::execDoWeaponTrace },
		{ "IsAttacking", &UCharacterCombatComponent::execIsAttacking },
		{ "OnSwordOverlap", &UCharacterCombatComponent::execOnSwordOverlap },
		{ "UpdateHitboxFromSockets", &UCharacterCombatComponent::execUpdateHitboxFromSockets },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCharacterCombatComponent;
UClass* UCharacterCombatComponent::GetPrivateStaticClass()
{
	using TClass = UCharacterCombatComponent;
	if (!Z_Registration_Info_UClass_UCharacterCombatComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CharacterCombatComponent"),
			Z_Registration_Info_UClass_UCharacterCombatComponent.InnerSingleton,
			StaticRegisterNativesUCharacterCombatComponent,
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
	return Z_Registration_Info_UClass_UCharacterCombatComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UCharacterCombatComponent_NoRegister()
{
	return UCharacterCombatComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCharacterCombatComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/CharacterCombatComponent.h" },
		{ "ModuleRelativePath", "Components/CharacterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentComboStep_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Components/CharacterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitiesComponent_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/CharacterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationComponent_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/CharacterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateComponent_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/CharacterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterData_MetaData[] = {
		{ "ModuleRelativePath", "Components/CharacterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAttackFlipbook_MetaData[] = {
		{ "ModuleRelativePath", "Components/CharacterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAttacking_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Components/CharacterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDataTableAsset_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = \"Combat\")\n//AMyWeaponBase* CurrentWeapon;\n" },
#endif
		{ "ModuleRelativePath", "Components/CharacterCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = \"Combat\")\nAMyWeaponBase* CurrentWeapon;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAttackData_MetaData[] = {
		{ "ModuleRelativePath", "Components/CharacterCombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentComboStep;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitiesComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StateComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentAttackFlipbook;
	static void NewProp_bIsAttacking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAttacking;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AttackDataTableAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentAttackData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterCombatComponent_DoWeaponTrace, "DoWeaponTrace" }, // 1358051331
		{ &Z_Construct_UFunction_UCharacterCombatComponent_IsAttacking, "IsAttacking" }, // 1923942013
		{ &Z_Construct_UFunction_UCharacterCombatComponent_OnSwordOverlap, "OnSwordOverlap" }, // 2118132951
		{ &Z_Construct_UFunction_UCharacterCombatComponent_UpdateHitboxFromSockets, "UpdateHitboxFromSockets" }, // 3855058955
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterCombatComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCharacterCombatComponent_Statics::NewProp_CurrentComboStep = { "CurrentComboStep", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCombatComponent, CurrentComboStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentComboStep_MetaData), NewProp_CurrentComboStep_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterCombatComponent_Statics::NewProp_AbilitiesComponent = { "AbilitiesComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCombatComponent, AbilitiesComponent), Z_Construct_UClass_UCharacterAbilitiesComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitiesComponent_MetaData), NewProp_AbilitiesComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterCombatComponent_Statics::NewProp_AnimationComponent = { "AnimationComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCombatComponent, AnimationComponent), Z_Construct_UClass_UCharacterAnimationComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationComponent_MetaData), NewProp_AnimationComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterCombatComponent_Statics::NewProp_StateComponent = { "StateComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCombatComponent, StateComponent), Z_Construct_UClass_UCharacterStateComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateComponent_MetaData), NewProp_StateComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterCombatComponent_Statics::NewProp_CharacterData = { "CharacterData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCombatComponent, CharacterData), Z_Construct_UScriptStruct_FCharacterData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterData_MetaData), NewProp_CharacterData_MetaData) }; // 3358070478
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterCombatComponent_Statics::NewProp_CurrentAttackFlipbook = { "CurrentAttackFlipbook", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCombatComponent, CurrentAttackFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAttackFlipbook_MetaData), NewProp_CurrentAttackFlipbook_MetaData) };
void Z_Construct_UClass_UCharacterCombatComponent_Statics::NewProp_bIsAttacking_SetBit(void* Obj)
{
	((UCharacterCombatComponent*)Obj)->bIsAttacking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterCombatComponent_Statics::NewProp_bIsAttacking = { "bIsAttacking", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCharacterCombatComponent), &Z_Construct_UClass_UCharacterCombatComponent_Statics::NewProp_bIsAttacking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAttacking_MetaData), NewProp_bIsAttacking_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCharacterCombatComponent_Statics::NewProp_AttackDataTableAsset = { "AttackDataTableAsset", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCombatComponent, AttackDataTableAsset), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDataTableAsset_MetaData), NewProp_AttackDataTableAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterCombatComponent_Statics::NewProp_CurrentAttackData = { "CurrentAttackData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCombatComponent, CurrentAttackData), Z_Construct_UScriptStruct_FAttackData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAttackData_MetaData), NewProp_CurrentAttackData_MetaData) }; // 3263392156
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterCombatComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCombatComponent_Statics::NewProp_CurrentComboStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCombatComponent_Statics::NewProp_AbilitiesComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCombatComponent_Statics::NewProp_AnimationComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCombatComponent_Statics::NewProp_StateComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCombatComponent_Statics::NewProp_CharacterData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCombatComponent_Statics::NewProp_CurrentAttackFlipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCombatComponent_Statics::NewProp_bIsAttacking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCombatComponent_Statics::NewProp_AttackDataTableAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCombatComponent_Statics::NewProp_CurrentAttackData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCombatComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterCombatComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCombatComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterCombatComponent_Statics::ClassParams = {
	&UCharacterCombatComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCharacterCombatComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCombatComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCombatComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterCombatComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterCombatComponent()
{
	if (!Z_Registration_Info_UClass_UCharacterCombatComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterCombatComponent.OuterSingleton, Z_Construct_UClass_UCharacterCombatComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterCombatComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCharacterCombatComponent);
UCharacterCombatComponent::~UCharacterCombatComponent() {}
// ********** End Class UCharacterCombatComponent **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterCombatComponent_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterCombatComponent, UCharacterCombatComponent::StaticClass, TEXT("UCharacterCombatComponent"), &Z_Registration_Info_UClass_UCharacterCombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterCombatComponent), 4042109915U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterCombatComponent_h__Script_Game2DCPlusPlus_2838828575(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterCombatComponent_h__Script_Game2DCPlusPlus_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterCombatComponent_h__Script_Game2DCPlusPlus_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
