// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/DamageTypes/FireDamageType.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFireDamageType() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDamageType();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UFireDamageType();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UFireDamageType_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFireDamageType **********************************************************
void UFireDamageType::StaticRegisterNativesUFireDamageType()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFireDamageType;
UClass* UFireDamageType::GetPrivateStaticClass()
{
	using TClass = UFireDamageType;
	if (!Z_Registration_Info_UClass_UFireDamageType.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FireDamageType"),
			Z_Registration_Info_UClass_UFireDamageType.InnerSingleton,
			StaticRegisterNativesUFireDamageType,
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
	return Z_Registration_Info_UClass_UFireDamageType.InnerSingleton;
}
UClass* Z_Construct_UClass_UFireDamageType_NoRegister()
{
	return UFireDamageType::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFireDamageType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DamageTypes/FireDamageType.h" },
		{ "ModuleRelativePath", "DamageTypes/FireDamageType.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFireDamageType>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFireDamageType_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDamageType,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFireDamageType_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFireDamageType_Statics::ClassParams = {
	&UFireDamageType::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFireDamageType_Statics::Class_MetaDataParams), Z_Construct_UClass_UFireDamageType_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFireDamageType()
{
	if (!Z_Registration_Info_UClass_UFireDamageType.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFireDamageType.OuterSingleton, Z_Construct_UClass_UFireDamageType_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFireDamageType.OuterSingleton;
}
UFireDamageType::UFireDamageType(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFireDamageType);
UFireDamageType::~UFireDamageType() {}
// ********** End Class UFireDamageType ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_DamageTypes_FireDamageType_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFireDamageType, UFireDamageType::StaticClass, TEXT("UFireDamageType"), &Z_Registration_Info_UClass_UFireDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFireDamageType), 3285994784U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_DamageTypes_FireDamageType_h__Script_Game2DCPlusPlus_985271274(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_DamageTypes_FireDamageType_h__Script_Game2DCPlusPlus_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_DamageTypes_FireDamageType_h__Script_Game2DCPlusPlus_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
