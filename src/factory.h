#pragma once
#include <memory>
#include <string>

// Enum needs to be declared before being used in the factory
enum class VehicleType {
    CAR,
    BIKE,
    TRUCK
};

// Base class
class Vehicle {
public:
    virtual std::string drive() const = 0;
    virtual ~Vehicle() = default;
};

// Concrete classes
class Car : public Vehicle {
public:
    std::string drive() const override;
};

class Bike : public Vehicle {
public:
    std::string drive() const override;
};

class Truck : public Vehicle {
public:
    std::string drive() const override;
};

// Factory class
class VehicleFactory {
public:
    static std::unique_ptr<Vehicle> createVehicle(VehicleType type);
};

