#include "factory.h"

Shape* ShapeFactory::createShape(const string& type, float a, float b) {
    if (type == "circle") {
        return new Circle(a);
    } else if (type == "rectangle") {
        return new Rectangle(a, b);
    } else if (type == "triangle") {
        return new Triangle(a, b);
    } else {
        return nullptr;
    }
}
