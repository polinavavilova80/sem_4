//sphere.cpp
#include "sphere.h"
#include <cmath>
#include <iostream>

Sphere::Sphere(float radius) : radius(radius) {}

void Sphere::Scale(float scaleFactor) {
    radius *= scaleFactor;
}

void Sphere::ShowInfo() {
    std::cout << "Я сфера!" << std::endl;
    std::cout << "Мой объем = " << volume << std::endl;
    std::cout << "Мой радиус = " << radius << std::endl;
}

std::string Sphere::GetName() {
    return "Sphere";
}

void Sphere::CalculateVolume() {
    volume = (4.0/3.0) * M_PI * radius * radius * radius;
}