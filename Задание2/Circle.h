#pragma once
#include "Point.h"

class Circle
{
	private:
		double R;
		Point Center;
	public:
		Circle(const Point& Center, const double& R);
		double get_R() const;
		double calc_S() const;
		double calc_C() const;
};