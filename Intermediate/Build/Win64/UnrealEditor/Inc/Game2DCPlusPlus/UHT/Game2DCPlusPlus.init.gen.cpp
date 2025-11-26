// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGame2DCPlusPlus_init() {}
	GAME2DCPLUSPLUS_API UFunction* Z_Construct_UDelegateFunction_UHitboxComponent_OnCustomHit__DelegateSignature();
static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Game2DCPlusPlus;
FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus()
{
	if (!Z_Registration_Info_UPackage__Script_Game2DCPlusPlus.OuterSingleton)
	{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_UHitboxComponent_OnCustomHit__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/Game2DCPlusPlus",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x453D805B,
			0x9A2E777D,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Game2DCPlusPlus.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_Game2DCPlusPlus.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Game2DCPlusPlus(Z_Construct_UPackage__Script_Game2DCPlusPlus, TEXT("/Script/Game2DCPlusPlus"), Z_Registration_Info_UPackage__Script_Game2DCPlusPlus, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x453D805B, 0x9A2E777D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
