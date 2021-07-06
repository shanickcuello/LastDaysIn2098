// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/Public/Items/SImpactEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSImpactEffect() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASImpactEffect_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASImpactEffect();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	void ASImpactEffect::StaticRegisterNativesASImpactEffect()
	{
	}
	UClass* Z_Construct_UClass_ASImpactEffect_NoRegister()
	{
		return ASImpactEffect::StaticClass();
	}
	struct Z_Construct_UClass_ASImpactEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerFleshFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerFleshFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZombieFleshFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZombieFleshFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerFleshSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerFleshSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZombieFleshSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZombieFleshSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DecalMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecalSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalLifeSpan_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecalLifeSpan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASImpactEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASImpactEffect_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Items/SImpactEffect.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Items/SImpactEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASImpactEffect_Statics::NewProp_DefaultFX_MetaData[] = {
		{ "Category", "SImpactEffect" },
		{ "Comment", "/* FX spawned on standard materials */" },
		{ "ModuleRelativePath", "Public/Items/SImpactEffect.h" },
		{ "ToolTip", "FX spawned on standard materials" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASImpactEffect_Statics::NewProp_DefaultFX = { "DefaultFX", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASImpactEffect, DefaultFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASImpactEffect_Statics::NewProp_DefaultFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASImpactEffect_Statics::NewProp_DefaultFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASImpactEffect_Statics::NewProp_PlayerFleshFX_MetaData[] = {
		{ "Category", "SImpactEffect" },
		{ "ModuleRelativePath", "Public/Items/SImpactEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASImpactEffect_Statics::NewProp_PlayerFleshFX = { "PlayerFleshFX", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASImpactEffect, PlayerFleshFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASImpactEffect_Statics::NewProp_PlayerFleshFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASImpactEffect_Statics::NewProp_PlayerFleshFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASImpactEffect_Statics::NewProp_ZombieFleshFX_MetaData[] = {
		{ "Category", "SImpactEffect" },
		{ "ModuleRelativePath", "Public/Items/SImpactEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASImpactEffect_Statics::NewProp_ZombieFleshFX = { "ZombieFleshFX", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASImpactEffect, ZombieFleshFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASImpactEffect_Statics::NewProp_ZombieFleshFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASImpactEffect_Statics::NewProp_ZombieFleshFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASImpactEffect_Statics::NewProp_DefaultSound_MetaData[] = {
		{ "Category", "SImpactEffect" },
		{ "ModuleRelativePath", "Public/Items/SImpactEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASImpactEffect_Statics::NewProp_DefaultSound = { "DefaultSound", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASImpactEffect, DefaultSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASImpactEffect_Statics::NewProp_DefaultSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASImpactEffect_Statics::NewProp_DefaultSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASImpactEffect_Statics::NewProp_PlayerFleshSound_MetaData[] = {
		{ "Category", "SImpactEffect" },
		{ "ModuleRelativePath", "Public/Items/SImpactEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASImpactEffect_Statics::NewProp_PlayerFleshSound = { "PlayerFleshSound", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASImpactEffect, PlayerFleshSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASImpactEffect_Statics::NewProp_PlayerFleshSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASImpactEffect_Statics::NewProp_PlayerFleshSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASImpactEffect_Statics::NewProp_ZombieFleshSound_MetaData[] = {
		{ "Category", "SImpactEffect" },
		{ "ModuleRelativePath", "Public/Items/SImpactEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASImpactEffect_Statics::NewProp_ZombieFleshSound = { "ZombieFleshSound", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASImpactEffect, ZombieFleshSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASImpactEffect_Statics::NewProp_ZombieFleshSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASImpactEffect_Statics::NewProp_ZombieFleshSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASImpactEffect_Statics::NewProp_DecalMaterial_MetaData[] = {
		{ "Category", "Decal" },
		{ "ModuleRelativePath", "Public/Items/SImpactEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASImpactEffect_Statics::NewProp_DecalMaterial = { "DecalMaterial", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASImpactEffect, DecalMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASImpactEffect_Statics::NewProp_DecalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASImpactEffect_Statics::NewProp_DecalMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASImpactEffect_Statics::NewProp_DecalSize_MetaData[] = {
		{ "Category", "Decal" },
		{ "ModuleRelativePath", "Public/Items/SImpactEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASImpactEffect_Statics::NewProp_DecalSize = { "DecalSize", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASImpactEffect, DecalSize), METADATA_PARAMS(Z_Construct_UClass_ASImpactEffect_Statics::NewProp_DecalSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASImpactEffect_Statics::NewProp_DecalSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASImpactEffect_Statics::NewProp_DecalLifeSpan_MetaData[] = {
		{ "Category", "Decal" },
		{ "ModuleRelativePath", "Public/Items/SImpactEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASImpactEffect_Statics::NewProp_DecalLifeSpan = { "DecalLifeSpan", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASImpactEffect, DecalLifeSpan), METADATA_PARAMS(Z_Construct_UClass_ASImpactEffect_Statics::NewProp_DecalLifeSpan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASImpactEffect_Statics::NewProp_DecalLifeSpan_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASImpactEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASImpactEffect_Statics::NewProp_DefaultFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASImpactEffect_Statics::NewProp_PlayerFleshFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASImpactEffect_Statics::NewProp_ZombieFleshFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASImpactEffect_Statics::NewProp_DefaultSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASImpactEffect_Statics::NewProp_PlayerFleshSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASImpactEffect_Statics::NewProp_ZombieFleshSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASImpactEffect_Statics::NewProp_DecalMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASImpactEffect_Statics::NewProp_DecalSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASImpactEffect_Statics::NewProp_DecalLifeSpan,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASImpactEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASImpactEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASImpactEffect_Statics::ClassParams = {
		&ASImpactEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASImpactEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASImpactEffect_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASImpactEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASImpactEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASImpactEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASImpactEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASImpactEffect, 532831543);
	template<> SURVIVALGAME_API UClass* StaticClass<ASImpactEffect>()
	{
		return ASImpactEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASImpactEffect(Z_Construct_UClass_ASImpactEffect, &ASImpactEffect::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASImpactEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASImpactEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
