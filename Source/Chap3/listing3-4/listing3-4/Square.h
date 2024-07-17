#pragma once
#include "Shape.h"


class Square :
    public Shape
{
public:
    string draw() const override;
};

