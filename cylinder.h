//cylinder.h
#pragma once
#include "shape3d.h"

class Cylinder : public Shape3D {
private:
    float height;
public:
    Cylinder(float height);
    virtual void Scale(float scaleFactor);
    virtual void ShowInfo();
    virtual std::string GetName();
    virtual void CalculateVolume();
}