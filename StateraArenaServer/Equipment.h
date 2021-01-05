#pragma once
#include "EquipmentProperties.h"
class Equipment
{
public:
	Equipment(std::string data);
	Equipment(std::string name, EquipmentProperties *properties);

protected:
	std::string name = "";
	EquipmentProperties *properties;
};

