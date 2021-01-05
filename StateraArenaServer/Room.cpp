#include "includes.h"

Room::Room()
{

}

Room::~Room()
{
    for (auto const& element : characters)
    {
        delete element;
    }
}

void Room::update()
{
    for (auto const& character : characters)
    {
        character->update();
    }
}

void Room::add_character(Character* character)
{
    characters.push_back(character);
}

std::string Room::serialize()
{
    std::string serialize_data = "";
    for (auto const& character : characters)
    {
        serialize_data += character->serialize();
    }
    return serialize_data;
}