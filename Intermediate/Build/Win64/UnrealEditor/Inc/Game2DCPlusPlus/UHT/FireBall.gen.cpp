// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/Abilities/Projectiles/FireBall.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireBall() {}

// Begin Cross Module References
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AFireBall();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AFireBall_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AMyKiProjectileBase();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// End Cross Module References

// Begin Class AFireBall
void AFireBall::StaticRegisterNativesAFireBall()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFireBall);
UClass* Z_Construct_UClass_AFireBall_NoRegister()
{
	return AFireBall::StaticClass();
}
struct Z_Construct_UClass_AFireBall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Abilities/Projectiles/FireBall.h" },
		{ "ModuleRelativePath", "Abilities/Projectiles/FireBall.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFireBall>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFireBall_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMyKiProjectileBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFireBall_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFireBall_Statics::ClassParams = {
	&AFireBall::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFireBall_Statics::Class_MetaDataParams), Z_Construct_UClass_AFireBall_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFireBall()
{
	if (!Z_Registration_Info_UClass_AFireBall.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFireBall.OuterSingleton, Z_Construct_UClass_AFireBall_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFireBall.OuterSingleton;
}
template<> GAME2DCPLUSPLUS_API UClass* StaticClass<AFireBall>()
{
	return AFireBall::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFireBall);
AFireBall::~AFireBall() {}
// End Class AFireBall

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Abilities_Projectiles_FireBall_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFireBall, AFireBall::StaticClass, TEXT("AFireBall"), &Z_Registration_Info_UClass_AFireBall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFireBall), 3632508603U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Abilities_Projectiles_FireBall_h_2265598511(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Abilities_Projectiles_FireBall_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Abilities_Projectiles_FireBall_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
