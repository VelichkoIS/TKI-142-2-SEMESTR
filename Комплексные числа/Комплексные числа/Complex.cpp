#include <cmath>
#include "Complex.h"

Complex::Complex(const double re = 0, const double im = 0):
im{ im }, re{re}
{
}

double Complex::get_module() const
{
	return std::sqrt(re * re + im * im);
}

double Complex::get_Angle() const
{
	return atan(im / re);
}

double Complex::getSum(const Complex& other)
{
	double newRe = re + other.Re;
	double newIm = im + other.Im;
	return Complex(newRe, newIm);
}

bool isEcual(const Complex& other)
{
	return re == other.re && im == other.im
}