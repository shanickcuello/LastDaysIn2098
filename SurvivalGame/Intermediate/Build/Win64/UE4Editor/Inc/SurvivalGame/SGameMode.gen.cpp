// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/Public/World/SGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGameMode() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASGameMode_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ADirectionalLight_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASWeapon_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASMutator_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASGameMode::execCheckRelevance)
	{
		P_GET_OBJECT(AActor,Z_Param_Other);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckRelevance_Implementation(Z_Param_Other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASGameMode::execSpawnNewBot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnNewBot();
		P_NATIVE_END;
	}
	static FName NAME_ASGameMode_CheckRelevance = FName(TEXT("CheckRelevance"));
	bool ASGameMode::CheckRelevance(AActor* Other)
	{
		SGameMode_eventCheckRelevance_Parms Parms;
		Parms.Other=Other;
		ProcessEvent(FindFunctionChecked(NAME_ASGameMode_CheckRelevance),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ASGameMode_FindBotSpawnTransform = FName(TEXT("FindBotSpawnTransform"));
	bool ASGameMode::FindBotSpawnTransform(FTransform& Transform)
	{
		SGameMode_eventFindBotSpawnTransform_Parms Parms;
		Parms.Transform=Transform;
		ProcessEvent(FindFunctionChecked(NAME_ASGameMode_FindBotSpawnTransform),&Parms);
		Transform=Parms.Transform;
		return !!Parms.ReturnValue;
	}
	void ASGameMode::StaticRegisterNativesASGameMode()
	{
		UClass* Class = ASGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckRelevance", &ASGameMode::execCheckRelevance },
			{ "SpawnNewBot", &ASGameMode::execSpawnNewBot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASGameMode_CheckRelevance_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGameMode_CheckRelevance_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameMode_eventCheckRelevance_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASGameMode_CheckRelevance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SGameMode_eventCheckRelevance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGameMode_CheckRelevance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SGameMode_eventCheckRelevance_Parms), &Z_Construct_UFunction_ASGameMode_CheckRelevance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGameMode_CheckRelevance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameMode_CheckRelevance_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameMode_CheckRelevance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASGameMode_CheckRelevance_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** From UT Source: Used to modify, remove, and replace Actors. Return false to destroy the passed in Actor. Default implementation queries mutators.\n\x09* note that certain critical Actors such as PlayerControllers can't be destroyed, but we'll still call this code path to allow mutators\n\x09* to change properties on them\n\x09*/" },
		{ "ModuleRelativePath", "Public/World/SGameMode.h" },
		{ "ToolTip", "From UT Source: Used to modify, remove, and replace Actors. Return false to destroy the passed in Actor. Default implementation queries mutators.\nnote that certain critical Actors such as PlayerControllers can't be destroyed, but we'll still call this code path to allow mutators\nto change properties on them" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGameMode_CheckRelevance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASGameMode, nullptr, "CheckRelevance", nullptr, nullptr, sizeof(SGameMode_eventCheckRelevance_Parms), Z_Construct_UFunction_ASGameMode_CheckRelevance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameMode_CheckRelevance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASGameMode_CheckRelevance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameMode_CheckRelevance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASGameMode_CheckRelevance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASGameMode_CheckRelevance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASGameMode_FindBotSpawnTransform_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGameMode_FindBotSpawnTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameMode_eventFindBotSpawnTransform_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASGameMode_FindBotSpawnTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SGameMode_eventFindBotSpawnTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGameMode_FindBotSpawnTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SGameMode_eventFindBotSpawnTransform_Parms), &Z_Construct_UFunction_ASGameMode_FindBotSpawnTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGameMode_FindBotSpawnTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameMode_FindBotSpawnTransform_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameMode_FindBotSpawnTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASGameMode_FindBotSpawnTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameMode" },
		{ "Comment", "/* Blueprint hook to find a good spawn location for BOTS (Eg. via EQS queries) */" },
		{ "ModuleRelativePath", "Public/World/SGameMode.h" },
		{ "ToolTip", "Blueprint hook to find a good spawn location for BOTS (Eg. via EQS queries)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGameMode_FindBotSpawnTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASGameMode, nullptr, "FindBotSpawnTransform", nullptr, nullptr, sizeof(SGameMode_eventFindBotSpawnTransform_Parms), Z_Construct_UFunction_ASGameMode_FindBotSpawnTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameMode_FindBotSpawnTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C80800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASGameMode_FindBotSpawnTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameMode_FindBotSpawnTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASGameMode_FindBotSpawnTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASGameMode_FindBotSpawnTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASGameMode_SpawnNewBot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASGameMode_SpawnNewBot_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameMode" },
		{ "Comment", "/* (Exec only valid when testing in Singleplayer) */" },
		{ "ModuleRelativePath", "Public/World/SGameMode.h" },
		{ "ToolTip", "(Exec only valid when testing in Singleplayer)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGameMode_SpawnNewBot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASGameMode, nullptr, "SpawnNewBot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASGameMode_SpawnNewBot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameMode_SpawnNewBot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASGameMode_SpawnNewBot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASGameMode_SpawnNewBot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASGameMode_NoRegister()
	{
		return ASGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowFriendlyFireDamage_MetaData[];
#endif
		static void NewProp_bAllowFriendlyFireDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowFriendlyFireDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnZombiesAtNight_MetaData[];
#endif
		static void NewProp_bSpawnZombiesAtNight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnZombiesAtNight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPawnsInZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPawnsInZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BotPawnClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BotPawnClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimarySunLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrimarySunLight;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultInventoryClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultInventoryClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultInventoryClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MutatorClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MutatorClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MutatorClasses;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASGameMode_CheckRelevance, "CheckRelevance" }, // 1397445513
		{ &Z_Construct_UFunction_ASGameMode_FindBotSpawnTransform, "FindBotSpawnTransform" }, // 734625202
		{ &Z_Construct_UFunction_ASGameMode_SpawnNewBot, "SpawnNewBot" }, // 1554178885
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "World/SGameMode.h" },
		{ "ModuleRelativePath", "Public/World/SGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameMode_Statics::NewProp_bAllowFriendlyFireDamage_MetaData[] = {
		{ "Category", "Rules" },
		{ "Comment", "/* Can we deal damage to players in the same team */" },
		{ "ModuleRelativePath", "Public/World/SGameMode.h" },
		{ "ToolTip", "Can we deal damage to players in the same team" },
	};
#endif
	void Z_Construct_UClass_ASGameMode_Statics::NewProp_bAllowFriendlyFireDamage_SetBit(void* Obj)
	{
		((ASGameMode*)Obj)->bAllowFriendlyFireDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGameMode_Statics::NewProp_bAllowFriendlyFireDamage = { "bAllowFriendlyFireDamage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASGameMode), &Z_Construct_UClass_ASGameMode_Statics::NewProp_bAllowFriendlyFireDamage_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASGameMode_Statics::NewProp_bAllowFriendlyFireDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameMode_Statics::NewProp_bAllowFriendlyFireDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameMode_Statics::NewProp_bSpawnZombiesAtNight_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/* Allow zombie spawns to be disabled (for debugging) */" },
		{ "ModuleRelativePath", "Public/World/SGameMode.h" },
		{ "ToolTip", "Allow zombie spawns to be disabled (for debugging)" },
	};
#endif
	void Z_Construct_UClass_ASGameMode_Statics::NewProp_bSpawnZombiesAtNight_SetBit(void* Obj)
	{
		((ASGameMode*)Obj)->bSpawnZombiesAtNight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGameMode_Statics::NewProp_bSpawnZombiesAtNight = { "bSpawnZombiesAtNight", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASGameMode), &Z_Construct_UClass_ASGameMode_Statics::NewProp_bSpawnZombiesAtNight_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASGameMode_Statics::NewProp_bSpawnZombiesAtNight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameMode_Statics::NewProp_bSpawnZombiesAtNight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameMode_Statics::NewProp_MaxPawnsInZone_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/* Limit the amount of zombies to have at one point in the world (includes players) */" },
		{ "ModuleRelativePath", "Public/World/SGameMode.h" },
		{ "ToolTip", "Limit the amount of zombies to have at one point in the world (includes players)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASGameMode_Statics::NewProp_MaxPawnsInZone = { "MaxPawnsInZone", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASGameMode, MaxPawnsInZone), METADATA_PARAMS(Z_Construct_UClass_ASGameMode_Statics::NewProp_MaxPawnsInZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameMode_Statics::NewProp_MaxPawnsInZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameMode_Statics::NewProp_BotPawnClass_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/* The enemy pawn class */" },
		{ "ModuleRelativePath", "Public/World/SGameMode.h" },
		{ "ToolTip", "The enemy pawn class" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASGameMode_Statics::NewProp_BotPawnClass = { "BotPawnClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASGameMode, BotPawnClass), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASGameMode_Statics::NewProp_BotPawnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameMode_Statics::NewProp_BotPawnClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameMode_Statics::NewProp_PrimarySunLight_MetaData[] = {
		{ "Category", "DayNight" },
		{ "Comment", "/* Primary sun of the level. Assigned in Blueprint during BeginPlay (BlueprintReadWrite is required as tag instead of EditDefaultsOnly) */" },
		{ "ModuleRelativePath", "Public/World/SGameMode.h" },
		{ "ToolTip", "Primary sun of the level. Assigned in Blueprint during BeginPlay (BlueprintReadWrite is required as tag instead of EditDefaultsOnly)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGameMode_Statics::NewProp_PrimarySunLight = { "PrimarySunLight", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASGameMode, PrimarySunLight), Z_Construct_UClass_ADirectionalLight_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASGameMode_Statics::NewProp_PrimarySunLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameMode_Statics::NewProp_PrimarySunLight_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASGameMode_Statics::NewProp_DefaultInventoryClasses_Inner = { "DefaultInventoryClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameMode_Statics::NewProp_DefaultInventoryClasses_MetaData[] = {
		{ "Category", "Player" },
		{ "Comment", "/* The default weapons to spawn with */" },
		{ "ModuleRelativePath", "Public/World/SGameMode.h" },
		{ "ToolTip", "The default weapons to spawn with" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASGameMode_Statics::NewProp_DefaultInventoryClasses = { "DefaultInventoryClasses", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASGameMode, DefaultInventoryClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASGameMode_Statics::NewProp_DefaultInventoryClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameMode_Statics::NewProp_DefaultInventoryClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASGameMode_Statics::NewProp_MutatorClasses_Inner = { "MutatorClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASMutator_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameMode_Statics::NewProp_MutatorClasses_MetaData[] = {
		{ "Category", "Mutators" },
		{ "Comment", "/* Mutators to create when game starts */" },
		{ "ModuleRelativePath", "Public/World/SGameMode.h" },
		{ "ToolTip", "Mutators to create when game starts" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASGameMode_Statics::NewProp_MutatorClasses = { "MutatorClasses", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASGameMode, MutatorClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASGameMode_Statics::NewProp_MutatorClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameMode_Statics::NewProp_MutatorClasses_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameMode_Statics::NewProp_bAllowFriendlyFireDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameMode_Statics::NewProp_bSpawnZombiesAtNight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameMode_Statics::NewProp_MaxPawnsInZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameMode_Statics::NewProp_BotPawnClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameMode_Statics::NewProp_PrimarySunLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameMode_Statics::NewProp_DefaultInventoryClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameMode_Statics::NewProp_DefaultInventoryClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameMode_Statics::NewProp_MutatorClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameMode_Statics::NewProp_MutatorClasses,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASGameMode_Statics::ClassParams = {
		&ASGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASGameMode, 887538369);
	template<> SURVIVALGAME_API UClass* StaticClass<ASGameMode>()
	{
		return ASGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASGameMode(Z_Construct_UClass_ASGameMode, &ASGameMode::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
