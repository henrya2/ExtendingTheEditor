// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "ExtendingTheEditor.h"
#include "ExtendingTheEditorGameMode.h"
#include "ExtendingTheEditorHUD.h"
#include "ExtendingTheEditorCharacter.h"

AExtendingTheEditorGameMode::AExtendingTheEditorGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AExtendingTheEditorHUD::StaticClass();
}
