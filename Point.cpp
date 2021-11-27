#include "Point.h"
#include <iostream>

using  namespace Geom;
int Point::cpt = 0;
Geom::Point::Point()
{
	this->x = 0.0;
	this->y = 0.0;
}

Geom::Point::Point(double x, double y)
{
	this->x = x; 
	this->y = y;
}

Geom::Point::Point(const Point& p)
{
	this->x = p.x; 
	this->y = p.y; 
	this->tab = new int[3];
	for (int i = 0; i < 3; i++)
	{
		this->tab[i] = p.tab[i];
	}
}

void Geom::Point::afficherPoint() const
{

	std::cout << "(" << this->x << "," << this->y << ")";
}

bool Geom::Point::comparer(const Point& p) const
{
	if (this->x == p.x && this->y == p.y) {
		return true;
	}
	else
	return false;
}

double Geom::Point::distance(const Point& p) const
{
	double d = sqrt(pow(p.x - this->x, 2) + pow(p.y - this->y, 2));
	return d;
}

void Geom::Point::translate(double dx, double dy)
{
	this->x =this->x+ dx;
	this->y = this->y + dy;
}

bool Geom::Point::operator==(const Point& p) const
{
	//this->x = 0.0;
	if (this->x == p.x && this->y == p.y) {
		return true;
	}
	else
		return false;
}

bool Geom::Point::operator!=(const Point& p) const
{

	if (this->x == p.x && this->y == p.y) {
		return false;
	}
	else
		return true;
	
}

Point Geom::Point::creator(double x, double y)
{
	if (cpt == 0) {
		Point p(x, y);
		cpt++;
		return p;
	}
	
	
}

Geom::Point::~Point()
{
	std::cout << "le destructeur de la classe Point" << std::endl;
}
