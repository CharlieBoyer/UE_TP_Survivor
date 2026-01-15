// Charlie BOYER - ENSI


#include "Enemy/EnemyInstance.h"


UEnemyInstance::UEnemyInstance() {}

UEnemyInstance::~UEnemyInstance() {}

FVector UEnemyInstance::GetPosition() const
{
	return _position;
}

FVector UEnemyInstance::GetRotation() const
{
	return _rotation;
}

void UEnemyInstance::SetPosition(const FVector& Value)
{
	_position = Value;
}

void UEnemyInstance::SetRotation(const FVector& Value)
{
	_rotation = Value;
}
