// Charlie BOYER - ENSI

#pragma once
#include "Enums/ESpiritLabel.h"

#include "SpiritType.generated.h"

USTRUCT()
struct FSpiritType
{
	GENERATED_BODY()
	
	ESpiritLabel Type;
	int Force;
	int Wisdom;
	int Courage;
};
