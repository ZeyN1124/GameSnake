// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Snake2/Snake.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnake() {}
// Cross Module References
	SNAKE2_API UClass* Z_Construct_UClass_ASnake_NoRegister();
	SNAKE2_API UClass* Z_Construct_UClass_ASnake();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Snake2();
// End Cross Module References
	void ASnake::StaticRegisterNativesASnake()
	{
	}
	UClass* Z_Construct_UClass_ASnake_NoRegister()
	{
		return ASnake::StaticClass();
	}
	struct Z_Construct_UClass_ASnake_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASnake_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Snake2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnake_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Snake.h" },
		{ "ModuleRelativePath", "Snake.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASnake_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnake>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASnake_Statics::ClassParams = {
		&ASnake::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASnake_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASnake_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASnake()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASnake_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASnake, 299612542);
	template<> SNAKE2_API UClass* StaticClass<ASnake>()
	{
		return ASnake::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASnake(Z_Construct_UClass_ASnake, &ASnake::StaticClass, TEXT("/Script/Snake2"), TEXT("ASnake"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASnake);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
