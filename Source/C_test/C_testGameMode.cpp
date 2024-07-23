// Copyright Epic Games, Inc. All Rights Reserved.

#include "C_testGameMode.h"
#include "C_testHUD.h"
#include "C_testCharacter.h"
#include "UObject/ConstructorHelpers.h"

AC_testGameMode::AC_testGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AC_testHUD::StaticClass();
}
