// Copyright Epic Games, Inc. All Rights Reserved.

#include "bc01GameMode.h"
#include "bc01Character.h"
#include "UObject/ConstructorHelpers.h"

Abc01GameMode::Abc01GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
