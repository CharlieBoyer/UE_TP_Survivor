// Charlie BOYER

#pragma once

#include "CoreMinimal.h"
#include "ERarity.generated.h"

UENUM(BlueprintType)
enum class ERarity: uint8
{
	COMMON UMETA(DisplayName="Common"),		
	RARE UMETA(DisplayName="Rare"),		
	EPIC UMETA(DisplayName="Epic"),		
	LEGENDARY UMETA(DisplayName="Legendary")
};
