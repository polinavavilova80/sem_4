//triangularpyramid.cpp
#include "triangularpyramid.h"
#include <iostream>

TriangularPyramid::TriangularPyramid(float height) : height(height) {}

void TriangularPyramid::Scale(float scaleFactor) {
    height *= scaleFactor;
}

void TriangularPyramid::ShowInfo() {
    std::cout << "Я треугольная пирамида!" << std::endl;
    std::cout << "Мой объем = " << volume << std::endl;
    std::cout << "Моя высота = " << height << std::endl;
}

std::string TriangularPyramid::GetName() {
    return "TriangularPyramid";
}

void TriangularPyramid::CalculateVolume() {
    volume = (1.0/3.0) * GetArea() * height;
}