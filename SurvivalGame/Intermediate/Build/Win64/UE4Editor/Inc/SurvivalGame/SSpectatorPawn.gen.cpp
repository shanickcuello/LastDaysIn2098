// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/Public/Player/SSpectatorPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSpectatorPawn() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASSpectatorPawn_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASSpectatorPawn();
	ENGINE_API UClass* Z_Construct_UClass_ASpectatorPawn();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
// End Cross Module References
	void ASSpectatorPawn::StaticRegisterNativesASSpectatorPawn()
	{
	}
	UClass* Z_Construct_UClass_ASSpectatorPawn_NoRegister()
	{
		return ASSpectatorPawn::StaticClass();
	}
	struct Z_Construct_UClass_ASSpectatorPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASSpectatorPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASpectatorPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASSpectatorPawn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/SSpectatorPawn.h" },
		{ "ModuleRelativePath", "Public/Player/SSpectatorPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASSpectatorPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASSpectatorPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASSpectatorPawn_Statics::ClassParams = {
		&ASSpectatorPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASSpectatorPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASSpectatorPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASSpectatorPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASSpectatorPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASSpectatorPawn, 4121903628);
	template<> SURVIVALGAME_API UClass* StaticClass<ASSpectatorPawn>()
	{
		return ASSpectatorPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASSpectatorPawn(Z_Construct_UClass_ASSpectatorPawn, &ASSpectatorPawn::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASSpectatorPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASSpectatorPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
