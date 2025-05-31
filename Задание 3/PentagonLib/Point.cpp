#include "Point.h"

Point::Point(double x, double y) : x(x), y(y) 
{
}

double Point::getX() const 
{ 
    return x; 
}
double Point::getY() const 
{
    return y; 
}

bool Point::operator==(const Point& other) const 
{
    return std::abs(x - other.x) < std::numeric_limits<double>::epsilon() 
        && std::abs(y - other.y) < std::numeric_limits<double>::epsilon();
}

bool Point::operator!=(const Point& other) const 
{
    return !(*this == other);
}

double Point::distanceTo(const Point& other) const 
{
    return std::sqrt((x - other.x) * (x - other.x) + (y - other.y) * (y - other.y));
}

std::ostream& operator<<(std::ostream& os, const Point& p) 
{
    os << "(" << p.x << ", " << p.y << ")";
    return os;
}

std::istream& operator>>(std::istream& is, Point& p) {
    is >> p.x >> p.y;
    return is;
}
