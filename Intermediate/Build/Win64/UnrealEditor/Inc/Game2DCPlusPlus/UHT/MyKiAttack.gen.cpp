// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyKiAttack.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyKiAttack() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AMyKiAttack();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AMyKiAttack_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UCharacterKiComponent_NoRegister();
GAME2DCPLUSPLUS_API UEnum* Z_Construct_UEnum_Game2DCPlusPlus_EKiAttackType();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EKiAttackType *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKiAttackType;
static UEnum* EKiAttackType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EKiAttackType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EKiAttackType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Game2DCPlusPlus_EKiAttackType, (UObject*)Z_Construct_UPackage__Script_Game2DCPlusPlus(), TEXT("EKiAttackType"));
	}
	return Z_Registration_Info_UEnum_EKiAttackType.OuterSingleton;
}
template<> GAME2DCPLUSPLUS_NON_ATTRIBUTED_API UEnum* StaticEnum<EKiAttackType>()
{
	return EKiAttackType_StaticEnum();
}
struct Z_Construct_UEnum_Game2DCPlusPlus_EKiAttackType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Beam.Name", "EKiAttackType::Beam" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Abilities/MyKiAttack.h" },
		{ "Projectile.Name", "EKiAttackType::Projectile" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EKiAttackType::Projectile", (int64)EKiAttackType::Projectile },
		{ "EKiAttackType::Beam", (int64)EKiAttackType::Beam },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Game2DCPlusPlus_EKiAttackType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
	nullptr,
	"EKiAttackType",
	"EKiAttackType",
	Z_Construct_UEnum_Game2DCPlusPlus_EKiAttackType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Game2DCPlusPlus_EKiAttackType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Game2DCPlusPlus_EKiAttackType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Game2DCPlusPlus_EKiAttackType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Game2DCPlusPlus_EKiAttackType()
{
	if (!Z_Registration_Info_UEnum_EKiAttackType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKiAttackType.InnerSingleton, Z_Construct_UEnum_Game2DCPlusPlus_EKiAttackType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EKiAttackType.InnerSingleton;
}
// ********** End Enum EKiAttackType ***************************************************************

// ********** Begin Class AMyKiAttack **************************************************************
void AMyKiAttack::StaticRegisterNativesAMyKiAttack()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMyKiAttack;
UClass* AMyKiAttack::GetPrivateStaticClass()
{
	using TClass = AMyKiAttack;
	if (!Z_Registration_Info_UClass_AMyKiAttack.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MyKiAttack"),
			Z_Registration_Info_UClass_AMyKiAttack.InnerSingleton,
			StaticRegisterNativesAMyKiAttack,
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
	return Z_Registration_Info_UClass_AMyKiAttack.InnerSingleton;
}
UClass* Z_Construct_UClass_AMyKiAttack_NoRegister()
{
	return AMyKiAttack::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMyKiAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/MyKiAttack.h" },
		{ "ModuleRelativePath", "Abilities/MyKiAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KiAttackType_MetaData[] = {
		{ "Category", "Ki Attack" },
		{ "ModuleRelativePath", "Abilities/MyKiAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KiCost_MetaData[] = {
		{ "Category", "Ki Attack" },
		{ "ModuleRelativePath", "Abilities/MyKiAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[] = {
		{ "Category", "MyKiAttack" },
		{ "ModuleRelativePath", "Abilities/MyKiAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KiComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Abilities/MyKiAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_KiAttackType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_KiAttackType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KiCost;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KiComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyKiAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMyKiAttack_Statics::NewProp_KiAttackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMyKiAttack_Statics::NewProp_KiAttackType = { "KiAttackType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyKiAttack, KiAttackType), Z_Construct_UEnum_Game2DCPlusPlus_EKiAttackType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KiAttackType_MetaData), NewProp_KiAttackType_MetaData) }; // 2788316991
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyKiAttack_Statics::NewProp_KiCost = { "KiCost", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyKiAttack, KiCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KiCost_MetaData), NewProp_KiCost_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyKiAttack_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyKiAttack, OwnerCharacter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCharacter_MetaData), NewProp_OwnerCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyKiAttack_Statics::NewProp_KiComponent = { "KiComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyKiAttack, KiComponent), Z_Construct_UClass_UCharacterKiComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KiComponent_MetaData), NewProp_KiComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyKiAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyKiAttack_Statics::NewProp_KiAttackType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyKiAttack_Statics::NewProp_KiAttackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyKiAttack_Statics::NewProp_KiCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyKiAttack_Statics::NewProp_OwnerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyKiAttack_Statics::NewProp_KiComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyKiAttack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyKiAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyKiAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyKiAttack_Statics::ClassParams = {
	&AMyKiAttack::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyKiAttack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyKiAttack_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyKiAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyKiAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyKiAttack()
{
	if (!Z_Registration_Info_UClass_AMyKiAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyKiAttack.OuterSingleton, Z_Construct_UClass_AMyKiAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyKiAttack.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMyKiAttack);
AMyKiAttack::~AMyKiAttack() {}
// ********** End Class AMyKiAttack ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_MyKiAttack_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EKiAttackType_StaticEnum, TEXT("EKiAttackType"), &Z_Registration_Info_UEnum_EKiAttackType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2788316991U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyKiAttack, AMyKiAttack::StaticClass, TEXT("AMyKiAttack"), &Z_Registration_Info_UClass_AMyKiAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyKiAttack), 3351875172U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_MyKiAttack_h__Script_Game2DCPlusPlus_813962541(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_MyKiAttack_h__Script_Game2DCPlusPlus_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_MyKiAttack_h__Script_Game2DCPlusPlus_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_MyKiAttack_h__Script_Game2DCPlusPlus_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_MyKiAttack_h__Script_Game2DCPlusPlus_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
