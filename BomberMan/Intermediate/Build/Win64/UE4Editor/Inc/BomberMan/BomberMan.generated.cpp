// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BomberMan.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1BomberMan() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API class UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API class UClass* Z_Construct_UClass_APlayerController();

	BOMBERMAN_API class UClass* Z_Construct_UClass_ABomberManCharacter_NoRegister();
	BOMBERMAN_API class UClass* Z_Construct_UClass_ABomberManCharacter();
	BOMBERMAN_API class UClass* Z_Construct_UClass_ABomberManGameMode_NoRegister();
	BOMBERMAN_API class UClass* Z_Construct_UClass_ABomberManGameMode();
	BOMBERMAN_API class UClass* Z_Construct_UClass_ABomberManPlayerController_NoRegister();
	BOMBERMAN_API class UClass* Z_Construct_UClass_ABomberManPlayerController();
	BOMBERMAN_API class UPackage* Z_Construct_UPackage__Script_BomberMan();
	void ABomberManCharacter::StaticRegisterNativesABomberManCharacter()
	{
	}
	UClass* Z_Construct_UClass_ABomberManCharacter_NoRegister()
	{
		return ABomberManCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_ABomberManCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_BomberMan();
			OuterClass = ABomberManCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_CursorToWorld = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CursorToWorld"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CursorToWorld, ABomberManCharacter), 0x00400000000a001d, Z_Construct_UClass_UDecalComponent_NoRegister());
				UProperty* NewProp_CameraBoom = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraBoom"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraBoom, ABomberManCharacter), 0x00400000000a001d, Z_Construct_UClass_USpringArmComponent_NoRegister());
				UProperty* NewProp_TopDownCameraComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TopDownCameraComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TopDownCameraComponent, ABomberManCharacter), 0x00400000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<ABomberManCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BomberManCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BomberManCharacter.h"));
				MetaData->SetValue(NewProp_CursorToWorld, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CursorToWorld, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CursorToWorld, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CursorToWorld, TEXT("ModuleRelativePath"), TEXT("BomberManCharacter.h"));
				MetaData->SetValue(NewProp_CursorToWorld, TEXT("ToolTip"), TEXT("A decal that projects to the cursor location."));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ModuleRelativePath"), TEXT("BomberManCharacter.h"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ToolTip"), TEXT("Camera boom positioning the camera above the character"));
				MetaData->SetValue(NewProp_TopDownCameraComponent, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_TopDownCameraComponent, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_TopDownCameraComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_TopDownCameraComponent, TEXT("ModuleRelativePath"), TEXT("BomberManCharacter.h"));
				MetaData->SetValue(NewProp_TopDownCameraComponent, TEXT("ToolTip"), TEXT("Top down camera"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABomberManCharacter, 496516415);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABomberManCharacter(Z_Construct_UClass_ABomberManCharacter, &ABomberManCharacter::StaticClass, TEXT("/Script/BomberMan"), TEXT("ABomberManCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberManCharacter);
	void ABomberManGameMode::StaticRegisterNativesABomberManGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABomberManGameMode_NoRegister()
	{
		return ABomberManGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ABomberManGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_BomberMan();
			OuterClass = ABomberManGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20880288;


				static TCppClassTypeInfo<TCppClassTypeTraits<ABomberManGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BomberManGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BomberManGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABomberManGameMode, 1638377184);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABomberManGameMode(Z_Construct_UClass_ABomberManGameMode, &ABomberManGameMode::StaticClass, TEXT("/Script/BomberMan"), TEXT("ABomberManGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberManGameMode);
	void ABomberManPlayerController::StaticRegisterNativesABomberManPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ABomberManPlayerController_NoRegister()
	{
		return ABomberManPlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_ABomberManPlayerController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APlayerController();
			Z_Construct_UPackage__Script_BomberMan();
			OuterClass = ABomberManPlayerController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800284;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ABomberManPlayerController> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BomberManPlayerController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BomberManPlayerController.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABomberManPlayerController, 186724429);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABomberManPlayerController(Z_Construct_UClass_ABomberManPlayerController, &ABomberManPlayerController::StaticClass, TEXT("/Script/BomberMan"), TEXT("ABomberManPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberManPlayerController);
	UPackage* Z_Construct_UPackage__Script_BomberMan()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/BomberMan")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x53B857A4;
			Guid.B = 0x82FF3202;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
