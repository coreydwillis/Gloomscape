// Copyright Epic Games, Inc. All Rights Reserved.

#include "GloomscapeGameMode.h"
#include "GloomscapeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGloomscapeGameMode::AGloomscapeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
