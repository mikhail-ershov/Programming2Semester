//
// Created by mikhail on 23.03.2020.
//

#ifndef LAB4_ISOSCELESTRAPEZOID_H
#define LAB4_ISOSCELESTRAPEZOID_H

#include "Figure.h"

class IsoscelesTrapezoid: public Figure {
private:
    Vector2D points[4];
    void check();
public:
    IsoscelesTrapezoid();
    IsoscelesTrapezoid(Vector2D a, Vector2D b, Vector2D c, Vector2D d);
    //BaseObject:
    const char* classname() const override;
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

#endif //LAB4_ISOSCELESTRAPEZOID_H
