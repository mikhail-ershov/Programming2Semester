//
// Created by mikhail on 23.03.2020.
//

#ifndef LAB4_BASEOBJECT_H
#define LAB4_BASEOBJECT_H

class BaseObject{
public:
    virtual const char* classname() const = 0;
    virtual unsigned int size() const = 0;
};

#endif //LAB4_BASEOBJECT_H
