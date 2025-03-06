// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/CharacterAnimationComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterAnimationComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UCharacterAnimationComponent();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UCharacterAnimationComponent_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// End Cross Module References

// Begin Class UCharacterAnimationComponent
void UCharacterAnimationComponent::StaticRegisterNativesUCharacterAnimationComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterAnimationComponent);
UClass* Z_Construct_UClass_UCharacterAnimationComponent_NoRegister()
{
	return UCharacterAnimationComponent::StaticClass();
}
struct Z_Construct_UClass_UCharacterAnimationComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CharacterAnimationComponent.h" },
		{ "ModuleRelativePath", "CharacterAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Swing1SwordFlipbook_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "CharacterAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Swing2SwordFlipbook_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "CharacterAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Swing3SwordFlipbook_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "CharacterAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "CharacterAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlipbookComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdleAnimation_MetaData[] = {
		{ "Category", "Animations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Liste des animations */" },
#endif
		{ "ModuleRelativePath", "CharacterAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Liste des animations" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "CharacterAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "CharacterAnimationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Swing1SwordFlipbook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Swing2SwordFlipbook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Swing3SwordFlipbook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlipbookComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IdleAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WalkAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAnimation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterAnimationComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_Swing1SwordFlipbook = { "Swing1SwordFlipbook", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimationComponent, Swing1SwordFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Swing1SwordFlipbook_MetaData), NewProp_Swing1SwordFlipbook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_Swing2SwordFlipbook = { "Swing2SwordFlipbook", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimationComponent, Swing2SwordFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Swing2SwordFlipbook_MetaData), NewProp_Swing2SwordFlipbook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_Swing3SwordFlipbook = { "Swing3SwordFlipbook", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimationComponent, Swing3SwordFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Swing3SwordFlipbook_MetaData), NewProp_Swing3SwordFlipbook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimationComponent, OwnerCharacter), Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCharacter_MetaData), NewProp_OwnerCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_FlipbookComponent = { "FlipbookComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimationComponent, FlipbookComponent), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlipbookComponent_MetaData), NewProp_FlipbookComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_IdleAnimation = { "IdleAnimation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimationComponent, IdleAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdleAnimation_MetaData), NewProp_IdleAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_WalkAnimation = { "WalkAnimation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimationComponent, WalkAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkAnimation_MetaData), NewProp_WalkAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_JumpAnimation = { "JumpAnimation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimationComponent, JumpAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAnimation_MetaData), NewProp_JumpAnimation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterAnimationComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_Swing1SwordFlipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_Swing2SwordFlipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_Swing3SwordFlipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_OwnerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_FlipbookComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_IdleAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_WalkAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimationComponent_Statics::NewProp_JumpAnimation,
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
	nullptr,
	Z_Construct_UClass_UCharacterAnimationComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
template<> GAME2DCPLUSPLUS_API UClass* StaticClass<UCharacterAnimationComponent>()
{
	return UCharacterAnimationComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterAnimationComponent);
UCharacterAnimationComponent::~UCharacterAnimationComponent() {}
// End Class UCharacterAnimationComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_CharacterAnimationComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterAnimationComponent, UCharacterAnimationComponent::StaticClass, TEXT("UCharacterAnimationComponent"), &Z_Registration_Info_UClass_UCharacterAnimationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterAnimationComponent), 2187162542U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_CharacterAnimationComponent_h_2492310303(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_CharacterAnimationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_CharacterAnimationComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
