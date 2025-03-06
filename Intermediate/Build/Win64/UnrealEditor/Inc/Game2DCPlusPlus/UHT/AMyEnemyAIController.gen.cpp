// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/AMyEnemyAIController.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAMyEnemyAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AAMyEnemyAIController();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AAMyEnemyAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// End Cross Module References

// Begin Class AAMyEnemyAIController Function OnTargetDetected
struct Z_Construct_UFunction_AAMyEnemyAIController_OnTargetDetected_Statics
{
	struct AMyEnemyAIController_eventOnTargetDetected_Parms
	{
		AActor* Actor;
		FAIStimulus Stimulus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AMyEnemyAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAMyEnemyAIController_OnTargetDetected_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyEnemyAIController_eventOnTargetDetected_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAMyEnemyAIController_OnTargetDetected_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyEnemyAIController_eventOnTargetDetected_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(0, nullptr) }; // 177100813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAMyEnemyAIController_OnTargetDetected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAMyEnemyAIController_OnTargetDetected_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAMyEnemyAIController_OnTargetDetected_Statics::NewProp_Stimulus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAMyEnemyAIController_OnTargetDetected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAMyEnemyAIController_OnTargetDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAMyEnemyAIController, nullptr, "OnTargetDetected", nullptr, nullptr, Z_Construct_UFunction_AAMyEnemyAIController_OnTargetDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAMyEnemyAIController_OnTargetDetected_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAMyEnemyAIController_OnTargetDetected_Statics::AMyEnemyAIController_eventOnTargetDetected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAMyEnemyAIController_OnTargetDetected_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAMyEnemyAIController_OnTargetDetected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAMyEnemyAIController_OnTargetDetected_Statics::AMyEnemyAIController_eventOnTargetDetected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAMyEnemyAIController_OnTargetDetected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAMyEnemyAIController_OnTargetDetected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAMyEnemyAIController::execOnTargetDetected)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTargetDetected(Z_Param_Actor,Z_Param_Stimulus);
	P_NATIVE_END;
}
// End Class AAMyEnemyAIController Function OnTargetDetected

// Begin Class AAMyEnemyAIController
void AAMyEnemyAIController::StaticRegisterNativesAAMyEnemyAIController()
{
	UClass* Class = AAMyEnemyAIController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnTargetDetected", &AAMyEnemyAIController::execOnTargetDetected },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAMyEnemyAIController);
UClass* Z_Construct_UClass_AAMyEnemyAIController_NoRegister()
{
	return AAMyEnemyAIController::StaticClass();
}
struct Z_Construct_UClass_AAMyEnemyAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AMyEnemyAIController.h" },
		{ "ModuleRelativePath", "AMyEnemyAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardComponent_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AMyEnemyAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeComponent_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AMyEnemyAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AMyEnemyAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardData_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AMyEnemyAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightConfig_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AMyEnemyAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackboardComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackboardData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SightConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAMyEnemyAIController_OnTargetDetected, "OnTargetDetected" }, // 2952730043
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAMyEnemyAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAMyEnemyAIController_Statics::NewProp_BlackboardComponent = { "BlackboardComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAMyEnemyAIController, BlackboardComponent), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackboardComponent_MetaData), NewProp_BlackboardComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAMyEnemyAIController_Statics::NewProp_BehaviorTreeComponent = { "BehaviorTreeComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAMyEnemyAIController, BehaviorTreeComponent), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTreeComponent_MetaData), NewProp_BehaviorTreeComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAMyEnemyAIController_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAMyEnemyAIController, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTree_MetaData), NewProp_BehaviorTree_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAMyEnemyAIController_Statics::NewProp_BlackboardData = { "BlackboardData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAMyEnemyAIController, BlackboardData), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackboardData_MetaData), NewProp_BlackboardData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAMyEnemyAIController_Statics::NewProp_SightConfig = { "SightConfig", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAMyEnemyAIController, SightConfig), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightConfig_MetaData), NewProp_SightConfig_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAMyEnemyAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAMyEnemyAIController_Statics::NewProp_BlackboardComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAMyEnemyAIController_Statics::NewProp_BehaviorTreeComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAMyEnemyAIController_Statics::NewProp_BehaviorTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAMyEnemyAIController_Statics::NewProp_BlackboardData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAMyEnemyAIController_Statics::NewProp_SightConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAMyEnemyAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAMyEnemyAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAMyEnemyAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAMyEnemyAIController_Statics::ClassParams = {
	&AAMyEnemyAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAMyEnemyAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAMyEnemyAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAMyEnemyAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AAMyEnemyAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAMyEnemyAIController()
{
	if (!Z_Registration_Info_UClass_AAMyEnemyAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAMyEnemyAIController.OuterSingleton, Z_Construct_UClass_AAMyEnemyAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAMyEnemyAIController.OuterSingleton;
}
template<> GAME2DCPLUSPLUS_API UClass* StaticClass<AAMyEnemyAIController>()
{
	return AAMyEnemyAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAMyEnemyAIController);
AAMyEnemyAIController::~AAMyEnemyAIController() {}
// End Class AAMyEnemyAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_AMyEnemyAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAMyEnemyAIController, AAMyEnemyAIController::StaticClass, TEXT("AAMyEnemyAIController"), &Z_Registration_Info_UClass_AAMyEnemyAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAMyEnemyAIController), 1559809307U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_AMyEnemyAIController_h_2713180539(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_AMyEnemyAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_AMyEnemyAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
