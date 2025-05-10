#pragma once
#include "RegularPolygon.h"
class Pentagon :
    public RegularPolygon
{
    private:
        double side;
    public:
        double getSide() const;
};

