// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGripMotionControllerComponent;
class USceneComponent;
struct FBPActorGripInformation;
struct FTransform;
class AActor;
class UPrimitiveComponent;
class UObject;
#ifdef VREXPANSIONPLUGIN_VRGripScriptBase_generated_h
#error "VRGripScriptBase.generated.h already included, missing '#pragma once' in VRGripScriptBase.h"
#endif
#define VREXPANSIONPLUGIN_VRGripScriptBase_generated_h

#define ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_32_RPC_WRAPPERS \
	virtual void OnSecondaryGripRelease_Implementation(UGripMotionControllerComponent* Controller, USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	virtual void OnSecondaryGrip_Implementation(UGripMotionControllerComponent* Controller, USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	virtual void OnGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed); \
	virtual void OnGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	virtual bool GetWorldTransform_Implementation(UGripMotionControllerComponent* GrippingController, float DeltaTime, FTransform& WorldTransform, FTransform const& ParentTransform, FBPActorGripInformation& Grip, AActor* actor, UPrimitiveComponent* root, bool bRootHasInterface, bool bActorHasInterface, bool bIsForTeleport); \
	virtual void OnBeginPlay_Implementation(UObject* CallingOwner); \
 \
	DECLARE_FUNCTION(execOnSecondaryGripRelease) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_Controller); \
		P_GET_OBJECT(USceneComponent,Z_Param_ReleasingSecondaryGripComponent); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSecondaryGripRelease_Implementation(Z_Param_Controller,Z_Param_ReleasingSecondaryGripComponent,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSecondaryGrip) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_Controller); \
		P_GET_OBJECT(USceneComponent,Z_Param_SecondaryGripComponent); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSecondaryGrip_Implementation(Z_Param_Controller,Z_Param_SecondaryGripComponent,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnGripRelease) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_ReleasingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_GET_UBOOL(Z_Param_bWasSocketed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnGripRelease_Implementation(Z_Param_ReleasingController,Z_Param_Out_GripInformation,Z_Param_bWasSocketed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnGrip) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldTransform) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldTransform); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ParentTransform); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_root); \
		P_GET_UBOOL(Z_Param_bRootHasInterface); \
		P_GET_UBOOL(Z_Param_bActorHasInterface); \
		P_GET_UBOOL(Z_Param_bIsForTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetWorldTransform_Implementation(Z_Param_GrippingController,Z_Param_DeltaTime,Z_Param_Out_WorldTransform,Z_Param_Out_ParentTransform,Z_Param_Out_Grip,Z_Param_actor,Z_Param_root,Z_Param_bRootHasInterface,Z_Param_bActorHasInterface,Z_Param_bIsForTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginPlay) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_CallingOwner); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginPlay_Implementation(Z_Param_CallingOwner); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsServer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAuthority) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasAuthority(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetOwner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=P_THIS->GetParent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParentTransform) \
	{ \
		P_GET_UBOOL(Z_Param_bGetWorldTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetParentTransform(Z_Param_bGetWorldTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGripTransform) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ParentTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetGripTransform(Z_Param_Out_Grip,Z_Param_Out_ParentTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForceGripToDrop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ForceGripToDrop(); \
		P_NATIVE_END; \
	}


#define ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSecondaryGripRelease) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_Controller); \
		P_GET_OBJECT(USceneComponent,Z_Param_ReleasingSecondaryGripComponent); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSecondaryGripRelease_Implementation(Z_Param_Controller,Z_Param_ReleasingSecondaryGripComponent,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSecondaryGrip) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_Controller); \
		P_GET_OBJECT(USceneComponent,Z_Param_SecondaryGripComponent); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSecondaryGrip_Implementation(Z_Param_Controller,Z_Param_SecondaryGripComponent,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnGripRelease) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_ReleasingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_GET_UBOOL(Z_Param_bWasSocketed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnGripRelease_Implementation(Z_Param_ReleasingController,Z_Param_Out_GripInformation,Z_Param_bWasSocketed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnGrip) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldTransform) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldTransform); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ParentTransform); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_root); \
		P_GET_UBOOL(Z_Param_bRootHasInterface); \
		P_GET_UBOOL(Z_Param_bActorHasInterface); \
		P_GET_UBOOL(Z_Param_bIsForTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetWorldTransform_Implementation(Z_Param_GrippingController,Z_Param_DeltaTime,Z_Param_Out_WorldTransform,Z_Param_Out_ParentTransform,Z_Param_Out_Grip,Z_Param_actor,Z_Param_root,Z_Param_bRootHasInterface,Z_Param_bActorHasInterface,Z_Param_bIsForTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginPlay) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_CallingOwner); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginPlay_Implementation(Z_Param_CallingOwner); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsServer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAuthority) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasAuthority(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetOwner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=P_THIS->GetParent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParentTransform) \
	{ \
		P_GET_UBOOL(Z_Param_bGetWorldTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetParentTransform(Z_Param_bGetWorldTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGripTransform) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ParentTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetGripTransform(Z_Param_Out_Grip,Z_Param_Out_ParentTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForceGripToDrop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ForceGripToDrop(); \
		P_NATIVE_END; \
	}


#define ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_32_EVENT_PARMS \
	struct VRGripScriptBase_eventGetWorldTransform_Parms \
	{ \
		UGripMotionControllerComponent* GrippingController; \
		float DeltaTime; \
		FTransform WorldTransform; \
		FTransform ParentTransform; \
		FBPActorGripInformation Grip; \
		AActor* actor; \
		UPrimitiveComponent* root; \
		bool bRootHasInterface; \
		bool bActorHasInterface; \
		bool bIsForTeleport; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripScriptBase_eventGetWorldTransform_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VRGripScriptBase_eventOnBeginPlay_Parms \
	{ \
		UObject* CallingOwner; \
	}; \
	struct VRGripScriptBase_eventOnGrip_Parms \
	{ \
		UGripMotionControllerComponent* GrippingController; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct VRGripScriptBase_eventOnGripRelease_Parms \
	{ \
		UGripMotionControllerComponent* ReleasingController; \
		FBPActorGripInformation GripInformation; \
		bool bWasSocketed; \
	}; \
	struct VRGripScriptBase_eventOnSecondaryGrip_Parms \
	{ \
		UGripMotionControllerComponent* Controller; \
		USceneComponent* SecondaryGripComponent; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct VRGripScriptBase_eventOnSecondaryGripRelease_Parms \
	{ \
		UGripMotionControllerComponent* Controller; \
		USceneComponent* ReleasingSecondaryGripComponent; \
		FBPActorGripInformation GripInformation; \
	};


#define ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_32_CALLBACK_WRAPPERS
#define ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRGripScriptBase(); \
	friend struct Z_Construct_UClass_UVRGripScriptBase_Statics; \
public: \
	DECLARE_CLASS(UVRGripScriptBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRGripScriptBase)


#define ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUVRGripScriptBase(); \
	friend struct Z_Construct_UClass_UVRGripScriptBase_Statics; \
public: \
	DECLARE_CLASS(UVRGripScriptBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRGripScriptBase)


#define ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRGripScriptBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRGripScriptBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRGripScriptBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRGripScriptBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRGripScriptBase(UVRGripScriptBase&&); \
	NO_API UVRGripScriptBase(const UVRGripScriptBase&); \
public:


#define ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRGripScriptBase(UVRGripScriptBase&&); \
	NO_API UVRGripScriptBase(const UVRGripScriptBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRGripScriptBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRGripScriptBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRGripScriptBase)


#define ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_32_PRIVATE_PROPERTY_OFFSET
#define ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_29_PROLOG \
	ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_32_EVENT_PARMS


#define ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_32_PRIVATE_PROPERTY_OFFSET \
	ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_32_RPC_WRAPPERS \
	ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_32_CALLBACK_WRAPPERS \
	ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_32_INCLASS \
	ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_32_PRIVATE_PROPERTY_OFFSET \
	ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_32_CALLBACK_WRAPPERS \
	ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_32_INCLASS_NO_PURE_DECLS \
	ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_219_RPC_WRAPPERS
#define ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_219_RPC_WRAPPERS_NO_PURE_DECLS
#define ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_219_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRGripScriptBaseBP(); \
	friend struct Z_Construct_UClass_UVRGripScriptBaseBP_Statics; \
public: \
	DECLARE_CLASS(UVRGripScriptBaseBP, UVRGripScriptBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRGripScriptBaseBP)


#define ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_219_INCLASS \
private: \
	static void StaticRegisterNativesUVRGripScriptBaseBP(); \
	friend struct Z_Construct_UClass_UVRGripScriptBaseBP_Statics; \
public: \
	DECLARE_CLASS(UVRGripScriptBaseBP, UVRGripScriptBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRGripScriptBaseBP)


#define ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_219_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRGripScriptBaseBP(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRGripScriptBaseBP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRGripScriptBaseBP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRGripScriptBaseBP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRGripScriptBaseBP(UVRGripScriptBaseBP&&); \
	NO_API UVRGripScriptBaseBP(const UVRGripScriptBaseBP&); \
public:


#define ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_219_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRGripScriptBaseBP(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRGripScriptBaseBP(UVRGripScriptBaseBP&&); \
	NO_API UVRGripScriptBaseBP(const UVRGripScriptBaseBP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRGripScriptBaseBP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRGripScriptBaseBP); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRGripScriptBaseBP)


#define ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_219_PRIVATE_PROPERTY_OFFSET
#define ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_216_PROLOG
#define ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_219_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_219_PRIVATE_PROPERTY_OFFSET \
	ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_219_RPC_WRAPPERS \
	ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_219_INCLASS \
	ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_219_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_219_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_219_PRIVATE_PROPERTY_OFFSET \
	ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_219_RPC_WRAPPERS_NO_PURE_DECLS \
	ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_219_INCLASS_NO_PURE_DECLS \
	ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_219_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ThatJustHappened_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h


#define FOREACH_ENUM_EGSTRANSFORMOVERRIDETYPE(op) \
	op(EGSTransformOverrideType::None) \
	op(EGSTransformOverrideType::OverridesWorldTransform) \
	op(EGSTransformOverrideType::ModifiesWorldTransform) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS