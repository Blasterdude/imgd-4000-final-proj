// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TECH4_tech4GameMode_generated_h
#error "tech4GameMode.generated.h already included, missing '#pragma once' in tech4GameMode.h"
#endif
#define TECH4_tech4GameMode_generated_h

#define tech4_Source_tech4_tech4GameMode_h_9_RPC_WRAPPERS
#define tech4_Source_tech4_tech4GameMode_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define tech4_Source_tech4_tech4GameMode_h_9_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAtech4GameMode(); \
	friend TECH4_API class UClass* Z_Construct_UClass_Atech4GameMode(); \
	public: \
	DECLARE_CLASS(Atech4GameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, tech4, TECH4_API) \
	DECLARE_SERIALIZER(Atech4GameMode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<Atech4GameMode*>(this); }


#define tech4_Source_tech4_tech4GameMode_h_9_INCLASS \
	private: \
	static void StaticRegisterNativesAtech4GameMode(); \
	friend TECH4_API class UClass* Z_Construct_UClass_Atech4GameMode(); \
	public: \
	DECLARE_CLASS(Atech4GameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, tech4, TECH4_API) \
	DECLARE_SERIALIZER(Atech4GameMode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<Atech4GameMode*>(this); }


#define tech4_Source_tech4_tech4GameMode_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TECH4_API Atech4GameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Atech4GameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TECH4_API, Atech4GameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Atech4GameMode); \
private: \
	/** Private copy-constructor, should never be used */ \
	TECH4_API Atech4GameMode(const Atech4GameMode& InCopy); \
public:


#define tech4_Source_tech4_tech4GameMode_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	TECH4_API Atech4GameMode(const Atech4GameMode& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TECH4_API, Atech4GameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Atech4GameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Atech4GameMode)


#define tech4_Source_tech4_tech4GameMode_h_6_PROLOG
#define tech4_Source_tech4_tech4GameMode_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	tech4_Source_tech4_tech4GameMode_h_9_RPC_WRAPPERS \
	tech4_Source_tech4_tech4GameMode_h_9_INCLASS \
	tech4_Source_tech4_tech4GameMode_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define tech4_Source_tech4_tech4GameMode_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	tech4_Source_tech4_tech4GameMode_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	tech4_Source_tech4_tech4GameMode_h_9_INCLASS_NO_PURE_DECLS \
	tech4_Source_tech4_tech4GameMode_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID tech4_Source_tech4_tech4GameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
