// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/Public/Player/SPlayerCameraManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPlayerCameraManager() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASPlayerCameraManager_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASPlayerCameraManager();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
// End Cross Module References
	void ASPlayerCameraManager::StaticRegisterNativesASPlayerCameraManager()
	{
	}
	UClass* Z_Construct_UClass_ASPlayerCameraManager_NoRegister()
	{
		return ASPlayerCameraManager::StaticClass();
	}
	struct Z_Construct_UClass_ASPlayerCameraManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASPlayerCameraManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPlayerCameraManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Player/SPlayerCameraManager.h" },
		{ "ModuleRelativePath", "Public/Player/SPlayerCameraManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASPlayerCameraManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPlayerCameraManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASPlayerCameraManager_Statics::ClassParams = {
		&ASPlayerCameraManager::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASPlayerCameraManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerCameraManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASPlayerCameraManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASPlayerCameraManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASPlayerCameraManager, 950424966);
	template<> SURVIVALGAME_API UClass* StaticClass<ASPlayerCameraManager>()
	{
		return ASPlayerCameraManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASPlayerCameraManager(Z_Construct_UClass_ASPlayerCameraManager, &ASPlayerCameraManager::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASPlayerCameraManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPlayerCameraManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
