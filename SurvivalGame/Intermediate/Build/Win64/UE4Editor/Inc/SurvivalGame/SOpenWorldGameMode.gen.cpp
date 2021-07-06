// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/Public/World/SOpenWorldGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSOpenWorldGameMode() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASOpenWorldGameMode_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASOpenWorldGameMode();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASGameMode();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
// End Cross Module References
	void ASOpenWorldGameMode::StaticRegisterNativesASOpenWorldGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASOpenWorldGameMode_NoRegister()
	{
		return ASOpenWorldGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASOpenWorldGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASOpenWorldGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOpenWorldGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "World/SOpenWorldGameMode.h" },
		{ "ModuleRelativePath", "Public/World/SOpenWorldGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASOpenWorldGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASOpenWorldGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASOpenWorldGameMode_Statics::ClassParams = {
		&ASOpenWorldGameMode::StaticClass,
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
		0x009002ADu,
		METADATA_PARAMS(Z_Construct_UClass_ASOpenWorldGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASOpenWorldGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASOpenWorldGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASOpenWorldGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASOpenWorldGameMode, 4090192276);
	template<> SURVIVALGAME_API UClass* StaticClass<ASOpenWorldGameMode>()
	{
		return ASOpenWorldGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASOpenWorldGameMode(Z_Construct_UClass_ASOpenWorldGameMode, &ASOpenWorldGameMode::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASOpenWorldGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASOpenWorldGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
