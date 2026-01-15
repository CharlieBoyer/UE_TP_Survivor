#pragma once

#include "Enums/WaveModifier.h"

class UE_TP_SURVIVOR_API FWave
{
public:
	FWave(int ID, int Cost, EWaveModifier Type);
	~FWave();
	
public:
	int GetID() const;
	int GetCost() const;
	EWaveModifier GetType() const;

private:
	int _id;
	int _cost;
	EWaveModifier _type;
};
