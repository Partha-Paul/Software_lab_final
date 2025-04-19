#ifndef vehicle_H
#define vehicle_H

#include <iostream>
using namespace std;

class vehicle {
public:
    virtual float type() const = 0;
    virtual ~vehicle() {}
};

class car : public vehicle {

public:
    float type() const override;
};

class bike : public vehicle {
public:
    float type() const override;
};

class truck : public vehicle {
public:
    float type() const override;
};

#endif
