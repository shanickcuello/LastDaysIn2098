// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/Public/Editor/SoundNodeLocalPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeLocalPlayer() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_USoundNodeLocalPlayer_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_USoundNodeLocalPlayer();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
// End Cross Module References
	void USoundNodeLocalPlayer::StaticRegisterNativesUSoundNodeLocalPlayer()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeLocalPlayer_NoRegister()
	{
		return USoundNodeLocalPlayer::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeLocalPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeLocalPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeLocalPlayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Choose different branch for sounds attached to locally controlled player\n*\n* Originates from ShooterGame project by Epic Games.\n*/" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Editor/SoundNodeLocalPlayer.h" },
		{ "ModuleRelativePath", "Public/Editor/SoundNodeLocalPlayer.h" },
		{ "ToolTip", "Choose different branch for sounds attached to locally controlled player\n\nOriginates from ShooterGame project by Epic Games." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeLocalPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeLocalPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeLocalPlayer_Statics::ClassParams = {
		&USoundNodeLocalPlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeLocalPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeLocalPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeLocalPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundNodeLocalPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundNodeLocalPlayer, 801242858);
	template<> SURVIVALGAME_API UClass* StaticClass<USoundNodeLocalPlayer>()
	{
		return USoundNodeLocalPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeLocalPlayer(Z_Construct_UClass_USoundNodeLocalPlayer, &USoundNodeLocalPlayer::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("USoundNodeLocalPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeLocalPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
