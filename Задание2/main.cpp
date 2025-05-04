#include <iostream>
#include "Point.h"
#include "Circle.h"
#include <string>

using namespace std;

double get_coordinate(string messege);
double input();
void belonging(const Point& center, const Point& point, const double R);

int main()
{
	setlocale(LC_ALL, "Russian");
	auto x = get_coordinate("Введите координату центра окружности по оси x:");
	auto y = get_coordinate("Введите координату центра окружности по оси y:");
	Point center(x, y);
	cout << "Введите значение радиуса окружности" << endl;
	auto R = input();
	Circle circle(center, R);
	cout << "Площадь круга равна: " << circle.calc_S() << endl;
	cout << "Длинна окружности равна: " << circle.calc_C() << endl;
	x = get_coordinate("Введите координату точки по оси x:");
	y = get_coordinate("Введите координату точки по оси y:");
	Point custom_point(x, y);
	belonging(center, custom_point, R);
}

double get_coordinate(string messege)
{
	cout << messege << endl;
	double coordinate = 0;
	cin >> coordinate;
	if (cin.fail())
	{
		throw invalid_argument("Введено некорректное значение");
	}

}

double input()
{
	double value = 0;
	cin >> value;
	if (cin.fail())
	{
		throw invalid_argument("Введено некорректное значение");
	}
}

void belonging(const Point& center, const Point& point, const double R)
{
	double result = pow((point.getX() - center.getX()), 2) + pow((point.getY() - center.getY()), 2);
	if (result == pow(R, 2))
	{
		cout << "Точка точка принадлежит окружности" << endl;
	}
	else
	{
		cout << "Точка не принадлежит окружности" << endl;
	}
}