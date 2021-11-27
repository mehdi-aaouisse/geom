#pragma once
#include "Point.h"
namespace Geom{
class Cercle
{
public: 
	Cercle();
	Cercle(double r, Point& c); 
	void afficherCercle() const;
	void changerRayon(double nr);
	double surface() const;
	double perimetre() const;
	bool comparerCercle(const Cercle& c) const;
	bool appartenance(const Point& p) const;
	~Cercle();

private: 
	double rayon;
	Point centre;
	const double pi = 3.14;
};

};