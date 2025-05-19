#include "Circle.h"
#include <stdexcept>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

Circle::Circle(const Point& Center, const double& R) : Center{ Center }, R{ R }
{
	if (R <= 0)
	{
		throw logic_error("Фигура не является окружностью");
	}
}

double Circle::get_R() const
{
	return R;
}

double Circle::calc_S() const
{
	return M_PI * pow(get_R(), 2);
}

double Circle::calc_C() const
{
	return 2 * M_PI * get_R();
}