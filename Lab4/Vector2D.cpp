//
// Created by mikhail on 23.03.2020.
//
#include "Vector2D.h"
#include <cmath>

Vector2D::Vector2D() {
    x = 0;
    y = 0;
}

Vector2D::Vector2D(double x, double y) {
    this->x = x;
    this->y = y;
}

double Vector2D::length() const {
    return sqrt(x * x + y * y);
}

Vector2D Vector2D::operator+(const Vector2D &point) const {
    return {x + point.x, y + point.y};
}

Vector2D Vector2D::operator-(const Vector2D &point) const {
    return {x - point.x, y - point.y};
}

double Vector2D::operator*(const Vector2D &point)  const {
    return this->x * point.y - this->y * point.x;
}

bool Vector2D::operator<(const Vector2D &point)  const {
    return this->length() < point.length();
}

bool Vector2D::operator==(const Vector2D &point) const {
    return (this->x == point.x && this->y == point.y);
}

void Vector2D::operator+=(const Vector2D& point) {
    this->x += point.x;
    this->y += point.y;
}

Vector2D Vector2D::operator*(const double& k) const {
    return {x * k, y * k};
}

Vector2D Vector2D::operator/(const double &number) const {
    return {x / number, y / number};
}

std::ostream& operator<<(std::ostream& out, const Vector2D& point) {
    return out << "(" << point.x << ", " << point.y << ")";
}