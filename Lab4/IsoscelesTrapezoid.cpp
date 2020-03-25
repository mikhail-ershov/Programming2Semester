//
// Created by mikhail on 23.03.2020.
//
#include "IsoscelesTrapezoid.h"
#include <algorithm>
#include <iostream>
#include <cmath>

void IsoscelesTrapezoid::check() {
    if ((points[1] - points[0]).length() != (points[3] - points[2]).length() || (points[2] - points[1]) * (points[3] - points[0]) != 0) {
        throw std::runtime_error("Figure is not an isosceles trapezoid\n");
    }
}

IsoscelesTrapezoid::IsoscelesTrapezoid() {
    points[0] = Vector2D(0, 0);
    points[1] = Vector2D(0, 1);
    points[2] = Vector2D(1, 1);
    points[3] = Vector2D(1, 0);
}

IsoscelesTrapezoid::IsoscelesTrapezoid(Vector2D a, Vector2D b, Vector2D c, Vector2D d) {
    points[0] = a;
    points[1] = b;
    points[2] = c;
    points[3] = d;
    check();
}

const char * IsoscelesTrapezoid::classname() const {
    return "IsoscelesTrapezoid";
}

unsigned int IsoscelesTrapezoid::size() const {
    return sizeof(IsoscelesTrapezoid);
}

double IsoscelesTrapezoid::perimeter() const {
    double s = 0;
    for (int i = 0; i < 3; i++) {
        s += (points[(i + 1) % 4] - points[i]).length();
    }
    return s;
}

double IsoscelesTrapezoid::square() const {
    double a = (points[1] - points[0]).length();
    double base1 = (points[2] - points[1]).length();
    double base2 = (points[3] - points[0]).length();
    double b = std::abs(base1 - base2) / 2.0;
    double height = std::sqrt(a * a - b * b);
    return (base1 + base2) * height / 2.0;
}

double IsoscelesTrapezoid::mass() const {
    return square();
}

Vector2D IsoscelesTrapezoid::position() const {
    Vector2D middle1 = (points[0] + points[1]) / 2;
    Vector2D middle2 = (points[2] + points[3]) / 2;
    return (middle1 + middle2) / 2;
}

bool IsoscelesTrapezoid::operator==(const PhysObject &ob) const {
    return this->mass() == ob.mass();
}

bool IsoscelesTrapezoid::operator<(const PhysObject &ob) const {
    return this->mass() < ob.mass();
}

void IsoscelesTrapezoid::draw() const {
    std::cout << "Points are:\n";
    for (auto & point : points) {
        std::cout << point << "\n";
    }
}

void IsoscelesTrapezoid::initFromDialog() {
    std::cout << "Enter coordinates in a clockwise order starting with left bottom point:\n";
    for (int i = 0; i < 4; i++) {
        std::cin >> points[i].x >> points[i].y;
    }
    check();
}

