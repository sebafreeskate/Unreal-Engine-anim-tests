// Copyright Epic Games, Inc. All Rights Reserved.

#include "AnimTestsGameMode.h"
#include "AnimTestsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAnimTestsGameMode::AAnimTestsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
