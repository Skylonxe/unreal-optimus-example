// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5ThirdPersonCppGameMode.h"
#include "UE5ThirdPersonCppCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5ThirdPersonCppGameMode::AUE5ThirdPersonCppGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
