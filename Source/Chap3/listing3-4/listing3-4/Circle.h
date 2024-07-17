#pragma once
#include "Shape.h"


class Circle :
    public Shape
{
public:
    string draw() const override;
};

