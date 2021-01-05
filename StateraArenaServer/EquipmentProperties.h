#pragma once
class EquipmentProperties
{
public:
	EquipmentProperties(int defense, int weight, int attack);
protected:
	int defense = 0,
		weight = 0,
		attack = 0;
};

