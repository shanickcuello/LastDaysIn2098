// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivalGame_init() {}
	SURVIVALGAME_API UFunction* Z_Construct_UDelegateFunction_SurvivalGame_ChatMessageReceived__DelegateSignature();
	SURVIVALGAME_API UFunction* Z_Construct_UDelegateFunction_SurvivalGame_PlayerArrayChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SurvivalGame_ChatMessageReceived__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SurvivalGame_PlayerArrayChanged__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/SurvivalGame",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x73F75C90,
				0x23ED1ABC,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
