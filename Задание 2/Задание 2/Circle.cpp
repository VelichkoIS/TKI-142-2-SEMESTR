#define _USE_MATH_DEFINES
#include "Circle.h"
#include "Point.h"
#include "math.h"
#include <iomanip>
#include "User.h"
#include <iostream>

Circle::Circle()
{
	set_R();
}


void Circle::calc_S() const
{
	std::cout << "Площадь окружности:" << std::fixed << std::setprecision(3) << M_PI * pow(this->R, 2) << std::endl;
}

void Circle::calc_C() const
{
	std::cout << "Длинна окружности:" << std::fixed << std::setprecision(3) << 2 * M_PI * this->R << std::endl;
}

void Circle::set_R()
{
	User user;
	R = user.input("Введите радиус окружности:");
}

void Circle::set_O()
{
	Point point;
	O = point;
}