//circle.h
#pragma once
#include "shape2d.h"

class Circle : public Shape2D {
private:
    float radius;
public:
    Circle(float radius);
    virtual void Scale(float scaleFactor);
    virtual void ShowInfo();
    virtual std::string GetName();
    virtual void CalculateArea();
};