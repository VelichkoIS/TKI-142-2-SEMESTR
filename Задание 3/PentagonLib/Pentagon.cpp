#define _USE_MATH_DEFINES
#include "Pentagon.h"
#include <sstream>
#include <cmath>
#include <stdexcept>
#include <limits>

using namespace std;

Pentagon::Pentagon(const array<Point, 5>& verts) : verts(verts) {
    side = verts[0].distanceTo(verts[1]);
    validateSides();
}

double Pentagon::getSide() const
{
    return side;
}

void Pentagon::validateSides() 
{
    for (size_t i = 0; i < 5; ++i) 
    {
        size_t j = (i + 1) % 5;
        double s = verts[i].distanceTo(verts[j]);
        if (s <= 0) 
            throw logic_error("Длина стороны должна быть положительной.");
        else if (abs(s - side) > numeric_limits<double>::epsilon())
        {
            throw logic_error("Все стороны должны быть равны");
        }
    }
}

string Pentagon::ToString() const 
{
    ostringstream ss;
    ss << "Пятиугольник: ";
    for (size_t i = 0; i < 5; ++i) {
        ss << verts[i];
        if (i < 4) ss << ", ";
    }
    return ss.str();
}

double Pentagon::Area() const 
{
    return (5.0 / 4.0) * pow(side,2) *(1.0 / tan(M_PI / 5.0));
}

double Pentagon::Perimeter() const 
{
    return 5 * side;
}

double Pentagon::CircumscribedRadius() const 
{
    return side / (2 * sin(M_PI / 5.0));
}

void Pentagon::read(istream& is) {
    for (Point& v : verts)
        is >> v;
    side = verts[0].distanceTo(verts[1]);
    validateSides();
}

bool Pentagon::operator==(const Pentagon& other) const 
{ 
    return verts == other.verts;
}

bool Pentagon::operator!=(const Pentagon& other) const 
{
    return !(*this == other); 
}
