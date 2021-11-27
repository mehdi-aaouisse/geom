#pragma once
namespace Geom
{
class Point{
public: 
	Point();
	Point(double x, double y);
	Point(float x, float y);
	Point(double x); 
	Point(const Point &p);// constructeur de recopie
	void afficherPoint() const;
	bool comparer( Point p)const;
	double distance(const Point& p) const;
	void translate(double dx, double dy);
	bool operator==(const Point& p) const;
	bool operator!=(const Point& p) const;
	static Point creator(double x, double y);
	/*void m1();
	void m1(double x);
	void m1(float x);*/
	~Point();

private: 
static 	int cpt; 
	double x; 
	double y;
	int* tab;
};

};