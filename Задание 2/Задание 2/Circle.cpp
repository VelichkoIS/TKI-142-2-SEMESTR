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
	std::cout << "������� ����������:" << std::fixed << std::setprecision(3) << M_PI * pow(this->R, 2) << std::endl;
}

void Circle::calc_C() const
{
	std::cout << "������ ����������:" << std::fixed << std::setprecision(3) << 2 * M_PI * this->R << std::endl;
}

void Circle::set_R()
{
	User user;
	R = user.input("������� ������ ����������:");
}

void Circle::point_comparison(Point user_point, Point center_point)
{
	if (pow((user_point.get_x() - center_point.get_x()), 2) + pow((user_point.get_y() - center_point.get_y()), 2) < R ||
		pow((user_point.get_x() - center_point.get_x()), 2) + pow((user_point.get_y() - center_point.get_y()), 2) == R)
	{
		std::cout << "����� ����������� ����������" << std::endl;
	}
	else
	{
		std::cout << "����� �� ����������� ����������" << std::endl;
	}
}