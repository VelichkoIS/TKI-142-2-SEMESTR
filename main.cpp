#include <iostream>
#include "Point.h"
#include "Circle.h"
#include <string>

using namespace std;

/**
* @brief принимает данные из потока ввода
* @param messege сообщение для передачи в поток вывода
*/
double input(string messege);
/**
* @brief проверяет принадлежность точки к окружности
* @param center координаты точки являющейся центром окружности
* @param point координаты точки принадлежность которой проверяется
* @param R занчение радиуса окружности
*/
void belonging(const Point& center, const Point& point, const double R);

int main()
{
	setlocale(LC_ALL, "Russian");
	auto x = input("Введите координату центра окружности по оси x:");
	auto y = input("Введите координату центра окружности по оси y:");
	Point center(x, y);
	cout << "Введите значение радиуса окружности" << endl;
	auto R = input("");
	Circle circle(center, R);
	cout << "Площадь круга равна: " << circle.calc_S() << endl;
	cout << "Длинна окружности равна: " << circle.calc_C() << endl;
	x = input("Введите координату точки по оси x:");
	y = input("Введите координату точки по оси y:");
	Point custom_point(x, y);
	belonging(center, custom_point, R);
	return 0;
}

double input(string messege)
{
	if (messege != "")
	{
		cout << messege << endl;
	}
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
		cout << "Точка принадлежит окружности" << endl;
	}
	else
	{
		cout << "Точка не принадлежит окружности" << endl;
	}
}