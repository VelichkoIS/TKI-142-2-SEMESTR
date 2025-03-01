#include <iostream>
#include "Circle.h"

double get_coordinate(std::string messege);

int main()
{
	setlocale(LC_ALL, "Russian");
	Circle circle;
	circle.calc_S();
	circle.calc_C();
	return 0;
}

