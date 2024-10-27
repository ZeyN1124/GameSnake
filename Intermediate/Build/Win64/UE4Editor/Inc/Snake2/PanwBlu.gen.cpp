// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Snake2/PanwBlu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePanwBlu() {}
// Cross Module References
	SNAKE2_API UClass* Z_Construct_UClass_APanwBlu_NoRegister();
	SNAKE2_API UClass* Z_Construct_UClass_APanwBlu();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Snake2();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	SNAKE2_API UClass* Z_Construct_UClass_ASnake_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void APanwBlu::StaticRegisterNativesAPanwBlu()
	{
	}
	UClass* Z_Construct_UClass_APanwBlu_NoRegister()
	{
		return APanwBlu::StaticClass();
	}
	struct Z_Construct_UClass_APanwBlu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnakeActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SnakeActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnakeActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SnakeActorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APanwBlu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Snake2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APanwBlu_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PanwBlu.h" },
		{ "ModuleRelativePath", "PanwBlu.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APanwBlu_Statics::NewProp_PawnCamera_MetaData[] = {
		{ "Category", "PanwBlu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PanwBlu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APanwBlu_Statics::NewProp_PawnCamera = { "PawnCamera", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APanwBlu, PawnCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APanwBlu_Statics::NewProp_PawnCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APanwBlu_Statics::NewProp_PawnCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APanwBlu_Statics::NewProp_SnakeActor_MetaData[] = {
		{ "Category", "PanwBlu" },
		{ "ModuleRelativePath", "PanwBlu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APanwBlu_Statics::NewProp_SnakeActor = { "SnakeActor", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APanwBlu, SnakeActor), Z_Construct_UClass_ASnake_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APanwBlu_Statics::NewProp_SnakeActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APanwBlu_Statics::NewProp_SnakeActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APanwBlu_Statics::NewProp_SnakeActorClass_MetaData[] = {
		{ "Category", "PanwBlu" },
		{ "ModuleRelativePath", "PanwBlu.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APanwBlu_Statics::NewProp_SnakeActorClass = { "SnakeActorClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APanwBlu, SnakeActorClass), Z_Construct_UClass_ASnake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APanwBlu_Statics::NewProp_SnakeActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APanwBlu_Statics::NewProp_SnakeActorClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APanwBlu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APanwBlu_Statics::NewProp_PawnCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APanwBlu_Statics::NewProp_SnakeActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APanwBlu_Statics::NewProp_SnakeActorClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APanwBlu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APanwBlu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APanwBlu_Statics::ClassParams = {
		&APanwBlu::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APanwBlu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APanwBlu_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APanwBlu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APanwBlu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APanwBlu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APanwBlu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APanwBlu, 1504053281);
	template<> SNAKE2_API UClass* StaticClass<APanwBlu>()
	{
		return APanwBlu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APanwBlu(Z_Construct_UClass_APanwBlu, &APanwBlu::StaticClass, TEXT("/Script/Snake2"), TEXT("APanwBlu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APanwBlu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
