//shape3d.h
#pragma once
#include "shape.h"

class Shape3D : public Shape {
protected:
    float volume;
public:
    float GetVolume();
    bool operator>(const Shape3D& other);
    bool operator<(const Shape3D& other);
    bool operator==(const Shape3D& other);
    virtual void CalculateVolume() = 0;
}