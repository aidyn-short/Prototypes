// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aberoth3D/MyBlueprintFunctionLibrary.h"
#include "AttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMyBlueprintFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ABEROTH3D_API UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary();
ABEROTH3D_API UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
UPackage* Z_Construct_UPackage__Script_Aberoth3D();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMyBlueprintFunctionLibrary Function SetAttributeBase ********************
struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetAttributeBase_Statics
{
	struct MyBlueprintFunctionLibrary_eventSetAttributeBase_Parms
	{
		UAbilitySystemComponent* AbilitySystemComponent;
		FGameplayAttribute Attribute;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS" },
		{ "ModuleRelativePath", "MyBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetAttributeBase constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAttributeBase constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAttributeBase Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetAttributeBase_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventSetAttributeBase_Parms, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetAttributeBase_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventSetAttributeBase_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 4237305057
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetAttributeBase_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventSetAttributeBase_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetAttributeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetAttributeBase_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetAttributeBase_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetAttributeBase_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetAttributeBase_Statics::PropPointers) < 2048);
// ********** End Function SetAttributeBase Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetAttributeBase_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "SetAttributeBase", 	Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetAttributeBase_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetAttributeBase_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetAttributeBase_Statics::MyBlueprintFunctionLibrary_eventSetAttributeBase_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetAttributeBase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetAttributeBase_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetAttributeBase_Statics::MyBlueprintFunctionLibrary_eventSetAttributeBase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetAttributeBase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetAttributeBase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyBlueprintFunctionLibrary::execSetAttributeBase)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystemComponent);
	P_GET_STRUCT(FGameplayAttribute,Z_Param_Attribute);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMyBlueprintFunctionLibrary::SetAttributeBase(Z_Param_AbilitySystemComponent,Z_Param_Attribute,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UMyBlueprintFunctionLibrary Function SetAttributeBase **********************

// ********** Begin Class UMyBlueprintFunctionLibrary **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary;
UClass* UMyBlueprintFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UMyBlueprintFunctionLibrary;
	if (!Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MyBlueprintFunctionLibrary"),
			Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUMyBlueprintFunctionLibrary,
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
	return Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary_NoRegister()
{
	return UMyBlueprintFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "MyBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMyBlueprintFunctionLibrary constinit property declarations **************
// ********** End Class UMyBlueprintFunctionLibrary constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetAttributeBase"), .Pointer = &UMyBlueprintFunctionLibrary::execSetAttributeBase },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetAttributeBase, "SetAttributeBase" }, // 3071885536
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics
UObject* (*const Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Aberoth3D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::ClassParams = {
	&UMyBlueprintFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
void UMyBlueprintFunctionLibrary::StaticRegisterNativesUMyBlueprintFunctionLibrary()
{
	UClass* Class = UMyBlueprintFunctionLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary.OuterSingleton;
}
UMyBlueprintFunctionLibrary::UMyBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMyBlueprintFunctionLibrary);
UMyBlueprintFunctionLibrary::~UMyBlueprintFunctionLibrary() {}
// ********** End Class UMyBlueprintFunctionLibrary ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Skele_Desktop_Prototypes_Aberoth3D_Source_Aberoth3D_MyBlueprintFunctionLibrary_h__Script_Aberoth3D_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyBlueprintFunctionLibrary, UMyBlueprintFunctionLibrary::StaticClass, TEXT("UMyBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBlueprintFunctionLibrary), 693571248U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Skele_Desktop_Prototypes_Aberoth3D_Source_Aberoth3D_MyBlueprintFunctionLibrary_h__Script_Aberoth3D_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Skele_Desktop_Prototypes_Aberoth3D_Source_Aberoth3D_MyBlueprintFunctionLibrary_h__Script_Aberoth3D_3995082849{
	TEXT("/Script/Aberoth3D"),
	Z_CompiledInDeferFile_FID_Users_Skele_Desktop_Prototypes_Aberoth3D_Source_Aberoth3D_MyBlueprintFunctionLibrary_h__Script_Aberoth3D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Skele_Desktop_Prototypes_Aberoth3D_Source_Aberoth3D_MyBlueprintFunctionLibrary_h__Script_Aberoth3D_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
