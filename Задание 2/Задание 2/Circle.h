#pragma once
#include <iostream>
#include "Point.h"

class Circle
{
private:
	double R;
public:
	Circle();
	void set_R();
	void calc_S() const;
	void calc_C() const;
	void point_comparison(Point user_point, Point center_point);
};