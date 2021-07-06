// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/Public/Player/SLocalPlayer.h"
#include "Engine/Classes/Engine/Engine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSLocalPlayer() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_USLocalPlayer_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_USLocalPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
// End Cross Module References
	void USLocalPlayer::StaticRegisterNativesUSLocalPlayer()
	{
	}
	UClass* Z_Construct_UClass_USLocalPlayer_NoRegister()
	{
		return USLocalPlayer::StaticClass();
	}
	struct Z_Construct_UClass_USLocalPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USLocalPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalPlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USLocalPlayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * LocalPlayer defines a specific user when dealing with multiple players on a single machine (eg. local split-screen)\n */" },
		{ "IncludePath", "Player/SLocalPlayer.h" },
		{ "ModuleRelativePath", "Public/Player/SLocalPlayer.h" },
		{ "ToolTip", "LocalPlayer defines a specific user when dealing with multiple players on a single machine (eg. local split-screen)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USLocalPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USLocalPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USLocalPlayer_Statics::ClassParams = {
		&USLocalPlayer::StaticClass,
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
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_USLocalPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USLocalPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USLocalPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USLocalPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USLocalPlayer, 2465766627);
	template<> SURVIVALGAME_API UClass* StaticClass<USLocalPlayer>()
	{
		return USLocalPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USLocalPlayer(Z_Construct_UClass_USLocalPlayer, &USLocalPlayer::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("USLocalPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USLocalPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
