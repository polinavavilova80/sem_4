//square.h
#pragma once
#include "shape2d.h"

class Square : public Shape2D {
private:
    float side;
public:
    Square(float side);
    virtual void Scale(float scaleFactor);
    virtual void ShowInfo();
    virtual std::string GetName();
    virtual void CalculateArea();
};