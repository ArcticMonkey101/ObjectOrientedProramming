#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "racing.h"

void displayAllCarInfo(const std::vector<Racing*>& cars) {
    std::cout << "\nCar Information:" << std::endl;
    for (int i = 0; i < cars.size(); ++i) {
        std::cout << "Car " << i + 1 << ": Speed " << cars[i]->getSpeed() << " km/h, Gear " << cars[i]->getGear() << std::endl;
    }
    std::cout << "\n" << std::endl;
}

int main() {
    try {
        std::vector<Racing*> cars; // Use a vector of pointers to Racing cars
        std::srand(std::time(nullptr)); // Seed the random number generator

        for (int i = 0; i < 6; ++i) {
            cars.push_back(new Racing()); // Create a new Racing car and add its pointer to the vector
            std::cout << "Car " << i+1 << " \tInitial Speed : " << cars[i]->getSpeed() << std::endl;
        }

        // Display car information before starting the simulation
        displayAllCarInfo(cars);

        // Simulate racing scenario
        for (int i = 0; i < 6; ++i) {
            for (int j = 0; j < 6; ++j) {
                int randomCarIndex = std::rand() % cars.size(); // Choose a random car
                Racing* selectedCar = cars[randomCarIndex];

                selectedCar->accelerate();
                std::cout << "Car " << randomCarIndex + 1 << " speeding up. Current speed: " << selectedCar->getSpeed() << std::endl;
                //std::cout << "Current speed: " << selectedCar->getSpeed() << std::endl;
            }

            for (int j = 0; j < 6; j += 1) {
                int randomCarIndex = std::rand() % cars.size(); // Choose a random car
                Racing* selectedCar = cars[randomCarIndex];

                if (selectedCar->getSpeed() > 0) {
                    selectedCar->brake();
                    std::cout << "Car " << randomCarIndex + 1 << " slowing down. Current speed: " << selectedCar->getSpeed() << std::endl;
                    //std::cout << "Current speed: " << selectedCar->getSpeed() << std::endl;
                }
            }

            // Display car information after each iteration
            displayAllCarInfo(cars);
        }

        int maxSpeed = -1;
        int winningCarNumber = -1;

        // Find the maximum speed among all cars
        for (int j = 0; j < cars.size(); ++j) {
            if (cars[j]->getSpeed() > maxSpeed) {
                maxSpeed = cars[j]->getSpeed();
                winningCarNumber = j + 1;
            }
        }

        // Declare the winner
        std::cout << "The winner is Car " << winningCarNumber << " with a maximum speed of " << maxSpeed << " km/h!" << std::endl;


        // Clean up memory
        for (int i = 0; i < cars.size(); ++i) {
            delete cars[i];
        }
    } catch (const char* errorMessage) {
        std::cerr << "Error: " << errorMessage << std::endl;
    }

    return 0;
}

