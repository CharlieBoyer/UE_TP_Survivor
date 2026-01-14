// Charlie BOYER

#pragma once

#include "CoreMinimal.h"
#include "ESpiritLabel.generated.h"

UENUM(meta=(Bitflags, UseEnumValuesAsMaskValuesInEditor="true"))
enum class ESpiritLabel: uint8
{
	FORCE = 1,
	WISDOM = 2,
	COURAGE = 4,
	NEUTRAL = FORCE | WISDOM | COURAGE
};
