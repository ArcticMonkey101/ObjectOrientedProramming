#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

class Vehicle {

public:
    Vehicle();
    virtual ~Vehicle(); //ensures proper destruction of the object of class car

    void accelerate();
    void brake();
    void gearShift(int newGear);

    int getSpeed() const;
    int getGear() const;
    void displayInformation();

protected:
    int speed;
    int gear;
};

#endif
