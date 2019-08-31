// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MarsSimulationGameMode.h"
#include "MarsSimulationHUD.h"
#include "MarsSimulationCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMarsSimulationGameMode::AMarsSimulationGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMarsSimulationHUD::StaticClass();
}
