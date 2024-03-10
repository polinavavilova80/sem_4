//circle.cpp
#include "circle.h"
#include <cmath>
#include <iostream>

Circle::Circle(float radius) : radius(radius) {}

void Circle::Scale(float scaleFactor) {
    radius *= scaleFactor;
}

void Circle::ShowInfo() {
    std::cout << "Я круг!" << std::endl;
    std::cout << "Моя площадь = " << area << std::endl;
    std::cout << "Мой радиус = " << radius << std::endl;
}

std::string Circle::GetName() {
    return "Circle";
}

void Circle::CalculateArea() {
    area = M_PI * radius * radius;
}