//square.cpp
#include "square.h"
#include <iostream>

Square::Square(float side) : side(side) {}

void Square::Scale(float scaleFactor) {
    side *= scaleFactor;
}

void Square::ShowInfo() {
    std::cout << "Я квадрат!" << std::endl;
    std::cout << "Моя площадь = " << area << std::endl;
    std::cout << "Длина моей стороны = " << side << std::endl;
}

std::string Square::GetName() {
    return "Square";
}

void Square::CalculateArea() {
    area = side * side;
}