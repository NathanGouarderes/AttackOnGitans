// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UCharacterStateComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUCharacterStateComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UCharacterStateComponent();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UCharacterStateComponent_NoRegister();
GAME2DCPLUSPLUS_API UEnum* Z_Construct_UEnum_Game2DCPlusPlus_EState();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCharacterStateComponent Function CanEnterState **************************
struct Z_Construct_UFunction_UCharacterStateComponent_CanEnterState_Statics
{
	struct CharacterStateComponent_eventCanEnterState_Parms
	{
		EState NewState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Components/UCharacterStateComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterStateComponent_CanEnterState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterStateComponent_CanEnterState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStateComponent_eventCanEnterState_Parms, NewState), Z_Construct_UEnum_Game2DCPlusPlus_EState, METADATA_PARAMS(0, nullptr) }; // 1516219444
void Z_Construct_UFunction_UCharacterStateComponent_CanEnterState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterStateComponent_eventCanEnterState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterStateComponent_CanEnterState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterStateComponent_eventCanEnterState_Parms), &Z_Construct_UFunction_UCharacterStateComponent_CanEnterState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterStateComponent_CanEnterState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStateComponent_CanEnterState_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStateComponent_CanEnterState_Statics::NewProp_NewState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStateComponent_CanEnterState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStateComponent_CanEnterState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterStateComponent_CanEnterState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterStateComponent, nullptr, "CanEnterState", Z_Construct_UFunction_UCharacterStateComponent_CanEnterState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStateComponent_CanEnterState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterStateComponent_CanEnterState_Statics::CharacterStateComponent_eventCanEnterState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStateComponent_CanEnterState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterStateComponent_CanEnterState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterStateComponent_CanEnterState_Statics::CharacterStateComponent_eventCanEnterState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterStateComponent_CanEnterState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterStateComponent_CanEnterState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterStateComponent::execCanEnterState)
{
	P_GET_ENUM(EState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanEnterState(EState(Z_Param_NewState));
	P_NATIVE_END;
}
// ********** End Class UCharacterStateComponent Function CanEnterState ****************************

// ********** Begin Class UCharacterStateComponent Function IsBeamActive ***************************
struct Z_Construct_UFunction_UCharacterStateComponent_IsBeamActive_Statics
{
	struct CharacterStateComponent_eventIsBeamActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Components/UCharacterStateComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCharacterStateComponent_IsBeamActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterStateComponent_eventIsBeamActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterStateComponent_IsBeamActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterStateComponent_eventIsBeamActive_Parms), &Z_Construct_UFunction_UCharacterStateComponent_IsBeamActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterStateComponent_IsBeamActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStateComponent_IsBeamActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStateComponent_IsBeamActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterStateComponent_IsBeamActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterStateComponent, nullptr, "IsBeamActive", Z_Construct_UFunction_UCharacterStateComponent_IsBeamActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStateComponent_IsBeamActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterStateComponent_IsBeamActive_Statics::CharacterStateComponent_eventIsBeamActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStateComponent_IsBeamActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterStateComponent_IsBeamActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterStateComponent_IsBeamActive_Statics::CharacterStateComponent_eventIsBeamActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterStateComponent_IsBeamActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterStateComponent_IsBeamActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterStateComponent::execIsBeamActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsBeamActive();
	P_NATIVE_END;
}
// ********** End Class UCharacterStateComponent Function IsBeamActive *****************************

// ********** Begin Class UCharacterStateComponent Function IsInState ******************************
struct Z_Construct_UFunction_UCharacterStateComponent_IsInState_Statics
{
	struct CharacterStateComponent_eventIsInState_Parms
	{
		EState State;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Components/UCharacterStateComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterStateComponent_IsInState_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterStateComponent_IsInState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStateComponent_eventIsInState_Parms, State), Z_Construct_UEnum_Game2DCPlusPlus_EState, METADATA_PARAMS(0, nullptr) }; // 1516219444
void Z_Construct_UFunction_UCharacterStateComponent_IsInState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterStateComponent_eventIsInState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterStateComponent_IsInState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterStateComponent_eventIsInState_Parms), &Z_Construct_UFunction_UCharacterStateComponent_IsInState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterStateComponent_IsInState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStateComponent_IsInState_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStateComponent_IsInState_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStateComponent_IsInState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStateComponent_IsInState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterStateComponent_IsInState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterStateComponent, nullptr, "IsInState", Z_Construct_UFunction_UCharacterStateComponent_IsInState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStateComponent_IsInState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterStateComponent_IsInState_Statics::CharacterStateComponent_eventIsInState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStateComponent_IsInState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterStateComponent_IsInState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterStateComponent_IsInState_Statics::CharacterStateComponent_eventIsInState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterStateComponent_IsInState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterStateComponent_IsInState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterStateComponent::execIsInState)
{
	P_GET_ENUM(EState,Z_Param_State);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInState(EState(Z_Param_State));
	P_NATIVE_END;
}
// ********** End Class UCharacterStateComponent Function IsInState ********************************

