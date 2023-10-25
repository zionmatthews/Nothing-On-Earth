// Copyright Epic Games, Inc. All Rights Reserved.

#include "NothingOnEarthGameMode.h"
#include "NothingOnEarthCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANothingOnEarthGameMode::ANothingOnEarthGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
