#include <iostream>
#include "Circle.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	Circle circle;
	circle.calc_S();
	circle.calc_C();
	Point center_point("¬ведите координаты центра окружности по оси x:", "¬ведите координаты центра окружности по оси y:");
	Point user_point("¬ведите координаты точки по оси x:", "¬ведите координаты точки по оси y:");
	circle.point_comparison(user_point, center_point);
	return 0;
}

