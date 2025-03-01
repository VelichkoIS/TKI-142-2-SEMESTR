#pragma once
#include <iostream>
#include "Point.h"

class Circle
{
private:
	double R;
	Point O;
public:
	Circle();
	void set_R();
	void set_O();
	void calc_S() const;
	void calc_C() const;
};