// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "tech4.h"
#include "tech4GameMode.h"
#include "tech4Character.h"

Atech4GameMode::Atech4GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