// ********** Begin Class UCharacterStateComponent Function ResetState *****************************
struct Z_Construct_UFunction_UCharacterStateComponent_ResetState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Components/UCharacterStateComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterStateComponent_ResetState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterStateComponent, nullptr, "ResetState", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStateComponent_ResetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterStateComponent_ResetState_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCharacterStateComponent_ResetState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterStateComponent_ResetState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterStateComponent::execResetState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetState();
	P_NATIVE_END;
}
// ********** End Class UCharacterStateComponent Function ResetState *******************************

// ********** Begin Class UCharacterStateComponent Function SetState *******************************
struct Z_Construct_UFunction_UCharacterStateComponent_SetState_Statics
{
	struct CharacterStateComponent_eventSetState_Parms
	{
		EState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Components/UCharacterStateComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterStateComponent_SetState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterStateComponent_SetState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStateComponent_eventSetState_Parms, NewState), Z_Construct_UEnum_Game2DCPlusPlus_EState, METADATA_PARAMS(0, nullptr) }; // 1516219444
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterStateComponent_SetState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStateComponent_SetState_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStateComponent_SetState_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStateComponent_SetState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterStateComponent_SetState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterStateComponent, nullptr, "SetState", Z_Construct_UFunction_UCharacterStateComponent_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStateComponent_SetState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterStateComponent_SetState_Statics::CharacterStateComponent_eventSetState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStateComponent_SetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterStateComponent_SetState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterStateComponent_SetState_Statics::CharacterStateComponent_eventSetState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterStateComponent_SetState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterStateComponent_SetState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterStateComponent::execSetState)
{
	P_GET_ENUM(EState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetState(EState(Z_Param_NewState));
	P_NATIVE_END;
}
// ********** End Class UCharacterStateComponent Function SetState *********************************

// ********** Begin Class UCharacterStateComponent *************************************************
void UCharacterStateComponent::StaticRegisterNativesUCharacterStateComponent()
{
	UClass* Class = UCharacterStateComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanEnterState", &UCharacterStateComponent::execCanEnterState },
		{ "IsBeamActive", &UCharacterStateComponent::execIsBeamActive },
		{ "IsInState", &UCharacterStateComponent::execIsInState },
		{ "ResetState", &UCharacterStateComponent::execResetState },
		{ "SetState", &UCharacterStateComponent::execSetState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCharacterStateComponent;
UClass* UCharacterStateComponent::GetPrivateStaticClass()
{
	using TClass = UCharacterStateComponent;
	if (!Z_Registration_Info_UClass_UCharacterStateComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CharacterStateComponent"),
			Z_Registration_Info_UClass_UCharacterStateComponent.InnerSingleton,
			StaticRegisterNativesUCharacterStateComponent,
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
	return Z_Registration_Info_UClass_UCharacterStateComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UCharacterStateComponent_NoRegister()
{
	return UCharacterStateComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCharacterStateComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/UCharacterStateComponent.h" },
		{ "ModuleRelativePath", "Components/UCharacterStateComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Components/UCharacterStateComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterStateComponent_CanEnterState, "CanEnterState" }, // 161074115
		{ &Z_Construct_UFunction_UCharacterStateComponent_IsBeamActive, "IsBeamActive" }, // 3113777884
		{ &Z_Construct_UFunction_UCharacterStateComponent_IsInState, "IsInState" }, // 3833305245
		{ &Z_Construct_UFunction_UCharacterStateComponent_ResetState, "ResetState" }, // 3862471112
		{ &Z_Construct_UFunction_UCharacterStateComponent_SetState, "SetState" }, // 3940678093
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterStateComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterStateComponent_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCharacterStateComponent_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterStateComponent, CurrentState), Z_Construct_UEnum_Game2DCPlusPlus_EState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 1516219444
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterStateComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterStateComponent_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterStateComponent_Statics::NewProp_CurrentState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStateComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterStateComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStateComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterStateComponent_Statics::ClassParams = {
	&UCharacterStateComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCharacterStateComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStateComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStateComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterStateComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterStateComponent()
{
	if (!Z_Registration_Info_UClass_UCharacterStateComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterStateComponent.OuterSingleton, Z_Construct_UClass_UCharacterStateComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterStateComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCharacterStateComponent);
UCharacterStateComponent::~UCharacterStateComponent() {}
// ********** End Class UCharacterStateComponent ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_UCharacterStateComponent_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterStateComponent, UCharacterStateComponent::StaticClass, TEXT("UCharacterStateComponent"), &Z_Registration_Info_UClass_UCharacterStateComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterStateComponent), 774785290U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_UCharacterStateComponent_h__Script_Game2DCPlusPlus_262228431(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_UCharacterStateComponent_h__Script_Game2DCPlusPlus_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_UCharacterStateComponent_h__Script_Game2DCPlusPlus_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
