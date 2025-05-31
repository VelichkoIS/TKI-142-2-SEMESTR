#pragma once

#include <iostream>
#include <cmath>
#include <limits>

/**
* @brief класс вершины многоугольника
*/
class Point {
private:
    double x, y;
public:
    /**
    * @brief конструктор класса Point
    * @param x значение поля x
    * @param y значчение поля y
    */
    Point(double x = 0.0, double y = 0.0);
    /**
    * @brief возвращает значение поля x
    */
    double getX() const;
    /**
    * @brief возвращает значение поля y
    */
    double getY() const;
    /**
    * @brief оператор "равно"
    * @param other вершина
    */
    bool operator==(const Point& other) const;
    /**
    * @brief оператор "не равно"
    * @param other вершина
    */
    bool operator!=(const Point& other) const;
    /**
    * @brief оператор вычитания
    * @param other вершина
    */
    Point operator-(const Point& other) const;
    /**
    * @brief расчитывает расстояние между вершинами
    * @param other вершина
    */
    double distanceTo(const Point& other) const;
    /**
    * @brief оператор вывода
    * @param os поток вывода
    * @param p вершина
    */
    friend std::ostream& operator<<(std::ostream& os, const Point& p);
    /**
    * @brief оператор ввода
    * @param os поток ввода
    * @param p вершина
    */
    friend std::istream& operator>>(std::istream& is, Point& p);
};
