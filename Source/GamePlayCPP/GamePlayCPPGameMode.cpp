// Copyright Epic Games, Inc. All Rights Reserved.

#include "GamePlayCPPGameMode.h"
#include "GamePlayCPPHUD.h"
#include "GamePlayCPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGamePlayCPPGameMode::AGamePlayCPPGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGamePlayCPPHUD::StaticClass();
}
