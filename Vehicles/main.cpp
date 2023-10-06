#include <iostream>
#include <memory>
#include "car.h"

int main() {
    try {
        std::unique_ptr<Car> car(new Car("Toyota"));

        std::cout << "Initial Car Information:" << std::endl;
        car->displayInformation();

        // Display the car's brand
        std::cout << "Car Brand: " << car->getBrand() << std::endl;


        car->accelerate();
        car->gearShift(1);

        car->displayInformation();

        car->brake();
        car->displayInformation();

        car->accelerate();
        car->accelerate();
        car->gearShift(3);
        car->displayInformation();

    } catch (const char* errorMessage) {
        std::cerr << "Error: " << errorMessage << std::endl;
    }

    return 0;
}
