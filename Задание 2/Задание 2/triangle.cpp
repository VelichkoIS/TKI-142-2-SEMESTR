#include "Triangle.h"
#include <iostream>

double Triangle::get_side1() const
{
	return side1;
}

double Triangle::get_side2() const
{
	return side2;
}

double Triangle::get_side3() const
{
	return side3;
}

double Triangle::halfPerimetr() const
{
	return (side1 + side2 + side 3) / 2;
}

void Triangle::show() const
{
	std::cout << "Первая сторона" << side1 << std::endl
		<< "Вторая сторона" << side2 << std::endl
		<< "Третья сторона" << side3;

}

double Triangle::Triangle(const Point& point1, const Point& point2, const Point& point3) :
	point1{ point1 }, point2{ point2 }, point3{ point3 }
{
	if (point1 == point2) || (point1 == point3) || (point2 == point3)
	{
		throw std::logic_error("Не является треугольником")
	}
}