// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aberoth3D/GeneralAttributeSet.h"
#include "AttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGeneralAttributeSet() {}

// ********** Begin Cross Module References ********************************************************
ABEROTH3D_API UClass* Z_Construct_UClass_UGeneralAttributeSet();
ABEROTH3D_API UClass* Z_Construct_UClass_UGeneralAttributeSet_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
UPackage* Z_Construct_UPackage__Script_Aberoth3D();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGeneralAttributeSet *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UGeneralAttributeSet;
UClass* UGeneralAttributeSet::GetPrivateStaticClass()
{
	using TClass = UGeneralAttributeSet;
	if (!Z_Registration_Info_UClass_UGeneralAttributeSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GeneralAttributeSet"),
			Z_Registration_Info_UClass_UGeneralAttributeSet.InnerSingleton,
			StaticRegisterNativesUGeneralAttributeSet,
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
	return Z_Registration_Info_UClass_UGeneralAttributeSet.InnerSingleton;
}
UClass* Z_Construct_UClass_UGeneralAttributeSet_NoRegister()
{
	return UGeneralAttributeSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGeneralAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GeneralAttributeSet.h" },
		{ "ModuleRelativePath", "GeneralAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "ModuleRelativePath", "GeneralAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "ModuleRelativePath", "GeneralAttributeSet.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UGeneralAttributeSet constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UGeneralAttributeSet constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeneralAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UGeneralAttributeSet_Statics

// ********** Begin Class UGeneralAttributeSet Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeneralAttributeSet_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeneralAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeneralAttributeSet_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeneralAttributeSet, Damage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeneralAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneralAttributeSet_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneralAttributeSet_Statics::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeneralAttributeSet_Statics::PropPointers) < 2048);
// ********** End Class UGeneralAttributeSet Property Definitions **********************************
UObject* (*const Z_Construct_UClass_UGeneralAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_Aberoth3D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeneralAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeneralAttributeSet_Statics::ClassParams = {
	&UGeneralAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGeneralAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGeneralAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeneralAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeneralAttributeSet_Statics::Class_MetaDataParams)
};
void UGeneralAttributeSet::StaticRegisterNativesUGeneralAttributeSet()
{
}
UClass* Z_Construct_UClass_UGeneralAttributeSet()
{
	if (!Z_Registration_Info_UClass_UGeneralAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeneralAttributeSet.OuterSingleton, Z_Construct_UClass_UGeneralAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGeneralAttributeSet.OuterSingleton;
}
UGeneralAttributeSet::UGeneralAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UGeneralAttributeSet);
UGeneralAttributeSet::~UGeneralAttributeSet() {}
// ********** End Class UGeneralAttributeSet *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Skele_Desktop_Prototypes_Aberoth3D_Source_Aberoth3D_GeneralAttributeSet_h__Script_Aberoth3D_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGeneralAttributeSet, UGeneralAttributeSet::StaticClass, TEXT("UGeneralAttributeSet"), &Z_Registration_Info_UClass_UGeneralAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeneralAttributeSet), 686546433U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Skele_Desktop_Prototypes_Aberoth3D_Source_Aberoth3D_GeneralAttributeSet_h__Script_Aberoth3D_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Skele_Desktop_Prototypes_Aberoth3D_Source_Aberoth3D_GeneralAttributeSet_h__Script_Aberoth3D_4246422469{
	TEXT("/Script/Aberoth3D"),
	Z_CompiledInDeferFile_FID_Users_Skele_Desktop_Prototypes_Aberoth3D_Source_Aberoth3D_GeneralAttributeSet_h__Script_Aberoth3D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Skele_Desktop_Prototypes_Aberoth3D_Source_Aberoth3D_GeneralAttributeSet_h__Script_Aberoth3D_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
