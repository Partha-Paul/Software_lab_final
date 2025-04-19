#ifndef FACTORY_H
#define FACTORY_H

#include "shape.h"
#include <memory>
#include <string>

class ShapeFactory {
public:
    static Shape* createShape(const string& type, float a, float b = 0);
};

#endif
