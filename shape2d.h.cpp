//shape2d.cpp
#include "shape2d.h"

float Shape2D::GetArea() {
    return area;
}

bool Shape2D::operator>(const Shape2D& other) {
    return area > other.area;
}

bool Shape2D::operator<(const Shape2D& other) {
    return area < other.area;
}

bool Shape2D::operator==(const Shape2D& other) {
    return area == other.area;
}