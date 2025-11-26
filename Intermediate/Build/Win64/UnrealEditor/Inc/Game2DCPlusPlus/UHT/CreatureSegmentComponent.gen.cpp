// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CreatureSegmentComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCreatureSegmentComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UCreatureSegmentComponent();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UCreatureSegmentComponent_NoRegister();
GAME2DCPLUSPLUS_API UEnum* Z_Construct_UEnum_Game2DCPlusPlus_ECreatureSegmentType();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCreatureSegmentComponent ************************************************
void UCreatureSegmentComponent::StaticRegisterNativesUCreatureSegmentComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCreatureSegmentComponent;
UClass* UCreatureSegmentComponent::GetPrivateStaticClass()
{
	using TClass = UCreatureSegmentComponent;
	if (!Z_Registration_Info_UClass_UCreatureSegmentComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CreatureSegmentComponent"),
			Z_Registration_Info_UClass_UCreatureSegmentComponent.InnerSingleton,
			StaticRegisterNativesUCreatureSegmentComponent,
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
	return Z_Registration_Info_UClass_UCreatureSegmentComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UCreatureSegmentComponent_NoRegister()
{
	return UCreatureSegmentComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCreatureSegmentComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/CreatureSegmentComponent.h" },
		{ "ModuleRelativePath", "Components/CreatureSegmentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentType_MetaData[] = {
		{ "Category", "Segment" },
		{ "ModuleRelativePath", "Components/CreatureSegmentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[] = {
		{ "Category", "Segment" },
		{ "ModuleRelativePath", "Components/CreatureSegmentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Segment" },
		{ "ModuleRelativePath", "Components/CreatureSegmentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationIndex_MetaData[] = {
		{ "Category", "Segment" },
		{ "ModuleRelativePath", "Components/CreatureSegmentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanMutate_MetaData[] = {
		{ "Category", "Segment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Pour traquer les mutations\n" },
#endif
		{ "ModuleRelativePath", "Components/CreatureSegmentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pour traquer les mutations" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Segment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/CreatureSegmentComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SegmentType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SegmentType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GenerationIndex;
	static void NewProp_bCanMutate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanMutate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreatureSegmentComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCreatureSegmentComponent_Statics::NewProp_SegmentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCreatureSegmentComponent_Statics::NewProp_SegmentType = { "SegmentType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCreatureSegmentComponent, SegmentType), Z_Construct_UEnum_Game2DCPlusPlus_ECreatureSegmentType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentType_MetaData), NewProp_SegmentType_MetaData) }; // 4097868822
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCreatureSegmentComponent_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCreatureSegmentComponent, Length), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Length_MetaData), NewProp_Length_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCreatureSegmentComponent_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCreatureSegmentComponent, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCreatureSegmentComponent_Statics::NewProp_GenerationIndex = { "GenerationIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCreatureSegmentComponent, GenerationIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationIndex_MetaData), NewProp_GenerationIndex_MetaData) };
void Z_Construct_UClass_UCreatureSegmentComponent_Statics::NewProp_bCanMutate_SetBit(void* Obj)
{
	((UCreatureSegmentComponent*)Obj)->bCanMutate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCreatureSegmentComponent_Statics::NewProp_bCanMutate = { "bCanMutate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCreatureSegmentComponent), &Z_Construct_UClass_UCreatureSegmentComponent_Statics::NewProp_bCanMutate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanMutate_MetaData), NewProp_bCanMutate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCreatureSegmentComponent_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCreatureSegmentComponent, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCreatureSegmentComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatureSegmentComponent_Statics::NewProp_SegmentType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatureSegmentComponent_Statics::NewProp_SegmentType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatureSegmentComponent_Statics::NewProp_Length,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatureSegmentComponent_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatureSegmentComponent_Statics::NewProp_GenerationIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatureSegmentComponent_Statics::NewProp_bCanMutate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatureSegmentComponent_Statics::NewProp_MeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCreatureSegmentComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCreatureSegmentComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCreatureSegmentComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCreatureSegmentComponent_Statics::ClassParams = {
	&UCreatureSegmentComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCreatureSegmentComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCreatureSegmentComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCreatureSegmentComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCreatureSegmentComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCreatureSegmentComponent()
{
	if (!Z_Registration_Info_UClass_UCreatureSegmentComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCreatureSegmentComponent.OuterSingleton, Z_Construct_UClass_UCreatureSegmentComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCreatureSegmentComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCreatureSegmentComponent);
UCreatureSegmentComponent::~UCreatureSegmentComponent() {}
// ********** End Class UCreatureSegmentComponent **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CreatureSegmentComponent_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCreatureSegmentComponent, UCreatureSegmentComponent::StaticClass, TEXT("UCreatureSegmentComponent"), &Z_Registration_Info_UClass_UCreatureSegmentComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCreatureSegmentComponent), 138054032U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CreatureSegmentComponent_h__Script_Game2DCPlusPlus_4090280843(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CreatureSegmentComponent_h__Script_Game2DCPlusPlus_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CreatureSegmentComponent_h__Script_Game2DCPlusPlus_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
