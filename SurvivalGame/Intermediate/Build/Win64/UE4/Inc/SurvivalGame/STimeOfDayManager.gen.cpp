// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/Public/World/STimeOfDayManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTimeOfDayManager() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASTimeOfDayManager_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASTimeOfDayManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ADirectionalLight_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ASkyLight_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
// End Cross Module References
	void ASTimeOfDayManager::StaticRegisterNativesASTimeOfDayManager()
	{
	}
	UClass* Z_Construct_UClass_ASTimeOfDayManager_NoRegister()
	{
		return ASTimeOfDayManager::StaticClass();
	}
	struct Z_Construct_UClass_ASTimeOfDayManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkylightIntensityCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkylightIntensityCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkylightColorCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkylightColorCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientAudioComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AmbientAudioComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimarySunLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrimarySunLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkyLightActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkyLightActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundNightStarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundNightStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundNightEnded_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundNightEnded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientDaytime_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AmbientDaytime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientNight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AmbientNight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTimeOfDayManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTimeOfDayManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "World/STimeOfDayManager.h" },
		{ "ModuleRelativePath", "Public/World/STimeOfDayManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_SkylightIntensityCurve_MetaData[] = {
		{ "Category", "DayNight" },
		{ "Comment", "/* Maps intensity to time of day */" },
		{ "ModuleRelativePath", "Public/World/STimeOfDayManager.h" },
		{ "ToolTip", "Maps intensity to time of day" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_SkylightIntensityCurve = { "SkylightIntensityCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTimeOfDayManager, SkylightIntensityCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_SkylightIntensityCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_SkylightIntensityCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_SkylightColorCurve_MetaData[] = {
		{ "Category", "DayNight" },
		{ "Comment", "/* Maps skylight color to time of day */" },
		{ "ModuleRelativePath", "Public/World/STimeOfDayManager.h" },
		{ "ToolTip", "Maps skylight color to time of day" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_SkylightColorCurve = { "SkylightColorCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTimeOfDayManager, SkylightColorCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_SkylightColorCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_SkylightColorCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_AmbientAudioComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/World/STimeOfDayManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_AmbientAudioComp = { "AmbientAudioComp", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTimeOfDayManager, AmbientAudioComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_AmbientAudioComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_AmbientAudioComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_PrimarySunLight_MetaData[] = {
		{ "Category", "DayNight" },
		{ "Comment", "/* Primary sun of the level. Assigned in Blueprint during BeginPlay (BlueprintReadWrite is required as tag instead of EditDefaultsOnly) */" },
		{ "ModuleRelativePath", "Public/World/STimeOfDayManager.h" },
		{ "ToolTip", "Primary sun of the level. Assigned in Blueprint during BeginPlay (BlueprintReadWrite is required as tag instead of EditDefaultsOnly)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_PrimarySunLight = { "PrimarySunLight", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTimeOfDayManager, PrimarySunLight), Z_Construct_UClass_ADirectionalLight_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_PrimarySunLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_PrimarySunLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_SkyLightActor_MetaData[] = {
		{ "Category", "DayNight" },
		{ "ModuleRelativePath", "Public/World/STimeOfDayManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_SkyLightActor = { "SkyLightActor", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTimeOfDayManager, SkyLightActor), Z_Construct_UClass_ASkyLight_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_SkyLightActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_SkyLightActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_SoundNightStarted_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/World/STimeOfDayManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_SoundNightStarted = { "SoundNightStarted", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTimeOfDayManager, SoundNightStarted), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_SoundNightStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_SoundNightStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_SoundNightEnded_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/World/STimeOfDayManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_SoundNightEnded = { "SoundNightEnded", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTimeOfDayManager, SoundNightEnded), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_SoundNightEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_SoundNightEnded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_AmbientDaytime_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/World/STimeOfDayManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_AmbientDaytime = { "AmbientDaytime", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTimeOfDayManager, AmbientDaytime), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_AmbientDaytime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_AmbientDaytime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_AmbientNight_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/World/STimeOfDayManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_AmbientNight = { "AmbientNight", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTimeOfDayManager, AmbientNight), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_AmbientNight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_AmbientNight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTimeOfDayManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_SkylightIntensityCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_SkylightColorCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_AmbientAudioComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_PrimarySunLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_SkyLightActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_SoundNightStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_SoundNightEnded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_AmbientDaytime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTimeOfDayManager_Statics::NewProp_AmbientNight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTimeOfDayManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTimeOfDayManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASTimeOfDayManager_Statics::ClassParams = {
		&ASTimeOfDayManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASTimeOfDayManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASTimeOfDayManager_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASTimeOfDayManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASTimeOfDayManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASTimeOfDayManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASTimeOfDayManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASTimeOfDayManager, 55852528);
	template<> SURVIVALGAME_API UClass* StaticClass<ASTimeOfDayManager>()
	{
		return ASTimeOfDayManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTimeOfDayManager(Z_Construct_UClass_ASTimeOfDayManager, &ASTimeOfDayManager::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASTimeOfDayManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTimeOfDayManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
