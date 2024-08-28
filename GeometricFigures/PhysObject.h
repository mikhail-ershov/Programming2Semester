//
// Created by mikhail on 23.03.2020.
//

#ifndef LAB4_PHYSOBJECT_H
#define LAB4_PHYSOBJECT_H
#include "Vector2D.h"

class PhysObject{
public:
    virtual double mass() const = 0;
    virtual Vector2D position() const = 0;
    virtual bool operator==(const PhysObject& ob) const = 0;
    virtual bool operator<(const PhysObject& ob) const = 0;
};

#endif //LAB4_PHYSOBJECT_H
