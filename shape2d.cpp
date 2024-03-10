//shape2d.h
#pragma once
#include "shape.h"

class Shape2D : public Shape {
protected:
    float area;
public:
    float GetArea();
    bool operator>(const Shape2D& other);
    bool operator<(const Shape2D& other);
    bool operator==(const Shape2D& other);
    virtual void CalculateArea() = 0;
}