#include "Point.h"
#include <iostream>
#include "User.h"

Point::Point()
{
	set_x();
	set_y();
}

void Point::set_x()
{
	User user;
	x = user.input("¬ведите координату цента окружности по оси x:");
}

void Point::set_y()
{
	User user;
	y = user.input("¬ведите координату цента окружности по оси y:");
}