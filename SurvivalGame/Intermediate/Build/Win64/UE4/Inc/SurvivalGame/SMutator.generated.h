// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef SURVIVALGAME_SMutator_generated_h
#error "SMutator.generated.h already included, missing '#pragma once' in SMutator.h"
#endif
#define SURVIVALGAME_SMutator_generated_h

#define SurvivalGame_Source_SurvivalGame_Public_Mutators_SMutator_h_15_SPARSE_DATA
#define SurvivalGame_Source_SurvivalGame_Public_Mutators_SMutator_h_15_RPC_WRAPPERS \
	virtual bool CheckRelevance_Implementation(AActor* Other); \
	virtual void InitGame_Implementation(const FString& MapName, const FString& Options, FString& ErrorMessage); \
 \
	DECLARE_FUNCTION(execCheckRelevance); \
	DECLARE_FUNCTION(execInitGame);


#define SurvivalGame_Source_SurvivalGame_Public_Mutators_SMutator_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckRelevance); \
	DECLARE_FUNCTION(execInitGame);


#define SurvivalGame_Source_SurvivalGame_Public_Mutators_SMutator_h_15_EVENT_PARMS \
	struct SMutator_eventCheckRelevance_Parms \
	{ \
		AActor* Other; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SMutator_eventCheckRelevance_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SMutator_eventInitGame_Parms \
	{ \
		FString MapName; \
		FString Options; \
		FString ErrorMessage; \
	};


#define SurvivalGame_Source_SurvivalGame_Public_Mutators_SMutator_h_15_CALLBACK_WRAPPERS
#define SurvivalGame_Source_SurvivalGame_Public_Mutators_SMutator_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASMutator(); \
	friend struct Z_Construct_UClass_ASMutator_Statics; \
public: \
	DECLARE_CLASS(ASMutator, AInfo, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASMutator)


#define SurvivalGame_Source_SurvivalGame_Public_Mutators_SMutator_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASMutator(); \
	friend struct Z_Construct_UClass_ASMutator_Statics; \
public: \
	DECLARE_CLASS(ASMutator, AInfo, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASMutator)


#define SurvivalGame_Source_SurvivalGame_Public_Mutators_SMutator_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASMutator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASMutator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASMutator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASMutator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASMutator(ASMutator&&); \
	NO_API ASMutator(const ASMutator&); \
public:


#define SurvivalGame_Source_SurvivalGame_Public_Mutators_SMutator_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASMutator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASMutator(ASMutator&&); \
	NO_API ASMutator(const ASMutator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASMutator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASMutator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASMutator)


#define SurvivalGame_Source_SurvivalGame_Public_Mutators_SMutator_h_15_PRIVATE_PROPERTY_OFFSET
#define SurvivalGame_Source_SurvivalGame_Public_Mutators_SMutator_h_12_PROLOG \
	SurvivalGame_Source_SurvivalGame_Public_Mutators_SMutator_h_15_EVENT_PARMS


#define SurvivalGame_Source_SurvivalGame_Public_Mutators_SMutator_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Mutators_SMutator_h_15_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Mutators_SMutator_h_15_SPARSE_DATA \
	SurvivalGame_Source_SurvivalGame_Public_Mutators_SMutator_h_15_RPC_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Mutators_SMutator_h_15_CALLBACK_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Mutators_SMutator_h_15_INCLASS \
	SurvivalGame_Source_SurvivalGame_Public_Mutators_SMutator_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SurvivalGame_Source_SurvivalGame_Public_Mutators_SMutator_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Mutators_SMutator_h_15_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Mutators_SMutator_h_15_SPARSE_DATA \
	SurvivalGame_Source_SurvivalGame_Public_Mutators_SMutator_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Mutators_SMutator_h_15_CALLBACK_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Mutators_SMutator_h_15_INCLASS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Mutators_SMutator_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVALGAME_API UClass* StaticClass<class ASMutator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SurvivalGame_Source_SurvivalGame_Public_Mutators_SMutator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
