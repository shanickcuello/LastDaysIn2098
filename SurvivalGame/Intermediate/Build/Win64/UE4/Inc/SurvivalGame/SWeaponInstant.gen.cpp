// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/Public/Items/SWeaponInstant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSWeaponInstant() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASWeaponInstant_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASWeaponInstant();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASWeapon();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASImpactEffect_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASWeaponInstant::execOnRep_HitLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_HitLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASWeaponInstant::execServerNotifyMiss)
	{
		P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_ShootDir);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerNotifyMiss_Validate(Z_Param_ShootDir))
		{
			RPC_ValidateFailed(TEXT("ServerNotifyMiss_Validate"));
			return;
		}
		P_THIS->ServerNotifyMiss_Implementation(Z_Param_ShootDir);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASWeaponInstant::execServerNotifyHit)
	{
		P_GET_STRUCT(FHitResult,Z_Param_Impact);
		P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_ShootDir);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerNotifyHit_Validate(Z_Param_Impact,Z_Param_ShootDir))
		{
			RPC_ValidateFailed(TEXT("ServerNotifyHit_Validate"));
			return;
		}
		P_THIS->ServerNotifyHit_Implementation(Z_Param_Impact,Z_Param_ShootDir);
		P_NATIVE_END;
	}
	static FName NAME_ASWeaponInstant_ServerNotifyHit = FName(TEXT("ServerNotifyHit"));
	void ASWeaponInstant::ServerNotifyHit(const FHitResult Impact, FVector_NetQuantizeNormal ShootDir)
	{
		SWeaponInstant_eventServerNotifyHit_Parms Parms;
		Parms.Impact=Impact;
		Parms.ShootDir=ShootDir;
		ProcessEvent(FindFunctionChecked(NAME_ASWeaponInstant_ServerNotifyHit),&Parms);
	}
	static FName NAME_ASWeaponInstant_ServerNotifyMiss = FName(TEXT("ServerNotifyMiss"));
	void ASWeaponInstant::ServerNotifyMiss(FVector_NetQuantizeNormal ShootDir)
	{
		SWeaponInstant_eventServerNotifyMiss_Parms Parms;
		Parms.ShootDir=ShootDir;
		ProcessEvent(FindFunctionChecked(NAME_ASWeaponInstant_ServerNotifyMiss),&Parms);
	}
	void ASWeaponInstant::StaticRegisterNativesASWeaponInstant()
	{
		UClass* Class = ASWeaponInstant::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_HitLocation", &ASWeaponInstant::execOnRep_HitLocation },
			{ "ServerNotifyHit", &ASWeaponInstant::execServerNotifyHit },
			{ "ServerNotifyMiss", &ASWeaponInstant::execServerNotifyMiss },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASWeaponInstant_OnRep_HitLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASWeaponInstant_OnRep_HitLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/SWeaponInstant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASWeaponInstant_OnRep_HitLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASWeaponInstant, nullptr, "OnRep_HitLocation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASWeaponInstant_OnRep_HitLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASWeaponInstant_OnRep_HitLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASWeaponInstant_OnRep_HitLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASWeaponInstant_OnRep_HitLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASWeaponInstant_ServerNotifyHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Impact_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Impact;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShootDir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASWeaponInstant_ServerNotifyHit_Statics::NewProp_Impact_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASWeaponInstant_ServerNotifyHit_Statics::NewProp_Impact = { "Impact", nullptr, (EPropertyFlags)0x0010008000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SWeaponInstant_eventServerNotifyHit_Parms, Impact), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASWeaponInstant_ServerNotifyHit_Statics::NewProp_Impact_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASWeaponInstant_ServerNotifyHit_Statics::NewProp_Impact_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASWeaponInstant_ServerNotifyHit_Statics::NewProp_ShootDir = { "ShootDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SWeaponInstant_eventServerNotifyHit_Parms, ShootDir), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASWeaponInstant_ServerNotifyHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASWeaponInstant_ServerNotifyHit_Statics::NewProp_Impact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASWeaponInstant_ServerNotifyHit_Statics::NewProp_ShootDir,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASWeaponInstant_ServerNotifyHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/SWeaponInstant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASWeaponInstant_ServerNotifyHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASWeaponInstant, nullptr, "ServerNotifyHit", nullptr, nullptr, sizeof(SWeaponInstant_eventServerNotifyHit_Parms), Z_Construct_UFunction_ASWeaponInstant_ServerNotifyHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASWeaponInstant_ServerNotifyHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASWeaponInstant_ServerNotifyHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASWeaponInstant_ServerNotifyHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASWeaponInstant_ServerNotifyHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASWeaponInstant_ServerNotifyHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASWeaponInstant_ServerNotifyMiss_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShootDir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASWeaponInstant_ServerNotifyMiss_Statics::NewProp_ShootDir = { "ShootDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SWeaponInstant_eventServerNotifyMiss_Parms, ShootDir), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASWeaponInstant_ServerNotifyMiss_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASWeaponInstant_ServerNotifyMiss_Statics::NewProp_ShootDir,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASWeaponInstant_ServerNotifyMiss_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/SWeaponInstant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASWeaponInstant_ServerNotifyMiss_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASWeaponInstant, nullptr, "ServerNotifyMiss", nullptr, nullptr, sizeof(SWeaponInstant_eventServerNotifyMiss_Parms), Z_Construct_UFunction_ASWeaponInstant_ServerNotifyMiss_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASWeaponInstant_ServerNotifyMiss_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASWeaponInstant_ServerNotifyMiss_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASWeaponInstant_ServerNotifyMiss_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASWeaponInstant_ServerNotifyMiss()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASWeaponInstant_ServerNotifyMiss_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASWeaponInstant_NoRegister()
	{
		return ASWeaponInstant::StaticClass();
	}
	struct Z_Construct_UClass_ASWeaponInstant_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ImpactTemplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailTargetParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TrailTargetParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrailFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TracerFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TracerFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumProjectileSpawnDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumProjectileSpawnDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TracerRoundInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TracerRoundInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitImpactNotify_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitImpactNotify;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedViewDotHitDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AllowedViewDotHitDir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientSideHitLeeway_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClientSideHitLeeway;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASWeaponInstant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASWeaponInstant_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASWeaponInstant_OnRep_HitLocation, "OnRep_HitLocation" }, // 4206240095
		{ &Z_Construct_UFunction_ASWeaponInstant_ServerNotifyHit, "ServerNotifyHit" }, // 1330312741
		{ &Z_Construct_UFunction_ASWeaponInstant_ServerNotifyMiss, "ServerNotifyMiss" }, // 93935292
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeaponInstant_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/SWeaponInstant.h" },
		{ "ModuleRelativePath", "Public/Items/SWeaponInstant.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_ImpactTemplate_MetaData[] = {
		{ "Category", "SWeaponInstant" },
		{ "Comment", "/* Particle FX played when a surface is hit. */" },
		{ "ModuleRelativePath", "Public/Items/SWeaponInstant.h" },
		{ "ToolTip", "Particle FX played when a surface is hit." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_ImpactTemplate = { "ImpactTemplate", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeaponInstant, ImpactTemplate), Z_Construct_UClass_ASImpactEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_ImpactTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_ImpactTemplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_TrailTargetParam_MetaData[] = {
		{ "Category", "SWeaponInstant" },
		{ "ModuleRelativePath", "Public/Items/SWeaponInstant.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_TrailTargetParam = { "TrailTargetParam", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeaponInstant, TrailTargetParam), METADATA_PARAMS(Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_TrailTargetParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_TrailTargetParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_TrailFX_MetaData[] = {
		{ "Category", "SWeaponInstant" },
		{ "ModuleRelativePath", "Public/Items/SWeaponInstant.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_TrailFX = { "TrailFX", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeaponInstant, TrailFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_TrailFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_TrailFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_TracerFX_MetaData[] = {
		{ "Category", "SWeaponInstant" },
		{ "ModuleRelativePath", "Public/Items/SWeaponInstant.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_TracerFX = { "TracerFX", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeaponInstant, TracerFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_TracerFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_TracerFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_MinimumProjectileSpawnDistance_MetaData[] = {
		{ "Category", "SWeaponInstant" },
		{ "Comment", "/* Minimum firing distance before spawning tracers or trails. */" },
		{ "ModuleRelativePath", "Public/Items/SWeaponInstant.h" },
		{ "ToolTip", "Minimum firing distance before spawning tracers or trails." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_MinimumProjectileSpawnDistance = { "MinimumProjectileSpawnDistance", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeaponInstant, MinimumProjectileSpawnDistance), METADATA_PARAMS(Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_MinimumProjectileSpawnDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_MinimumProjectileSpawnDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_TracerRoundInterval_MetaData[] = {
		{ "Category", "SWeaponInstant" },
		{ "ModuleRelativePath", "Public/Items/SWeaponInstant.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_TracerRoundInterval = { "TracerRoundInterval", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeaponInstant, TracerRoundInterval), METADATA_PARAMS(Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_TracerRoundInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_TracerRoundInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_HitImpactNotify_MetaData[] = {
		{ "ModuleRelativePath", "Public/Items/SWeaponInstant.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_HitImpactNotify = { "HitImpactNotify", "OnRep_HitLocation", (EPropertyFlags)0x0020080100002020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeaponInstant, HitImpactNotify), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_HitImpactNotify_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_HitImpactNotify_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_HitDamage_MetaData[] = {
		{ "Category", "SWeaponInstant" },
		{ "Comment", "/************************************************************************/" },
		{ "ModuleRelativePath", "Public/Items/SWeaponInstant.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_HitDamage = { "HitDamage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeaponInstant, HitDamage), METADATA_PARAMS(Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_HitDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_HitDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "SWeaponInstant" },
		{ "ModuleRelativePath", "Public/Items/SWeaponInstant.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeaponInstant, DamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_DamageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_WeaponRange_MetaData[] = {
		{ "Category", "SWeaponInstant" },
		{ "ModuleRelativePath", "Public/Items/SWeaponInstant.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_WeaponRange = { "WeaponRange", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeaponInstant, WeaponRange), METADATA_PARAMS(Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_WeaponRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_WeaponRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_AllowedViewDotHitDir_MetaData[] = {
		{ "Category", "SWeaponInstant" },
		{ "Comment", "/* Hit verification: threshold for dot product between view direction and hit direction */" },
		{ "ModuleRelativePath", "Public/Items/SWeaponInstant.h" },
		{ "ToolTip", "Hit verification: threshold for dot product between view direction and hit direction" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_AllowedViewDotHitDir = { "AllowedViewDotHitDir", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeaponInstant, AllowedViewDotHitDir), METADATA_PARAMS(Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_AllowedViewDotHitDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_AllowedViewDotHitDir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_ClientSideHitLeeway_MetaData[] = {
		{ "Category", "SWeaponInstant" },
		{ "Comment", "/* Hit verification: scale for bounding box of hit actor */" },
		{ "ModuleRelativePath", "Public/Items/SWeaponInstant.h" },
		{ "ToolTip", "Hit verification: scale for bounding box of hit actor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_ClientSideHitLeeway = { "ClientSideHitLeeway", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeaponInstant, ClientSideHitLeeway), METADATA_PARAMS(Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_ClientSideHitLeeway_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_ClientSideHitLeeway_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASWeaponInstant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_ImpactTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_TrailTargetParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_TrailFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_TracerFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_MinimumProjectileSpawnDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_TracerRoundInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_HitImpactNotify,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_HitDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_WeaponRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_AllowedViewDotHitDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeaponInstant_Statics::NewProp_ClientSideHitLeeway,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASWeaponInstant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASWeaponInstant>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASWeaponInstant_Statics::ClassParams = {
		&ASWeaponInstant::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASWeaponInstant_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASWeaponInstant_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASWeaponInstant_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeaponInstant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASWeaponInstant()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASWeaponInstant_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASWeaponInstant, 3441966103);
	template<> SURVIVALGAME_API UClass* StaticClass<ASWeaponInstant>()
	{
		return ASWeaponInstant::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASWeaponInstant(Z_Construct_UClass_ASWeaponInstant, &ASWeaponInstant::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASWeaponInstant"), false, nullptr, nullptr, nullptr);

	void ASWeaponInstant::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_HitImpactNotify(TEXT("HitImpactNotify"));

		const bool bIsValid = true
			&& Name_HitImpactNotify == ClassReps[(int32)ENetFields_Private::HitImpactNotify].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASWeaponInstant"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASWeaponInstant);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
