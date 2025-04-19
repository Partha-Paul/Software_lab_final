#include "factory.h"

std::string Car::drive() const {
    return "Driving a car";
}

std::string Bike::drive() const {
    return "Riding a bike";
}

std::string Truck::drive() const {
    return "Driving a truck";
}

std::unique_ptr<Vehicle> VehicleFactory::createVehicle(VehicleType type) {
    switch (type) {
        case VehicleType::CAR:   return std::make_unique<Car>();
        case VehicleType::BIKE:  return std::make_unique<Bike>();
        case VehicleType::TRUCK: return std::make_unique<Truck>();
        default: return nullptr;
    }
}

