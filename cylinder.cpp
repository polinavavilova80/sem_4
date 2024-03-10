//cylinder.cpp
#include "cylinder.h"
#include <iostream>

Cylinder::Cylinder(float height) : height(height) {}

void Cylinder::Scale(float scaleFactor) {
    height *= scaleFactor;
}

void Cylinder::ShowInfo() {
    std::cout << "Я цилиндр!" << std::endl;
    std::cout << "Мой объем = " << volume << std::endl;
    std::cout << "Моя высота = " << height << std::endl;
}

std::string Cylinder::GetName() {
    return "Cylinder";
}

void Cylinder::CalculateVolume() {
    volume = GetArea() * height;
}