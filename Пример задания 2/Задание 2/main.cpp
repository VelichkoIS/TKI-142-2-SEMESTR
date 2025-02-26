#include <iostream>
#include <string>
#include "Point.h"
#include "Triangle.h"

double get_coordinate(std::string messege);

int main()
{
	setlocale(LC_ALL, "Russian");

	double x = get_coordinate("Введите координату x:");
	double y = get_coordinate("Введите координату y:");
	Point point1(x, y);

	x = get_coordinate("Введите координату x:");
	y = get_coordinate("Введите координату y:");
	Point point2(x, y);

	x = get_coordinate("Введите координату x:");
	y = get_coordinate("Введите координату y:");
	Point point3(x, y);

	Triangle triangle(point1, point2, point3);

	std::cout << "Полупериметр равен " << triangle.halfPerimetr() << std:endl;
	triangle.show();

	return 0;
}

double get_coordinate(std::string messege)
{
	std::cout << messege << std::endl;
	double coordinate = 0.0;
	std::cin >> coordinate;
	return coordinate;
}