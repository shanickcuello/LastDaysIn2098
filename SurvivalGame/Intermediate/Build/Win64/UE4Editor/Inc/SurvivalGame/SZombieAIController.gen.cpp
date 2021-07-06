// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/Public/AI/SZombieAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSZombieAIController() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASZombieAIController_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASZombieAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
// End Cross Module References
	void ASZombieAIController::StaticRegisterNativesASZombieAIController()
	{
	}
	UClass* Z_Construct_UClass_ASZombieAIController_NoRegister()
	{
		return ASZombieAIController::StaticClass();
	}
	struct Z_Construct_UClass_ASZombieAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetEnemyKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetEnemyKeyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolLocationKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PatrolLocationKeyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWaypointKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurrentWaypointKeyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BotTypeKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BotTypeKeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASZombieAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASZombieAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AI/SZombieAIController.h" },
		{ "ModuleRelativePath", "Public/AI/SZombieAIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASZombieAIController_Statics::NewProp_TargetEnemyKeyName_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/SZombieAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASZombieAIController_Statics::NewProp_TargetEnemyKeyName = { "TargetEnemyKeyName", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASZombieAIController, TargetEnemyKeyName), METADATA_PARAMS(Z_Construct_UClass_ASZombieAIController_Statics::NewProp_TargetEnemyKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASZombieAIController_Statics::NewProp_TargetEnemyKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASZombieAIController_Statics::NewProp_PatrolLocationKeyName_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/SZombieAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASZombieAIController_Statics::NewProp_PatrolLocationKeyName = { "PatrolLocationKeyName", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASZombieAIController, PatrolLocationKeyName), METADATA_PARAMS(Z_Construct_UClass_ASZombieAIController_Statics::NewProp_PatrolLocationKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASZombieAIController_Statics::NewProp_PatrolLocationKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASZombieAIController_Statics::NewProp_CurrentWaypointKeyName_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/SZombieAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASZombieAIController_Statics::NewProp_CurrentWaypointKeyName = { "CurrentWaypointKeyName", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASZombieAIController, CurrentWaypointKeyName), METADATA_PARAMS(Z_Construct_UClass_ASZombieAIController_Statics::NewProp_CurrentWaypointKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASZombieAIController_Statics::NewProp_CurrentWaypointKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASZombieAIController_Statics::NewProp_BotTypeKeyName_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/SZombieAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASZombieAIController_Statics::NewProp_BotTypeKeyName = { "BotTypeKeyName", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASZombieAIController, BotTypeKeyName), METADATA_PARAMS(Z_Construct_UClass_ASZombieAIController_Statics::NewProp_BotTypeKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASZombieAIController_Statics::NewProp_BotTypeKeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASZombieAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASZombieAIController_Statics::NewProp_TargetEnemyKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASZombieAIController_Statics::NewProp_PatrolLocationKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASZombieAIController_Statics::NewProp_CurrentWaypointKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASZombieAIController_Statics::NewProp_BotTypeKeyName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASZombieAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASZombieAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASZombieAIController_Statics::ClassParams = {
		&ASZombieAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASZombieAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASZombieAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASZombieAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASZombieAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASZombieAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASZombieAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASZombieAIController, 2140799186);
	template<> SURVIVALGAME_API UClass* StaticClass<ASZombieAIController>()
	{
		return ASZombieAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASZombieAIController(Z_Construct_UClass_ASZombieAIController, &ASZombieAIController::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASZombieAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASZombieAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
