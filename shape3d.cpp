//shape3d.cpp
#include "shape3d.h"

float Shape3D::GetVolume() {
    return volume;
}

bool Shape3D::operator>(const Shape3D& other) {
    return volume > other.volume;
}

bool Shape3D::operator<(const Shape3D& other) {
    return volume < other.volume;
}

bool Shape3D::operator==(const Shape3D& other) {
    return volume == other.volume;
}