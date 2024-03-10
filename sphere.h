//sphere.h
#pragma once
#include "shape3d.h"

class Sphere : public Shape3D {
private:
    float radius;
public:
    Sphere(float radius);
    virtual void Scale(float scaleFactor);
    virtual void ShowInfo();
    virtual std::string GetName();
    virtual void CalculateVolume();
}