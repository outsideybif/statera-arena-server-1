#include "includes.h"

Character::Character(double x, double y)
	:Entity(x, y){
	this->x = x;
	this->y = y;
}

Character::~Character()
{
	for (auto const& element : equipments)
	{
		delete element;
	}
		
}

void Character::set_position(double x, double y) {
	this->x = x;
	this->y = y;
}

void Character::set_name(std::string name) {
	this->name = name;
}

void Character::update() 
{

}

void Character::add_product(Equipment* equipment)
{
	equipments.push_back(equipment);
}

std::string Character::serialize()
{
	return name;
}