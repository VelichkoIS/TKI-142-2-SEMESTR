#pragma once
#include <string>
class RegularPolygon
{
	public:
		virtual std::string ToString() const = 0;
		virtual double calc_P(const double& side, const double number) const;
		virtual double calc_S(const double& P, const double& apothema) const;
		virtual double calc_R_of_circumscribed_circle(const double& side, const double& number) const;
		virtual double read() const;
		virtual ~RegularPolygon() = default;
};

