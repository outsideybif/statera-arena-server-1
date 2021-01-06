#include "includes.h"

Actor::Actor(double x, double y):
	Character(x, y){
	this->x = x;
	this->y = y;
}

Actor::~Actor()
{

}