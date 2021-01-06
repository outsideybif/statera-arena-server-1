#pragma once
#include "Equipment.h"
#include "Entity.h"

class Character
	: public Entity
{

public:
	Character(double x, double y);
	~Character();

	void set_position(double x, double y);
	void set_name(std::string name);

	void update();
	void add_product(Equipment* equipment);
	std::string serialize();

protected:
	std::string name = "";

	std::vector<Equipment*> equipments = std::vector<Equipment*>();

	int health,
		speed;

	

};

