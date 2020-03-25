//
// Created by mikhail on 23.03.2020.
//
#include "Circle.h"
#include <iostream>
#include <cmath>

Circle::Circle(Vector2D center, double radius) : center(center), radius(radius) {}

Circle::Circle() {
    center = Vector2D(0, 0);
    radius = 1;
}

const char * Circle::classname() const {
    return "Circle";
}

unsigned int Circle::size() const {
    return sizeof(Circle);
}

void Circle::initFromDialog() {
    std::cout << "Enter center coordinates:\n";
    double x, y;
    std::cin >> x >> y;
    this->center = Vector2D(x, y);
    std::cout << "Enter radius:\n";
    std::cin >> this->radius;
}

double Circle::square() const {
    return M_PI * radius * radius;
}

double Circle::perimeter() const {
    return 2.0 * M_PI * radius;
}

Vector2D Circle::position() const {
    return center;
}

double Circle::mass() const {
    return square();
}

bool Circle::operator==(const PhysObject &ob) const {
    return this->mass() == ob.mass();
}

bool Circle::operator<(const PhysObject &ob) const {
    return this->mass() < ob.mass();
}

void Circle::draw() const {
    std::cout << "Center is (" << center.x <<  ", " << center.y << ")\nRadius is " << radius << "\n";
}