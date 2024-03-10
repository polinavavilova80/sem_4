//triangularpyramid.h
#pragma once
#include "shape3d.h"

class TriangularPyramid : public Shape3D {
private:
    float height;
public:
    TriangularPyramid(float height);
    virtual void Scale(float scaleFactor);
    virtual void ShowInfo();
    virtual std::string GetName();
    virtual void CalculateVolume();
};
