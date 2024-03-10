#include <iostream>
#include "triangle_pyramid.h"
#include "square.h"
#include "triangle.h"
#include "circle.h"
#include "cylinder.h"
#include "sphere.h"

int main() {
    TrianglePyramid pyramid(3, 4, 5);
    pyramid.CalculateVolume();
    pyramid.CalculateSurfaceArea();
    pyramid.mShowInfo();

    Cylinder cylinder(3, 5);
    cylinder.CalculateVolume();
    cylinder.CalculateSurfaceArea();
    cylinder.ShowInfo();
    
    Sphere sphere(4);
    sphere.CalculateVolume();
    sphere.CalculateSurfaceArea();
    sphere.ShowInfo();

    Square square(5);
    square.CalculateArea();
    square.ShowInfo();

    Triangle triangle(3, 4);
    triangle.CalculateArea();
    triangle.ShowInfo();
    
    Circle circle(4);
    circle.CalculateArea();
    circle.ShowInfo();

    return 0;
}

