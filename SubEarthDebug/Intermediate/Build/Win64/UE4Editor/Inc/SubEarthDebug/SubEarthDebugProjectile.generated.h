// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef SUBEARTHDEBUG_SubEarthDebugProjectile_generated_h
#error "SubEarthDebugProjectile.generated.h already included, missing '#pragma once' in SubEarthDebugProjectile.h"
#endif
#define SUBEARTHDEBUG_SubEarthDebugProjectile_generated_h

#define SubEarthDebug_Source_SubEarthDebug_SubEarthDebugProjectile_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define SubEarthDebug_Source_SubEarthDebug_SubEarthDebugProjectile_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define SubEarthDebug_Source_SubEarthDebug_SubEarthDebugProjectile_h_9_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesASubEarthDebugProjectile(); \
	friend SUBEARTHDEBUG_API class UClass* Z_Construct_UClass_ASubEarthDebugProjectile(); \
	public: \
	DECLARE_CLASS(ASubEarthDebugProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SubEarthDebug"), NO_API) \
	DECLARE_SERIALIZER(ASubEarthDebugProjectile) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define SubEarthDebug_Source_SubEarthDebug_SubEarthDebugProjectile_h_9_INCLASS \
	private: \
	static void StaticRegisterNativesASubEarthDebugProjectile(); \
	friend SUBEARTHDEBUG_API class UClass* Z_Construct_UClass_ASubEarthDebugProjectile(); \
	public: \
	DECLARE_CLASS(ASubEarthDebugProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SubEarthDebug"), NO_API) \
	DECLARE_SERIALIZER(ASubEarthDebugProjectile) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define SubEarthDebug_Source_SubEarthDebug_SubEarthDebugProjectile_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASubEarthDebugProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASubEarthDebugProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASubEarthDebugProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASubEarthDebugProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASubEarthDebugProjectile(ASubEarthDebugProjectile&&); \
	NO_API ASubEarthDebugProjectile(const ASubEarthDebugProjectile&); \
public:


#define SubEarthDebug_Source_SubEarthDebug_SubEarthDebugProjectile_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASubEarthDebugProjectile(ASubEarthDebugProjectile&&); \
	NO_API ASubEarthDebugProjectile(const ASubEarthDebugProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASubEarthDebugProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASubEarthDebugProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASubEarthDebugProjectile)


#define SubEarthDebug_Source_SubEarthDebug_SubEarthDebugProjectile_h_6_PROLOG
#define SubEarthDebug_Source_SubEarthDebug_SubEarthDebugProjectile_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SubEarthDebug_Source_SubEarthDebug_SubEarthDebugProjectile_h_9_RPC_WRAPPERS \
	SubEarthDebug_Source_SubEarthDebug_SubEarthDebugProjectile_h_9_INCLASS \
	SubEarthDebug_Source_SubEarthDebug_SubEarthDebugProjectile_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SubEarthDebug_Source_SubEarthDebug_SubEarthDebugProjectile_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SubEarthDebug_Source_SubEarthDebug_SubEarthDebugProjectile_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	SubEarthDebug_Source_SubEarthDebug_SubEarthDebugProjectile_h_9_INCLASS_NO_PURE_DECLS \
	SubEarthDebug_Source_SubEarthDebug_SubEarthDebugProjectile_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SubEarthDebug_Source_SubEarthDebug_SubEarthDebugProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
