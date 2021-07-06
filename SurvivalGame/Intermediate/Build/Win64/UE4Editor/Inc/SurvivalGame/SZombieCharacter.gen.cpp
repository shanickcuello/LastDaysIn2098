// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/Public/AI/SZombieCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSZombieCharacter() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASZombieCharacter_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASZombieCharacter();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASBaseCharacter();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	SURVIVALGAME_API UEnum* Z_Construct_UEnum_SurvivalGame_EBotBehaviorType();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASZombieCharacter::execBroadcastUpdateAudioLoop)
	{
		P_GET_UBOOL(Z_Param_bNewSensedTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastUpdateAudioLoop_Implementation(Z_Param_bNewSensedTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASZombieCharacter::execSimulateMeleeStrike)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SimulateMeleeStrike_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASZombieCharacter::execPerformMeleeStrike)
	{
		P_GET_OBJECT(AActor,Z_Param_HitActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformMeleeStrike(Z_Param_HitActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASZombieCharacter::execOnHearNoise)
	{
		P_GET_OBJECT(APawn,Z_Param_PawnInstigator);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHearNoise(Z_Param_PawnInstigator,Z_Param_Out_Location,Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASZombieCharacter::execOnSeePlayer)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSeePlayer(Z_Param_Pawn);
		P_NATIVE_END;
	}
	static FName NAME_ASZombieCharacter_BroadcastUpdateAudioLoop = FName(TEXT("BroadcastUpdateAudioLoop"));
	void ASZombieCharacter::BroadcastUpdateAudioLoop(bool bNewSensedTarget)
	{
		SZombieCharacter_eventBroadcastUpdateAudioLoop_Parms Parms;
		Parms.bNewSensedTarget=bNewSensedTarget ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASZombieCharacter_BroadcastUpdateAudioLoop),&Parms);
	}
	static FName NAME_ASZombieCharacter_SimulateMeleeStrike = FName(TEXT("SimulateMeleeStrike"));
	void ASZombieCharacter::SimulateMeleeStrike()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASZombieCharacter_SimulateMeleeStrike),NULL);
	}
	void ASZombieCharacter::StaticRegisterNativesASZombieCharacter()
	{
		UClass* Class = ASZombieCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastUpdateAudioLoop", &ASZombieCharacter::execBroadcastUpdateAudioLoop },
			{ "OnHearNoise", &ASZombieCharacter::execOnHearNoise },
			{ "OnSeePlayer", &ASZombieCharacter::execOnSeePlayer },
			{ "PerformMeleeStrike", &ASZombieCharacter::execPerformMeleeStrike },
			{ "SimulateMeleeStrike", &ASZombieCharacter::execSimulateMeleeStrike },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASZombieCharacter_BroadcastUpdateAudioLoop_Statics
	{
		static void NewProp_bNewSensedTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewSensedTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASZombieCharacter_BroadcastUpdateAudioLoop_Statics::NewProp_bNewSensedTarget_SetBit(void* Obj)
	{
		((SZombieCharacter_eventBroadcastUpdateAudioLoop_Parms*)Obj)->bNewSensedTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASZombieCharacter_BroadcastUpdateAudioLoop_Statics::NewProp_bNewSensedTarget = { "bNewSensedTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SZombieCharacter_eventBroadcastUpdateAudioLoop_Parms), &Z_Construct_UFunction_ASZombieCharacter_BroadcastUpdateAudioLoop_Statics::NewProp_bNewSensedTarget_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASZombieCharacter_BroadcastUpdateAudioLoop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASZombieCharacter_BroadcastUpdateAudioLoop_Statics::NewProp_bNewSensedTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASZombieCharacter_BroadcastUpdateAudioLoop_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Update the vocal loop of the zombie (idle, wandering, hunting) */" },
		{ "ModuleRelativePath", "Public/AI/SZombieCharacter.h" },
		{ "ToolTip", "Update the vocal loop of the zombie (idle, wandering, hunting)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASZombieCharacter_BroadcastUpdateAudioLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASZombieCharacter, nullptr, "BroadcastUpdateAudioLoop", nullptr, nullptr, sizeof(SZombieCharacter_eventBroadcastUpdateAudioLoop_Parms), Z_Construct_UFunction_ASZombieCharacter_BroadcastUpdateAudioLoop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASZombieCharacter_BroadcastUpdateAudioLoop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASZombieCharacter_BroadcastUpdateAudioLoop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASZombieCharacter_BroadcastUpdateAudioLoop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASZombieCharacter_BroadcastUpdateAudioLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASZombieCharacter_BroadcastUpdateAudioLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASZombieCharacter_OnHearNoise_Statics
	{
		struct SZombieCharacter_eventOnHearNoise_Parms
		{
			APawn* PawnInstigator;
			FVector Location;
			float Volume;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASZombieCharacter_OnHearNoise_Statics::NewProp_PawnInstigator = { "PawnInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SZombieCharacter_eventOnHearNoise_Parms, PawnInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASZombieCharacter_OnHearNoise_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASZombieCharacter_OnHearNoise_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SZombieCharacter_eventOnHearNoise_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASZombieCharacter_OnHearNoise_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASZombieCharacter_OnHearNoise_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASZombieCharacter_OnHearNoise_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SZombieCharacter_eventOnHearNoise_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASZombieCharacter_OnHearNoise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASZombieCharacter_OnHearNoise_Statics::NewProp_PawnInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASZombieCharacter_OnHearNoise_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASZombieCharacter_OnHearNoise_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASZombieCharacter_OnHearNoise_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/SZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASZombieCharacter_OnHearNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASZombieCharacter, nullptr, "OnHearNoise", nullptr, nullptr, sizeof(SZombieCharacter_eventOnHearNoise_Parms), Z_Construct_UFunction_ASZombieCharacter_OnHearNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASZombieCharacter_OnHearNoise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASZombieCharacter_OnHearNoise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASZombieCharacter_OnHearNoise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASZombieCharacter_OnHearNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASZombieCharacter_OnHearNoise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASZombieCharacter_OnSeePlayer_Statics
	{
		struct SZombieCharacter_eventOnSeePlayer_Parms
		{
			APawn* Pawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASZombieCharacter_OnSeePlayer_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SZombieCharacter_eventOnSeePlayer_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASZombieCharacter_OnSeePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASZombieCharacter_OnSeePlayer_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASZombieCharacter_OnSeePlayer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* When using functions as delegates they need to be marked with UFUNCTION(). We assign this function to FSeePawnDelegate */" },
		{ "ModuleRelativePath", "Public/AI/SZombieCharacter.h" },
		{ "ToolTip", "When using functions as delegates they need to be marked with UFUNCTION(). We assign this function to FSeePawnDelegate" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASZombieCharacter_OnSeePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASZombieCharacter, nullptr, "OnSeePlayer", nullptr, nullptr, sizeof(SZombieCharacter_eventOnSeePlayer_Parms), Z_Construct_UFunction_ASZombieCharacter_OnSeePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASZombieCharacter_OnSeePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASZombieCharacter_OnSeePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASZombieCharacter_OnSeePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASZombieCharacter_OnSeePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASZombieCharacter_OnSeePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASZombieCharacter_PerformMeleeStrike_Statics
	{
		struct SZombieCharacter_eventPerformMeleeStrike_Parms
		{
			AActor* HitActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASZombieCharacter_PerformMeleeStrike_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SZombieCharacter_eventPerformMeleeStrike_Parms, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASZombieCharacter_PerformMeleeStrike_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASZombieCharacter_PerformMeleeStrike_Statics::NewProp_HitActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASZombieCharacter_PerformMeleeStrike_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attacking" },
		{ "Comment", "/* Deal damage to the Actor that was hit by the punch animation */" },
		{ "ModuleRelativePath", "Public/AI/SZombieCharacter.h" },
		{ "ToolTip", "Deal damage to the Actor that was hit by the punch animation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASZombieCharacter_PerformMeleeStrike_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASZombieCharacter, nullptr, "PerformMeleeStrike", nullptr, nullptr, sizeof(SZombieCharacter_eventPerformMeleeStrike_Parms), Z_Construct_UFunction_ASZombieCharacter_PerformMeleeStrike_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASZombieCharacter_PerformMeleeStrike_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASZombieCharacter_PerformMeleeStrike_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASZombieCharacter_PerformMeleeStrike_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASZombieCharacter_PerformMeleeStrike()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASZombieCharacter_PerformMeleeStrike_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASZombieCharacter_SimulateMeleeStrike_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASZombieCharacter_SimulateMeleeStrike_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/SZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASZombieCharacter_SimulateMeleeStrike_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASZombieCharacter, nullptr, "SimulateMeleeStrike", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASZombieCharacter_SimulateMeleeStrike_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASZombieCharacter_SimulateMeleeStrike_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASZombieCharacter_SimulateMeleeStrike()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASZombieCharacter_SimulateMeleeStrike_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASZombieCharacter_NoRegister()
	{
		return ASZombieCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASZombieCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenseTimeOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SenseTimeOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnSensingComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnSensingComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PunchDamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PunchDamageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeleeDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeAnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeleeAnimMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundPlayerNoticed_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundPlayerNoticed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundHunting_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundHunting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundIdle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundIdle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundWandering_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundWandering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundAttackMelee_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundAttackMelee;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioLoopComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioLoopComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPunching_MetaData[];
#endif
		static void NewProp_bIsPunching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPunching;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BotType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BotType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BotType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASZombieCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASZombieCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASZombieCharacter_BroadcastUpdateAudioLoop, "BroadcastUpdateAudioLoop" }, // 3240398196
		{ &Z_Construct_UFunction_ASZombieCharacter_OnHearNoise, "OnHearNoise" }, // 3483950119
		{ &Z_Construct_UFunction_ASZombieCharacter_OnSeePlayer, "OnSeePlayer" }, // 3158542682
		{ &Z_Construct_UFunction_ASZombieCharacter_PerformMeleeStrike, "PerformMeleeStrike" }, // 1012405279
		{ &Z_Construct_UFunction_ASZombieCharacter_SimulateMeleeStrike, "SimulateMeleeStrike" }, // 408174725
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASZombieCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/SZombieCharacter.h" },
		{ "ModuleRelativePath", "Public/AI/SZombieCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_SenseTimeOut_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/* Time-out value to clear the sensed position of the player. Should be higher than Sense interval in the PawnSense component not never miss sense ticks. */" },
		{ "ModuleRelativePath", "Public/AI/SZombieCharacter.h" },
		{ "ToolTip", "Time-out value to clear the sensed position of the player. Should be higher than Sense interval in the PawnSense component not never miss sense ticks." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_SenseTimeOut = { "SenseTimeOut", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASZombieCharacter, SenseTimeOut), METADATA_PARAMS(Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_SenseTimeOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_SenseTimeOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_PawnSensingComp_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/SZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_PawnSensingComp = { "PawnSensingComp", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASZombieCharacter, PawnSensingComp), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_PawnSensingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_PawnSensingComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_PunchDamageType_MetaData[] = {
		{ "Category", "Attacking" },
		{ "ModuleRelativePath", "Public/AI/SZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_PunchDamageType = { "PunchDamageType", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASZombieCharacter, PunchDamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_PunchDamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_PunchDamageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_MeleeDamage_MetaData[] = {
		{ "Category", "Attacking" },
		{ "ModuleRelativePath", "Public/AI/SZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_MeleeDamage = { "MeleeDamage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASZombieCharacter, MeleeDamage), METADATA_PARAMS(Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_MeleeDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_MeleeDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_MeleeAnimMontage_MetaData[] = {
		{ "Category", "Attacking" },
		{ "ModuleRelativePath", "Public/AI/SZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_MeleeAnimMontage = { "MeleeAnimMontage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASZombieCharacter, MeleeAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_MeleeAnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_MeleeAnimMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_SoundPlayerNoticed_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/AI/SZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_SoundPlayerNoticed = { "SoundPlayerNoticed", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASZombieCharacter, SoundPlayerNoticed), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_SoundPlayerNoticed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_SoundPlayerNoticed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_SoundHunting_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/AI/SZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_SoundHunting = { "SoundHunting", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASZombieCharacter, SoundHunting), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_SoundHunting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_SoundHunting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_SoundIdle_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/AI/SZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_SoundIdle = { "SoundIdle", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASZombieCharacter, SoundIdle), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_SoundIdle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_SoundIdle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_SoundWandering_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/AI/SZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_SoundWandering = { "SoundWandering", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASZombieCharacter, SoundWandering), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_SoundWandering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_SoundWandering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_SoundAttackMelee_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/AI/SZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_SoundAttackMelee = { "SoundAttackMelee", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASZombieCharacter, SoundAttackMelee), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_SoundAttackMelee_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_SoundAttackMelee_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_AudioLoopComp_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/* Plays the idle, wandering or hunting sound */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/SZombieCharacter.h" },
		{ "ToolTip", "Plays the idle, wandering or hunting sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_AudioLoopComp = { "AudioLoopComp", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASZombieCharacter, AudioLoopComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_AudioLoopComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_AudioLoopComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_bIsPunching_MetaData[] = {
		{ "Category", "Attacking" },
		{ "ModuleRelativePath", "Public/AI/SZombieCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_bIsPunching_SetBit(void* Obj)
	{
		((ASZombieCharacter*)Obj)->bIsPunching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_bIsPunching = { "bIsPunching", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASZombieCharacter), &Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_bIsPunching_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_bIsPunching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_bIsPunching_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_BotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_BotType_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/* The bot behavior we want this bot to execute, (passive/patrol) by specifying EditAnywhere we can edit this value per-instance when placed on the map. */" },
		{ "ModuleRelativePath", "Public/AI/SZombieCharacter.h" },
		{ "ToolTip", "The bot behavior we want this bot to execute, (passive/patrol) by specifying EditAnywhere we can edit this value per-instance when placed on the map." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_BotType = { "BotType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASZombieCharacter, BotType), Z_Construct_UEnum_SurvivalGame_EBotBehaviorType, METADATA_PARAMS(Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_BotType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_BotType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/* Assigned at the Character level (instead of Controller) so we may use different zombie behaviors while re-using one controller. */" },
		{ "ModuleRelativePath", "Public/AI/SZombieCharacter.h" },
		{ "ToolTip", "Assigned at the Character level (instead of Controller) so we may use different zombie behaviors while re-using one controller." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASZombieCharacter, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_BehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_BehaviorTree_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASZombieCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_SenseTimeOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_PawnSensingComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_PunchDamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_MeleeDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_MeleeAnimMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_SoundPlayerNoticed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_SoundHunting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_SoundIdle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_SoundWandering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_SoundAttackMelee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_AudioLoopComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_bIsPunching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_BotType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_BotType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASZombieCharacter_Statics::NewProp_BehaviorTree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASZombieCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASZombieCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASZombieCharacter_Statics::ClassParams = {
		&ASZombieCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASZombieCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASZombieCharacter_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASZombieCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASZombieCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASZombieCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASZombieCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASZombieCharacter, 3283310910);
	template<> SURVIVALGAME_API UClass* StaticClass<ASZombieCharacter>()
	{
		return ASZombieCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASZombieCharacter(Z_Construct_UClass_ASZombieCharacter, &ASZombieCharacter::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASZombieCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASZombieCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
