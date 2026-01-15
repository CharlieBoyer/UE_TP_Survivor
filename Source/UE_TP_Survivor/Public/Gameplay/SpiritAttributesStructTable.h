// Charlie BOYER - ENSI

#pragma once

#include "SpiritAttributesStructTable.generated.h"

USTRUCT()
struct FSpiritAttributesStructTable: public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere) float Force;
	UPROPERTY(EditAnywhere) float Wisdom;
	UPROPERTY(EditAnywhere) float Courage;
};
