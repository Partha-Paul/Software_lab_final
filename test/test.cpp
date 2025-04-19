#include <gtest/gtest.h>
#include "factory.h"

TEST(VehicleFactoryTest, CarDrive) {
    auto car = VehicleFactory::createVehicle(VehicleType::CAR);
    EXPECT_EQ(car->drive(), "Driving a car");
}

TEST(VehicleFactoryTest, BikeDrive) {
    auto bike = VehicleFactory::createVehicle(VehicleType::BIKE);
    EXPECT_EQ(bike->drive(), "Riding a bike");
}

TEST(VehicleFactoryTest, TruckDrive) {
    auto truck = VehicleFactory::createVehicle(VehicleType::TRUCK);
    EXPECT_EQ(truck->drive(), "Driving a truck");
}

