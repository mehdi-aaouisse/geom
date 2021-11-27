#include "Cercle.h"
#include <iostream>
#include<math.h>
using namespace std;
Geom::Cercle::Cercle()
{
	this->rayon = 0.0;
	this->centre = Point();
}

Geom::Cercle::Cercle(double r, Point &c)
{
	this->rayon = r;
	this->centre = c;
}

void Geom::Cercle::afficherCercle() const
{
	cout << "(" << this->rayon << ",";
	this->centre.afficherPoint();
	cout << ")" << endl;
}
void Geom::Cercle::changerRayon(double nr)
{
	this->rayon = nr;
}
double Geom::Cercle::surface() const
{
	double s = pow(this->rayon,2)*this->pi ;
	return s;
}
double Geom::Cercle::perimetre() const
{
	double p = this->rayon * 2 * this->pi;
	return p;
}
bool Geom::Cercle::comparerCercle(const Cercle& c) const
{                                              
	if (this->rayon == c.rayon && this->centre == c.centre) {

		return true;
	}
	else
	return false;
}
bool Geom::Cercle::appartenance(const Point& p) const
{
	if (this->rayon >= this->centre.distance(p)) {
		return true;
	}
	else
	return false;
}
Geom::Cercle::~Cercle()
{
	cout << "destructeur de la classe cercle" << endl;
}
