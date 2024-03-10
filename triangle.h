//triangle.h
#pragma once
#include "shape2d.h"

class Triangle : public Shape2D {
private:
    float base;
    float height;
public:
    Triangle(float base, float height);
    virtual void Scale(float scaleFactor);
    virtual void ShowInfo();
    virtual std::string GetName();
    virtual void CalculateArea();
};