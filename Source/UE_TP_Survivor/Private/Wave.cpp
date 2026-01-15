
#include "Gameplay/Wave.h"

FWave::FWave(const int ID, const int Cost, const EWaveModifier Type):
	_id(ID), _cost(Cost), _type(Type) {}

FWave::~FWave() = default;

int FWave::GetID() const
{
	return _id;
}

int FWave::GetCost() const
{
	return _cost;
}

EWaveModifier FWave::GetType() const
{
	return _type;
}
