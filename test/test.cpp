#include <gtest/gtest.h>
#include "../src/factory.h"

TEST(VehicleFactoryTest, CarDrive) {
    auto car = VehicleFactory::createVehicle(VehicleType::CAR);
    EXPECT_EQ(car->drive(), "Driving a car");
}
//bug solved
TEST(VehicleFactoryTest, BikeDrive) {
    auto bike = VehicleFactory::createVehicle(VehicleType::BIKE);
    EXPECT_EQ(bike->drive(), "Riding a bike");
}

TEST(VehicleFactoryTest, TruckDrive) {
    auto truck = VehicleFactory::createVehicle(VehicleType::TRUCK);
    EXPECT_EQ(truck->drive(), "Driving a truck");
}
TEST(VehicleFactoryTest, TruckDrive) {
    auto truck = VehicleFactory::createVehicle(VehicleType::truck);
    EXPECT_EQ(truck->drive(), "Driving a truck");
}

