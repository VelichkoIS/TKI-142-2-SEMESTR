#include <iostream>
#include <string>
#include "Point.h"
#include "Triangle.h"

double get_coordinate(std::string messege);

int main()
{
	setlocale(LC_ALL, "Russian");

	double x = get_coordinate("������� ���������� x:");
	double y = get_coordinate("������� ���������� y:");
	Point point1(x, y);

	x = get_coordinate("������� ���������� x:");
	y = get_coordinate("������� ���������� y:");
	Point point2(x, y);

	x = get_coordinate("������� ���������� x:");
	y = get_coordinate("������� ���������� y:");
	Point point3(x, y);

	Triangle triangle(point1, point2, point3);

	std::cout << "������������ ����� " << triangle.halfPerimetr() << std:endl;
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