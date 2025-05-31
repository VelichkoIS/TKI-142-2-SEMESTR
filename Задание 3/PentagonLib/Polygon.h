#pragma once

#include <string>
#include <iostream>
#include "Point.h"

/**
* @brief абстрактный класс правильного многоугольника
*/
class Polygon {
public:
    /**
    * @brief виртуальный деструктор
    */
    virtual ~Polygon() = default;
    /**
    * @brief сериализация в строку
    */
    virtual std::string ToString() const = 0;
    /**
    * @brief расчет площади фигуры
    */
    virtual double Area() const = 0;
    /**
    * @brief расчет периметра фигуры
    */
    virtual double Perimeter() const = 0;
    /**
    * @brief расчет радиуса описанной вокруг многоугольника окружности
    */
    virtual double CircumscribedRadius() const = 0;
    /**
    * @brief чтение из потока ввода
    * @param is поток ввода
    */
    virtual void read(std::istream& is) = 0;
    /**
    * @brief оператор вывода
    * @param os поток вывода
    * @param p правильный многоугольник
    */
    friend std::ostream& operator<<(std::ostream& os, const Polygon& p)
    {
        os << p.ToString(); return os; 
    }
    /**
    * @brief оператор ввода
    * @param is поток ввода
    * @param p правильный многоугольник
    */
    friend std::istream& operator>>(std::istream& is, Polygon& p)
    { 
        p.read(is); return is;
    }
};

