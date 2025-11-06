// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CharacterAnimationComponent.h"
#include "Game2DCPlusPlus/Data/FBeamAttackData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCharacterAnimationComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UCharacterAnimationComponent();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UCharacterAnimationComponent_NoRegister();
GAME2DCPLUSPLUS_API UEnum* Z_Construct_UEnum_Game2DCPlusPlus_ERole();
GAME2DCPLUSPLUS_API UScriptStruct* Z_Construct_UScriptStruct_FBeamAttackData();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ERole *********************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERole;
static UEnum* ERole_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERole.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERole.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Game2DCPlusPlus_ERole, (UObject*)Z_Construct_UPackage__Script_Game2DCPlusPlus(), TEXT("ERole"));
	}
	return Z_Registration_Info_UEnum_ERole.OuterSingleton;
}
template<> GAME2DCPLUSPLUS_NON_ATTRIBUTED_API UEnum* StaticEnum<ERole>()
{
	return ERole_StaticEnum();
}
struct Z_Construct_UEnum_Game2DCPlusPlus_ERole_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Boss.Name", "ERole::Boss" },
		{ "Enemy.Name", "ERole::Enemy" },
		{ "ModuleRelativePath", "Components/CharacterAnimationComponent.h" },
		{ "NPC.Name", "ERole::NPC" },
		{ "Player.Name", "ERole::Player" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERole::Player", (int64)ERole::Player },
		{ "ERole::Enemy", (int64)ERole::Enemy },
		{ "ERole::Boss", (int64)ERole::Boss },
		{ "ERole::NPC", (int64)ERole::NPC },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Game2DCPlusPlus_ERole_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
	nullptr,
	"ERole",
	"ERole",
	Z_Construct_UEnum_Game2DCPlusPlus_ERole_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Game2DCPlusPlus_ERole_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Game2DCPlusPlus_ERole_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Game2DCPlusPlus_ERole_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Game2DCPlusPlus_ERole()
{
	if (!Z_Registration_Info_UEnum_ERole.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERole.InnerSingleton, Z_Construct_UEnum_Game2DCPlusPlus_ERole_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERole.InnerSingleton;
}
// ********** End Enum ERole ***********************************************************************

// ********** Begin Class UCharacterAnimationComponent Function PlayAnimation **********************
struct Z_Construct_UFunction_UCharacterAnimationComponent_PlayAnimation_Statics
{
	struct CharacterAnimationComponent_eventPlayAnimation_Parms
	{
		UPaperFlipbook* Animation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Declenche l'animation d'attaque */" },
#endif
		{ "ModuleRelativePath", "Components/CharacterAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declenche l'animation d'attaque" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterAnimationComponent_PlayAnimation_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterAnimationComponent_eventPlayAnimation_Parms, Animation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterAnimationComponent_PlayAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterAnimationComponent_PlayAnimation_Statics::NewProp_Animation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAnimationComponent_PlayAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAnimationComponent_PlayAnimation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterAnimationComponent, nullptr, "PlayAnimation", Z_Construct_UFunction_UCharacterAnimationComponent_PlayAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAnimationComponent_PlayAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterAnimationComponent_PlayAnimation_Statics::CharacterAnimationComponent_eventPlayAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAnimationComponent_PlayAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterAnimationComponent_PlayAnimation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterAnimationComponent_PlayAnimation_Statics::CharacterAnimationComponent_eventPlayAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterAnimationComponent_PlayAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterAnimationComponent_PlayAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterAnimationComponent::execPlayAnimation)
{
	P_GET_OBJECT(UPaperFlipbook,Z_Param_Animation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayAnimation(Z_Param_Animation);
	P_NATIVE_END;
}
// ********** End Class UCharacterAnimationComponent Function PlayAnimation ************************

// ********** Begin Class UCharacterAnimationComponent Function PlayChangingBeamAnimation **********
struct Z_Construct_UFunction_UCharacterAnimationComponent_PlayChangingBeamAnimation_Statics
{
	struct CharacterAnimationComponent_eventPlayChangingBeamAnimation_Parms
	{
		FBeamAttackData BeamData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation|Beam" },
		{ "ModuleRelativePath", "Components/CharacterAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeamData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeamData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterAnimationComponent_PlayChangingBeamAnimation_Statics::NewProp_BeamData = { "BeamData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterAnimationComponent_eventPlayChangingBeamAnimation_Parms, BeamData), Z_Construct_UScriptStruct_FBeamAttackData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeamData_MetaData), NewProp_BeamData_MetaData) }; // 1982421153
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterAnimationComponent_PlayChangingBeamAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterAnimationComponent_PlayChangingBeamAnimation_Statics::NewProp_BeamData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAnimationComponent_PlayChangingBeamAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAnimationComponent_PlayChangingBeamAnimation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterAnimationComponent, nullptr, "PlayChangingBeamAnimation", Z_Construct_UFunction_UCharacterAnimationComponent_PlayChangingBeamAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAnimationComponent_PlayChangingBeamAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterAnimationComponent_PlayChangingBeamAnimation_Statics::CharacterAnimationComponent_eventPlayChangingBeamAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAnimationComponent_PlayChangingBeamAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterAnimationComponent_PlayChangingBeamAnimation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterAnimationComponent_PlayChangingBeamAnimation_Statics::CharacterAnimationComponent_eventPlayChangingBeamAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterAnimationComponent_PlayChangingBeamAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterAnimationComponent_PlayChangingBeamAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterAnimationComponent::execPlayChangingBeamAnimation)
{
	P_GET_STRUCT_REF(FBeamAttackData,Z_Param_Out_BeamData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayChangingBeamAnimation(Z_Param_Out_BeamData);
	P_NATIVE_END;
}
// ********** End Class UCharacterAnimationComponent Function PlayChangingBeamAnimation ************

// ********** Begin Class UCharacterAnimationComponent *********************************************
void UCharacterAnimationComponent::StaticRegisterNativesUCharacterAnimationComponent()
{
	UClass* Class = UCharacterAnimationComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PlayAnimation", &UCharacterAnimationComponent::execPlayAnimation },
		{ "PlayChangingBeamAnimation", &UCharacterAnimationComponent::execPlayChangingBeamAnimation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCharacterAnimationComponent;
UClass* UCharacterAnimationComponent::GetPrivateStaticClass()
{
	using TClass = UCharacterAnimationComponent;
	if (!Z_Registration_Info_UClass_UCharacterAnimationComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CharacterAnimationComponent"),
			Z_Registration_Info_UClass_UCharacterAnimationComponent.InnerSingleton,
			StaticRegisterNativesUCharacterAnimationComponent,
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
	return Z_Registration_Info_UClass_UCharacterAnimationComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UCharacterAnimationComponent_NoRegister()
{
	return UCharacterAnimationComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCharacterAnimationComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/CharacterAnimationComponent.h" },
		{ "ModuleRelativePath", "Components/CharacterAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlipbookComponent_MetaData[] = {
		{ "Category", "Animation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/CharacterAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdleAnimation_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Liste des animations */" },
#endif
		{ "ModuleRelativePath", "Components/CharacterAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Liste des animations" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAnimation_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = \"Animation\")\n//UPaperFlipbook* WalkAnimation;\n" },
#endif
		{ "ModuleRelativePath", "Components/CharacterAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = \"Animation\")\nUPaperFlipbook* WalkAnimation;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpStartAnimation_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Components/CharacterAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpUpAnimation_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Components/CharacterAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallAnimation_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Components/CharacterAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAbsorbtionAnimation_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Components/CharacterAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationDataTableAsset_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Components/CharacterAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalAttackDataTable_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Components/CharacterAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileDataTable_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Components/CharacterAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeamDataTableDataTable_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Components/CharacterAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Components/CharacterAnimationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlipbookComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IdleAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpStartAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpUpAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FallAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAbsorbtionAnimation;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AnimationDataTableAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicalAttackDataTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileDataTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BeamDataTableDataTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterAnimationComponent_PlayAnimation, "PlayAnimation" }, // 147114549
		{ &Z_Construct_UFunction_UCharacterAnimationComponent_PlayChangingBeamAnimation, "PlayChangingBeamAnimation" }, // 27019780
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterAnimationComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_FlipbookComponent = { "FlipbookComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimationComponent, FlipbookComponent), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlipbookComponent_MetaData), NewProp_FlipbookComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_IdleAnimation = { "IdleAnimation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimationComponent, IdleAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdleAnimation_MetaData), NewProp_IdleAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_JumpAnimation = { "JumpAnimation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimationComponent, JumpAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAnimation_MetaData), NewProp_JumpAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_JumpStartAnimation = { "JumpStartAnimation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimationComponent, JumpStartAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpStartAnimation_MetaData), NewProp_JumpStartAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_JumpUpAnimation = { "JumpUpAnimation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimationComponent, JumpUpAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpUpAnimation_MetaData), NewProp_JumpUpAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_FallAnimation = { "FallAnimation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimationComponent, FallAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallAnimation_MetaData), NewProp_FallAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_JumpAbsorbtionAnimation = { "JumpAbsorbtionAnimation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimationComponent, JumpAbsorbtionAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAbsorbtionAnimation_MetaData), NewProp_JumpAbsorbtionAnimation_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_AnimationDataTableAsset = { "AnimationDataTableAsset", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimationComponent, AnimationDataTableAsset), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationDataTableAsset_MetaData), NewProp_AnimationDataTableAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_PhysicalAttackDataTable = { "PhysicalAttackDataTable", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimationComponent, PhysicalAttackDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalAttackDataTable_MetaData), NewProp_PhysicalAttackDataTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_ProjectileDataTable = { "ProjectileDataTable", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimationComponent, ProjectileDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileDataTable_MetaData), NewProp_ProjectileDataTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_BeamDataTableDataTable = { "BeamDataTableDataTable", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimationComponent, BeamDataTableDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeamDataTableDataTable_MetaData), NewProp_BeamDataTableDataTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimationComponent, OwnerCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCharacter_MetaData), NewProp_OwnerCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterAnimationComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_FlipbookComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_IdleAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_JumpAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_JumpStartAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_JumpUpAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_FallAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_JumpAbsorbtionAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_AnimationDataTableAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_PhysicalAttackDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_ProjectileDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_BeamDataTableDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_OwnerCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimationComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterAnimationComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimationComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterAnimationComponent_Statics::ClassParams = {
	&UCharacterAnimationComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCharacterAnimationComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimationComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimationComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterAnimationComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterAnimationComponent()
{
	if (!Z_Registration_Info_UClass_UCharacterAnimationComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterAnimationComponent.OuterSingleton, Z_Construct_UClass_UCharacterAnimationComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterAnimationComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCharacterAnimationComponent);
UCharacterAnimationComponent::~UCharacterAnimationComponent() {}
// ********** End Class UCharacterAnimationComponent ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterAnimationComponent_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERole_StaticEnum, TEXT("ERole"), &Z_Registration_Info_UEnum_ERole, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4013508945U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterAnimationComponent, UCharacterAnimationComponent::StaticClass, TEXT("UCharacterAnimationComponent"), &Z_Registration_Info_UClass_UCharacterAnimationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterAnimationComponent), 2402967086U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterAnimationComponent_h__Script_Game2DCPlusPlus_4027169814(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterAnimationComponent_h__Script_Game2DCPlusPlus_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterAnimationComponent_h__Script_Game2DCPlusPlus_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterAnimationComponent_h__Script_Game2DCPlusPlus_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterAnimationComponent_h__Script_Game2DCPlusPlus_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
