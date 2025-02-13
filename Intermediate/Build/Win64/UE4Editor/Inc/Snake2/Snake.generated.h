// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKE2_Snake_generated_h
#error "Snake.generated.h already included, missing '#pragma once' in Snake.h"
#endif
#define SNAKE2_Snake_generated_h

#define Snake2_Source_Snake2_Snake_h_12_SPARSE_DATA
#define Snake2_Source_Snake2_Snake_h_12_RPC_WRAPPERS
#define Snake2_Source_Snake2_Snake_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Snake2_Source_Snake2_Snake_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASnake(); \
	friend struct Z_Construct_UClass_ASnake_Statics; \
public: \
	DECLARE_CLASS(ASnake, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Snake2"), NO_API) \
	DECLARE_SERIALIZER(ASnake)


#define Snake2_Source_Snake2_Snake_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASnake(); \
	friend struct Z_Construct_UClass_ASnake_Statics; \
public: \
	DECLARE_CLASS(ASnake, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Snake2"), NO_API) \
	DECLARE_SERIALIZER(ASnake)


#define Snake2_Source_Snake2_Snake_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASnake(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASnake) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnake); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnake); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnake(ASnake&&); \
	NO_API ASnake(const ASnake&); \
public:


#define Snake2_Source_Snake2_Snake_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnake(ASnake&&); \
	NO_API ASnake(const ASnake&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnake); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnake); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASnake)


#define Snake2_Source_Snake2_Snake_h_12_PRIVATE_PROPERTY_OFFSET
#define Snake2_Source_Snake2_Snake_h_9_PROLOG
#define Snake2_Source_Snake2_Snake_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Snake2_Source_Snake2_Snake_h_12_PRIVATE_PROPERTY_OFFSET \
	Snake2_Source_Snake2_Snake_h_12_SPARSE_DATA \
	Snake2_Source_Snake2_Snake_h_12_RPC_WRAPPERS \
	Snake2_Source_Snake2_Snake_h_12_INCLASS \
	Snake2_Source_Snake2_Snake_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Snake2_Source_Snake2_Snake_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Snake2_Source_Snake2_Snake_h_12_PRIVATE_PROPERTY_OFFSET \
	Snake2_Source_Snake2_Snake_h_12_SPARSE_DATA \
	Snake2_Source_Snake2_Snake_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Snake2_Source_Snake2_Snake_h_12_INCLASS_NO_PURE_DECLS \
	Snake2_Source_Snake2_Snake_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKE2_API UClass* StaticClass<class ASnake>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Snake2_Source_Snake2_Snake_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
