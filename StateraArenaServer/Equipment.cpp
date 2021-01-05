#include "includes.h"

Equipment::Equipment(std::string data)
{
	this->properties = new EquipmentProperties(0,0,0);
}
Equipment::Equipment(std::string name, EquipmentProperties *properties)
{
	this->name = name;
	this->properties = properties;
}