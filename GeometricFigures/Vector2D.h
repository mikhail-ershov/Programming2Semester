//
// Created by mikhail on 23.03.2020.
//

#ifndef LAB4_VECTOR2D_H
#define LAB4_VECTOR2D_H

#include <iostream>

class Vector2D{
public:
    double x, y;
    Vector2D();
    Vector2D(double x, double y);
    double length() const;
    Vector2D operator+(const Vector2D& point) const;
    Vector2D operator-(const Vector2D& point) const;
    double operator*(const Vector2D& point) const;
    bool operator<(const Vector2D& point) const;
    bool operator==(const Vector2D& point) const;
    void operator+=(const Vector2D& point);
    Vector2D operator*(const double& k) const;
    Vector2D operator/(const double& number) const;
};

std::ostream& operator<<(std::ostream&, const Vector2D&);

#endif //LAB4_VECTOR2D_H
