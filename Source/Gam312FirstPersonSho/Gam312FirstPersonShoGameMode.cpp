// Copyright Epic Games, Inc. All Rights Reserved.

#include "Gam312FirstPersonShoGameMode.h"
#include "Gam312FirstPersonShoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGam312FirstPersonShoGameMode::AGam312FirstPersonShoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
