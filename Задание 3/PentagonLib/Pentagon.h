#pragma once

#include <array>
#include <string>
#include "Polygon.h"

/**
* @brief класс правильного пятиугольника
*/
class Pentagon : public Polygon {
private:
    std::array<Point, 5> verts;
    double side;
    /**
    * @brief проверка пятиугольника на правильность
    */
    void validateSides();
public:
    /**
    * @brief конструктор класса Pentagon
    * @param verts массив из точек
    */
    Pentagon(const std::array<Point, 5>& verts);
    /**
    * @brief возвращает значение поля side
    */
    double getSide() const;
    /**
    * @brief сериализация в строку
    */
    std::string ToString() const override;
    /**
    * @brief расчет площади фигуры
    */
    double Area() const override;
    /**
    * @brief расчет периметра фигуры
    */
    double Perimeter() const override;
    /**
    * @brief расчет радиуса описанной вокруг многоугольника окружности
    */
    double CircumscribedRadius() const override;
    /**
    * @brief чтение из потока ввода
    * @param is поток ввода
    */
    void read(std::istream& is) override;
    /**
    * @brief оператор "равно"
    * @param other правильный пятиугольник
    */
    bool operator==(const Pentagon& other) const;
    /**
    * @brief оператор "не равно"
    * @param other правильный пятиугольник
    */
    bool operator!=(const Pentagon& other) const;
};

