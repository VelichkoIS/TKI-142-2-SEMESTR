#pragma once

class Complex
{
private:
	double Re;
	double Im;
public:
	double get_module() const;
	double get_angle() const;
	double getSum(const Complex& other);
	double getDif(const Complex& other);
	double getMul(const Complex& other);
	double getDiv(const Complex& other);
	bool isEcual(const Complex& other);
};