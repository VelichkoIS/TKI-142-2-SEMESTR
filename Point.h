#pragma once

/**
* @brief класс описывающий точку на оси коордмнат
*/
class Point 
{
	private:
		double x;
		double y;
	public:
		/**
		* @brief конструктор класса Point
		* @param x значение координаты по оси x
		* @param y значение координаты по оси y
		*/
		Point(const double x = 0, const double y = 0);
		/**
		* @brief функция возвращающая значение приватного поля x
		*/
		double getX() const;
		/**
		* @brief функция возвращающая значение приватного поля y
		*/
		double getY() const;
};