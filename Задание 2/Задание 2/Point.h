#pragma once
#include <iostream>

class Point
{
private:
	double x;
	double y;
public:
	Point();
	Point(std::string messege_1, std::string messege_2);
	double get_x();
	double get_y();
	void set_x(std::string messsege);
	void set_y(std::string messsege);
};
