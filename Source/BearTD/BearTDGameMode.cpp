// Copyright Epic Games, Inc. All Rights Reserved.

#include "BearTDGameMode.h"
#include "BearTDPlayerController.h"
#include "BearTDCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABearTDGameMode::ABearTDGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ABearTDPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}