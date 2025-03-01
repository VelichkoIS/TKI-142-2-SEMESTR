#include "User.h"

double User::input(std::string messege)
{
	std::cout << messege;
	double value = 0.0;
	std::cin >> value;
	return value;
}