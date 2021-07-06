// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/Public/World/SCoopGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCoopGameMode() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASCoopGameMode_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASCoopGameMode();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASGameMode();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
// End Cross Module References
	void ASCoopGameMode::StaticRegisterNativesASCoopGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASCoopGameMode_NoRegister()
	{
		return ASCoopGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASCoopGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnAtTeamPlayer_MetaData[];
#endif
		static void NewProp_bSpawnAtTeamPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnAtTeamPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreNightSurvived_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScoreNightSurvived;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASCoopGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCoopGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "World/SCoopGameMode.h" },
		{ "ModuleRelativePath", "Public/World/SCoopGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCoopGameMode_Statics::NewProp_bSpawnAtTeamPlayer_MetaData[] = {
		{ "Category", "Rules" },
		{ "Comment", "/* Spawn at team player if any are alive */" },
		{ "ModuleRelativePath", "Public/World/SCoopGameMode.h" },
		{ "ToolTip", "Spawn at team player if any are alive" },
	};
#endif
	void Z_Construct_UClass_ASCoopGameMode_Statics::NewProp_bSpawnAtTeamPlayer_SetBit(void* Obj)
	{
		((ASCoopGameMode*)Obj)->bSpawnAtTeamPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCoopGameMode_Statics::NewProp_bSpawnAtTeamPlayer = { "bSpawnAtTeamPlayer", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASCoopGameMode), &Z_Construct_UClass_ASCoopGameMode_Statics::NewProp_bSpawnAtTeamPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASCoopGameMode_Statics::NewProp_bSpawnAtTeamPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCoopGameMode_Statics::NewProp_bSpawnAtTeamPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCoopGameMode_Statics::NewProp_ScoreNightSurvived_MetaData[] = {
		{ "Category", "Scoring" },
		{ "Comment", "/* Points awarded for surviving a night */" },
		{ "ModuleRelativePath", "Public/World/SCoopGameMode.h" },
		{ "ToolTip", "Points awarded for surviving a night" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASCoopGameMode_Statics::NewProp_ScoreNightSurvived = { "ScoreNightSurvived", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCoopGameMode, ScoreNightSurvived), METADATA_PARAMS(Z_Construct_UClass_ASCoopGameMode_Statics::NewProp_ScoreNightSurvived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCoopGameMode_Statics::NewProp_ScoreNightSurvived_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASCoopGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCoopGameMode_Statics::NewProp_bSpawnAtTeamPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCoopGameMode_Statics::NewProp_ScoreNightSurvived,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASCoopGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASCoopGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASCoopGameMode_Statics::ClassParams = {
		&ASCoopGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASCoopGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASCoopGameMode_Statics::PropPointers),
		0,
		0x009002ADu,
		METADATA_PARAMS(Z_Construct_UClass_ASCoopGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASCoopGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASCoopGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASCoopGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASCoopGameMode, 1817216746);
	template<> SURVIVALGAME_API UClass* StaticClass<ASCoopGameMode>()
	{
		return ASCoopGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASCoopGameMode(Z_Construct_UClass_ASCoopGameMode, &ASCoopGameMode::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASCoopGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASCoopGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
