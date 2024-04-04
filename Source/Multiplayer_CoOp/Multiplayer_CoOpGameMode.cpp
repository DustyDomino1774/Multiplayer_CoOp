// Copyright Epic Games, Inc. All Rights Reserved.

#include "Multiplayer_CoOpGameMode.h"
#include "Multiplayer_CoOpCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiplayer_CoOpGameMode::AMultiplayer_CoOpGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
