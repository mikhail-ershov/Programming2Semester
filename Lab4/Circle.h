//
// Created by mikhail on 23.03.2020.
//

#ifndef LAB4_CIRCLE_H
#define LAB4_CIRCLE_H

#include "Figure.h"

class Circle: public Figure {
private:
    Vector2D center;
    double radius;
public:
    Circle();
    Circle(Vector2D center, double radius);
    //BaseObject:
    const char* classname() const  override;
    unsigned int size() const override;
    //DialogInitiable:
    void initFromDialog() override;
    //GeoFig:
    double square() const override;
    double perimeter() const override;
    //PhysObject
    double mass() const override;
    Vector2D position() const override;
    bool operator==(const PhysObject& ob) const override;
    bool operator<(const PhysObject& ob) const override;
    //Printable:
    void draw() const override;
};

#endif //LAB4_CIRCLE_H
