#include "Point.h"
#include <iostream>
#include "User.h"

Point::Point()
{
	set_x("¬ведите координаты центра окружности по оси x:");
	set_y("¬ведите координаты центра окружности по оси y:");
}

Point::Point(std::string messege_1, std::string messege_2)
{
	set_x(messege_1);
	set_y(messege_2);
}

double Point::get_x()
{
	return x;
}

double Point::get_y()
{
	return y;
}

void Point::set_x(std::string messege)
{
	User user;
	x = user.input(messege);
}

void Point::set_y(std::string messege)
{
	User user;
	y = user.input(messege);
}