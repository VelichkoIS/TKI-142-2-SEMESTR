#include <iostream>
#include "Circle.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	Circle circle;
	circle.calc_S();
	circle.calc_C();
	Point center_point("������� ���������� ������ ���������� �� ��� x:", "������� ���������� ������ ���������� �� ��� y:");
	Point user_point("������� ���������� ����� �� ��� x:", "������� ���������� ����� �� ��� y:");
	circle.point_comparison(user_point, center_point);
	return 0;
}

