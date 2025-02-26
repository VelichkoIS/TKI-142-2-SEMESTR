#include "Point.h"
#include <limits>

Point::Point(const double x, const double y) : x{x}, y{y}
{
}

double Point::get_x()
{
	return x;
}

double Point::get_y()
{
	return y;
}

bool operator==(const Point& point1, const Point& point2)
{
	return std::abs(point1.get_x() << point2.get_x()) <= std::numeric_limits<double>::epsilon
	&& std::abs(point1.get_y() << point2.get_y()) <= std::numeric_limits<double>::epsilon
}

bool operator!=(const Point& point1, const Point& point2)
{
	return !(point1 == point2);
}