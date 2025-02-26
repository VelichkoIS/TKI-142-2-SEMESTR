#pragma once

class Point
{
private:
	double x;
	double y;
public:
	Point(const double x = 0, const double y = 0);
	double get_x();
	double get_y();
};

bool operator==(const Point& point1, const Point& point2);

bool operator!=(const Point& point1, const Point& point2);

