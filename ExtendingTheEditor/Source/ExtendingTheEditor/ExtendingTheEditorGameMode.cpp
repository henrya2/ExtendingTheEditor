// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "ExtendingTheEditorGameMode.h"
#include "ExtendingTheEditor.h"
#include "ExtendingTheEditorHUD.h"

AExtendingTheEditorGameMode::AExtendingTheEditorGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AExtendingTheEditorHUD::StaticClass();
}
