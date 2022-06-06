// Copyright Epic Games, Inc. All Rights Reserved.

#include "JungleGame_PrototypeGameMode.h"
#include "JungleGame_PrototypeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AJungleGame_PrototypeGameMode::AJungleGame_PrototypeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
