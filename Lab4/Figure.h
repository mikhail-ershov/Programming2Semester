//
// Created by mikhail on 23.03.2020.
//

#ifndef LAB4_FIGURE_H
#define LAB4_FIGURE_H

#include "BaseObject.h"
#include "DialogInitiable.h"
#include "GeoFig.h"
#include "PhysObject.h"
#include "Printable.h"

class Figure: public BaseObject, public DialogInitiable, public GeoFig, public PhysObject, public Printable {};

#endif //LAB4_FIGURE_H
