#include <cassert>

#include "Vehicle.h"


Vehicle::Vehicle() {
    speed = 0;
    gear = 0;
}
Vehicle::~Vehicle() {}

void Vehicle::accelerate() {
    speed += 10;
}

void Vehicle::brake() {
    if (speed >= 10) {
        speed -= 10;
    } else {
        throw "The vehicle has already stopped!";
    }
}

void Vehicle::gearShift(int newGear) {
    if (newGear >= -1 && newGear <= 5) {
        gear = newGear;
    } else {
        assert("Invalid gear value!");
    }
}

int Vehicle::getSpeed() const {
    return speed;
}

int Vehicle::getGear() const {
    return gear;
}

void Vehicle::displayInformation() {
    std::cout << "\nVehicle Information: " << std::endl;
    std::cout << "Speed: " << getSpeed() << " km/h" << std::endl;
    std::cout << "Gear: " << getGear() << std::endl;
}

