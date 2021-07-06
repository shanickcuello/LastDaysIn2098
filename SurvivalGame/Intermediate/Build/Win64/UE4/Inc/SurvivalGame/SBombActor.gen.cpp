// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/Public/Items/SBombActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBombActor() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASBombActor_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASBombActor();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASUsableActor();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBombActor::execSimulateExplosion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SimulateExplosion_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBombActor::execSimulateFuzeFX)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SimulateFuzeFX_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ASBombActor_K2_SimulateExplosion = FName(TEXT("K2_SimulateExplosion"));
	void ASBombActor::K2_SimulateExplosion()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBombActor_K2_SimulateExplosion),NULL);
	}
	static FName NAME_ASBombActor_SimulateExplosion = FName(TEXT("SimulateExplosion"));
	void ASBombActor::SimulateExplosion()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBombActor_SimulateExplosion),NULL);
	}
	static FName NAME_ASBombActor_SimulateFuzeFX = FName(TEXT("SimulateFuzeFX"));
	void ASBombActor::SimulateFuzeFX()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBombActor_SimulateFuzeFX),NULL);
	}
	void ASBombActor::StaticRegisterNativesASBombActor()
	{
		UClass* Class = ASBombActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SimulateExplosion", &ASBombActor::execSimulateExplosion },
			{ "SimulateFuzeFX", &ASBombActor::execSimulateFuzeFX },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBombActor_K2_SimulateExplosion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBombActor_K2_SimulateExplosion_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Blueprint function */" },
		{ "ModuleRelativePath", "Public/Items/SBombActor.h" },
		{ "ToolTip", "Blueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBombActor_K2_SimulateExplosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBombActor, nullptr, "K2_SimulateExplosion", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBombActor_K2_SimulateExplosion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBombActor_K2_SimulateExplosion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBombActor_K2_SimulateExplosion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBombActor_K2_SimulateExplosion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBombActor_SimulateExplosion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBombActor_SimulateExplosion_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Note: Marked unreliable as its non-gameplay VFX only */" },
		{ "ModuleRelativePath", "Public/Items/SBombActor.h" },
		{ "ToolTip", "Note: Marked unreliable as its non-gameplay VFX only" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBombActor_SimulateExplosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBombActor, nullptr, "SimulateExplosion", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBombActor_SimulateExplosion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBombActor_SimulateExplosion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBombActor_SimulateExplosion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBombActor_SimulateExplosion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBombActor_SimulateFuzeFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBombActor_SimulateFuzeFX_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Note: Marked unreliable as its non-gameplay VFX only */" },
		{ "ModuleRelativePath", "Public/Items/SBombActor.h" },
		{ "ToolTip", "Note: Marked unreliable as its non-gameplay VFX only" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBombActor_SimulateFuzeFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBombActor, nullptr, "SimulateFuzeFX", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBombActor_SimulateFuzeFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBombActor_SimulateFuzeFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBombActor_SimulateFuzeFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBombActor_SimulateFuzeFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBombActor_NoRegister()
	{
		return ASBombActor::StaticClass();
	}
	struct Z_Construct_UClass_ASBombActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionPCS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionPCS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FuzePCS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FuzePCS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FuzeFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FuzeFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FuzeSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FuzeSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFuzeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFuzeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBombActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASUsableActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBombActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBombActor_K2_SimulateExplosion, "K2_SimulateExplosion" }, // 2656456914
		{ &Z_Construct_UFunction_ASBombActor_SimulateExplosion, "SimulateExplosion" }, // 2754935181
		{ &Z_Construct_UFunction_ASBombActor_SimulateFuzeFX, "SimulateFuzeFX" }, // 80203367
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBombActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/SBombActor.h" },
		{ "ModuleRelativePath", "Public/Items/SBombActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBombActor_Statics::NewProp_ExplosionPCS_MetaData[] = {
		{ "Category", "SBombActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/SBombActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBombActor_Statics::NewProp_ExplosionPCS = { "ExplosionPCS", nullptr, (EPropertyFlags)0x00200800000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBombActor, ExplosionPCS), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBombActor_Statics::NewProp_ExplosionPCS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBombActor_Statics::NewProp_ExplosionPCS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBombActor_Statics::NewProp_FuzePCS_MetaData[] = {
		{ "Category", "SBombActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/SBombActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBombActor_Statics::NewProp_FuzePCS = { "FuzePCS", nullptr, (EPropertyFlags)0x00200800000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBombActor, FuzePCS), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBombActor_Statics::NewProp_FuzePCS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBombActor_Statics::NewProp_FuzePCS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBombActor_Statics::NewProp_AudioComp_MetaData[] = {
		{ "Category", "SBombActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/SBombActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBombActor_Statics::NewProp_AudioComp = { "AudioComp", nullptr, (EPropertyFlags)0x00200800000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBombActor, AudioComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBombActor_Statics::NewProp_AudioComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBombActor_Statics::NewProp_AudioComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBombActor_Statics::NewProp_ExplosionFX_MetaData[] = {
		{ "Category", "Bomb|Effects" },
		{ "ModuleRelativePath", "Public/Items/SBombActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBombActor_Statics::NewProp_ExplosionFX = { "ExplosionFX", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBombActor, ExplosionFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBombActor_Statics::NewProp_ExplosionFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBombActor_Statics::NewProp_ExplosionFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBombActor_Statics::NewProp_FuzeFX_MetaData[] = {
		{ "Category", "Bomb|Effects" },
		{ "ModuleRelativePath", "Public/Items/SBombActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBombActor_Statics::NewProp_FuzeFX = { "FuzeFX", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBombActor, FuzeFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBombActor_Statics::NewProp_FuzeFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBombActor_Statics::NewProp_FuzeFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBombActor_Statics::NewProp_ExplosionSound_MetaData[] = {
		{ "Category", "Bomb|Effects" },
		{ "ModuleRelativePath", "Public/Items/SBombActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBombActor_Statics::NewProp_ExplosionSound = { "ExplosionSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBombActor, ExplosionSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBombActor_Statics::NewProp_ExplosionSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBombActor_Statics::NewProp_ExplosionSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBombActor_Statics::NewProp_FuzeSound_MetaData[] = {
		{ "Category", "Bomb|Effects" },
		{ "ModuleRelativePath", "Public/Items/SBombActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBombActor_Statics::NewProp_FuzeSound = { "FuzeSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBombActor, FuzeSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBombActor_Statics::NewProp_FuzeSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBombActor_Statics::NewProp_FuzeSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBombActor_Statics::NewProp_MaxFuzeTime_MetaData[] = {
		{ "Category", "Bomb|Settings" },
		{ "Comment", "/* Initial time on the fuze */" },
		{ "ModuleRelativePath", "Public/Items/SBombActor.h" },
		{ "ToolTip", "Initial time on the fuze" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBombActor_Statics::NewProp_MaxFuzeTime = { "MaxFuzeTime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBombActor, MaxFuzeTime), METADATA_PARAMS(Z_Construct_UClass_ASBombActor_Statics::NewProp_MaxFuzeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBombActor_Statics::NewProp_MaxFuzeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBombActor_Statics::NewProp_ExplosionDamage_MetaData[] = {
		{ "Category", "Bomb|Settings" },
		{ "ModuleRelativePath", "Public/Items/SBombActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBombActor_Statics::NewProp_ExplosionDamage = { "ExplosionDamage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBombActor, ExplosionDamage), METADATA_PARAMS(Z_Construct_UClass_ASBombActor_Statics::NewProp_ExplosionDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBombActor_Statics::NewProp_ExplosionDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBombActor_Statics::NewProp_ExplosionRadius_MetaData[] = {
		{ "Category", "Bomb|Settings" },
		{ "ModuleRelativePath", "Public/Items/SBombActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBombActor_Statics::NewProp_ExplosionRadius = { "ExplosionRadius", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBombActor, ExplosionRadius), METADATA_PARAMS(Z_Construct_UClass_ASBombActor_Statics::NewProp_ExplosionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBombActor_Statics::NewProp_ExplosionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBombActor_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "Bomb|Settings" },
		{ "ModuleRelativePath", "Public/Items/SBombActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBombActor_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBombActor, DamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBombActor_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBombActor_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBombActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBombActor_Statics::NewProp_ExplosionPCS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBombActor_Statics::NewProp_FuzePCS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBombActor_Statics::NewProp_AudioComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBombActor_Statics::NewProp_ExplosionFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBombActor_Statics::NewProp_FuzeFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBombActor_Statics::NewProp_ExplosionSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBombActor_Statics::NewProp_FuzeSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBombActor_Statics::NewProp_MaxFuzeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBombActor_Statics::NewProp_ExplosionDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBombActor_Statics::NewProp_ExplosionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBombActor_Statics::NewProp_DamageType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBombActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBombActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBombActor_Statics::ClassParams = {
		&ASBombActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBombActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBombActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBombActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBombActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBombActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBombActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBombActor, 1055557724);
	template<> SURVIVALGAME_API UClass* StaticClass<ASBombActor>()
	{
		return ASBombActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBombActor(Z_Construct_UClass_ASBombActor, &ASBombActor::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASBombActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBombActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
