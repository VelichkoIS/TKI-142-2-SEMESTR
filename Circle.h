#pragma once
#include "Point.h"

/**
* @brief класс описывающий окружность
*/
class Circle
{
	private:
		double R;
		Point Center;
	public:
		/**
		* @brief конструктор класса Circle
		* @param Center координаты точки являющейся центром окружности
		* @param R занчение радиуса окружности
		*/
		Circle(const Point& Center, const double& R);
		/**
		* @brief возвращает значение радиуса окружности
		*/
		double get_R() const;
		/**
		* @brief расчитывает значение площади окружности
		*/
		double calc_S() const;
		/**
		* @brief расчитывает значение длинны окружности
		*/
		double calc_C() const;
};