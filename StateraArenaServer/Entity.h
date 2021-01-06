#pragma once
class Entity
{
public:
	Entity(double x, double y);
	~Entity();
protected:
	double x = 0,
		y = 0;
};

