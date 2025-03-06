// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/MyKiProjectileBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyKiProjectileBase() {}

// Begin Cross Module References
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AMyKiProjectileBase();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AMyKiProjectileBase_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AMyProjectileBase();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UCharacterKiComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// End Cross Module References

// Begin Class AMyKiProjectileBase
void AMyKiProjectileBase::StaticRegisterNativesAMyKiProjectileBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyKiProjectileBase);
UClass* Z_Construct_UClass_AMyKiProjectileBase_NoRegister()
{
	return AMyKiProjectileBase::StaticClass();
}
struct Z_Construct_UClass_AMyKiProjectileBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyKiProjectileBase.h" },
		{ "ModuleRelativePath", "MyKiProjectileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KiCost_MetaData[] = {
		{ "Category", "Ki" },
		{ "ModuleRelativePath", "MyKiProjectileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KiComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Co\xef\xbf\xbdt en Ki pour lancer ce projectile\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyKiProjectileBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Co\xef\xbf\xbdt en Ki pour lancer ce projectile" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KiCost;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KiComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyKiProjectileBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyKiProjectileBase_Statics::NewProp_KiCost = { "KiCost", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyKiProjectileBase, KiCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KiCost_MetaData), NewProp_KiCost_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyKiProjectileBase_Statics::NewProp_KiComponent = { "KiComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyKiProjectileBase, KiComponent), Z_Construct_UClass_UCharacterKiComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KiComponent_MetaData), NewProp_KiComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyKiProjectileBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyKiProjectileBase_Statics::NewProp_KiCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyKiProjectileBase_Statics::NewProp_KiComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyKiProjectileBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyKiProjectileBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMyProjectileBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyKiProjectileBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyKiProjectileBase_Statics::ClassParams = {
	&AMyKiProjectileBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyKiProjectileBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyKiProjectileBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyKiProjectileBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyKiProjectileBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyKiProjectileBase()
{
	if (!Z_Registration_Info_UClass_AMyKiProjectileBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyKiProjectileBase.OuterSingleton, Z_Construct_UClass_AMyKiProjectileBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyKiProjectileBase.OuterSingleton;
}
template<> GAME2DCPLUSPLUS_API UClass* StaticClass<AMyKiProjectileBase>()
{
	return AMyKiProjectileBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyKiProjectileBase);
AMyKiProjectileBase::~AMyKiProjectileBase() {}
// End Class AMyKiProjectileBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyKiProjectileBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyKiProjectileBase, AMyKiProjectileBase::StaticClass, TEXT("AMyKiProjectileBase"), &Z_Registration_Info_UClass_AMyKiProjectileBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyKiProjectileBase), 4140628777U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyKiProjectileBase_h_1770346033(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyKiProjectileBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyKiProjectileBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
