// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyBlueprintFunctionLibrary.h"

#ifdef ABEROTH3D_MyBlueprintFunctionLibrary_generated_h
#error "MyBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in MyBlueprintFunctionLibrary.h"
#endif
#define ABEROTH3D_MyBlueprintFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitySystemComponent;
struct FGameplayAttribute;

// ********** Begin Class UMyBlueprintFunctionLibrary **********************************************
#define FID_Users_Skele_Desktop_Prototypes_Aberoth3D_Source_Aberoth3D_MyBlueprintFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAttributeBase);


struct Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics;
ABEROTH3D_API UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary_NoRegister();

#define FID_Users_Skele_Desktop_Prototypes_Aberoth3D_Source_Aberoth3D_MyBlueprintFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyBlueprintFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ABEROTH3D_API UClass* ::Z_Construct_UClass_UMyBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMyBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Aberoth3D"), Z_Construct_UClass_UMyBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMyBlueprintFunctionLibrary)


#define FID_Users_Skele_Desktop_Prototypes_Aberoth3D_Source_Aberoth3D_MyBlueprintFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMyBlueprintFunctionLibrary(UMyBlueprintFunctionLibrary&&) = delete; \
	UMyBlueprintFunctionLibrary(const UMyBlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyBlueprintFunctionLibrary) \
	NO_API virtual ~UMyBlueprintFunctionLibrary();


#define FID_Users_Skele_Desktop_Prototypes_Aberoth3D_Source_Aberoth3D_MyBlueprintFunctionLibrary_h_12_PROLOG
#define FID_Users_Skele_Desktop_Prototypes_Aberoth3D_Source_Aberoth3D_MyBlueprintFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Skele_Desktop_Prototypes_Aberoth3D_Source_Aberoth3D_MyBlueprintFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Skele_Desktop_Prototypes_Aberoth3D_Source_Aberoth3D_MyBlueprintFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Skele_Desktop_Prototypes_Aberoth3D_Source_Aberoth3D_MyBlueprintFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMyBlueprintFunctionLibrary;

// ********** End Class UMyBlueprintFunctionLibrary ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Skele_Desktop_Prototypes_Aberoth3D_Source_Aberoth3D_MyBlueprintFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
