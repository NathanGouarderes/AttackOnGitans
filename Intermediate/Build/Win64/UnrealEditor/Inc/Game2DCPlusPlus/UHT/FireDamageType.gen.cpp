// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/FireDamageType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireDamageType() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDamageType();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UFireDamageType();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UFireDamageType_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// End Cross Module References

// Begin Class UFireDamageType
void UFireDamageType::StaticRegisterNativesUFireDamageType()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFireDamageType);
UClass* Z_Construct_UClass_UFireDamageType_NoRegister()
{
	return UFireDamageType::StaticClass();
}
struct Z_Construct_UClass_UFireDamageType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FireDamageType.h" },
		{ "ModuleRelativePath", "FireDamageType.h" },
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
template<> GAME2DCPLUSPLUS_API UClass* StaticClass<UFireDamageType>()
{
	return UFireDamageType::StaticClass();
}
UFireDamageType::UFireDamageType(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFireDamageType);
UFireDamageType::~UFireDamageType() {}
// End Class UFireDamageType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_FireDamageType_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFireDamageType, UFireDamageType::StaticClass, TEXT("UFireDamageType"), &Z_Registration_Info_UClass_UFireDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFireDamageType), 2622308759U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_FireDamageType_h_1913622429(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_FireDamageType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_FireDamageType_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
