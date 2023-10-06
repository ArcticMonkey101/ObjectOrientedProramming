#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"


class Car : public Vehicle {
private:
    std::string brand;

public:

    //default constructor
    Car() {
        brand = "Unknown";
        speed = 0;
        gear = 0;
    }

    Car(const std::string& brand);
    Car(const std::string& brand, int initialSpeed, int initialGear);
    ~Car();

    void setBrand(const std::string& brand);
    std::string getBrand();
};

#endif
