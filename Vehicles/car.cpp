#include "car.h"

Car::Car(const std::string& carBrand) {
    brand = carBrand;
}

Car::Car(const std::string& carBrand, int initialSpeed, int initialGear) {
    brand = carBrand;
    speed = initialSpeed;
    gear = initialGear;
}

Car::~Car() {
}

void Car::setBrand(const std::string& carBrand) {
    brand = carBrand;
}

std::string Car::getBrand() {
    return brand;
}
