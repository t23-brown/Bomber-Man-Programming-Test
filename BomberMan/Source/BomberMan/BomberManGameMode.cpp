// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "BomberManGameMode.h"
#include "BomberManPlayerController.h"
#include "BomberManCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABomberManGameMode::ABomberManGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ABomberManPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}