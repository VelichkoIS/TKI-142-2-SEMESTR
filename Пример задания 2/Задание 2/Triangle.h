#pragma once
#include "Point.h"

class Triangle
{
private:
	Point point1;
	Point point2;
	Point point3;
	double side1;
	double side2;
	double side3;;
public:
	Triangle(Point& point1, Point& point2, Point& point3);
	double get_side1() const;
	double get_side2() const;
	double get_side3() const;
	double halfPerimetr() const;
	void show();

};
