//triangle.cpp
#include "triangle.h"
#include <iostream>

Triangle::Triangle(float base, float height) : base(base), height(height) {}

void Triangle::Scale(float scaleFactor) {
    base *= scaleFactor;
    height *= scaleFactor;
}

void Triangle::ShowInfo() {
    std::cout << "Я треугольник!" << std::endl;
    std::cout << "Моя площадь = " << area << std::endl;
    std::cout << "Длина моего основания = " << base << std::endl;
    std::cout << "Моя высота = " << height << std::endl;
}

std::string Triangle::GetName() {
    return "Triangle";
}

void Triangle::CalculateArea() {
    area = 0.5 * base * height;
}