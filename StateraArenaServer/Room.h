#pragma once
#include "Character.h"
class Room
{
public:
	Room();
	~Room();

	void update();
	void add_character(Character* character);
	std::string serialize();
private:
	std::vector<Character*> characters = std::vector<Character*>();
};

