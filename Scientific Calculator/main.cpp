#include <iostream>
#include "calculator.h"

int main() {
    Calculator<int> intCalculator;
    Calculator<double> doubleCalculator;

    int a = 10, b = 5;
    double x = 12.5, y = 2.5;

    std::cout << "Int Calculator:" << std::endl;
    std::cout << "Addition: " << intCalculator.add(a, b) << std::endl;
    std::cout << "Subtraction: " << intCalculator.subtract(a, b) << std::endl;
    std::cout << "Multiplication: " << intCalculator.multiply(a, b) << std::endl;
    std::cout << "Division: " << intCalculator.divide(a, b) << std::endl;
    std::cout << "Percentage: " << intCalculator.percentage(a, b) << std::endl;

    std::cout << "Double Calculator:" << std::endl;
    std::cout << "Addition: " << doubleCalculator.add(x, y) << std::endl;
    std::cout << "Subtraction: " << doubleCalculator.subtract(x, y) << std::endl;
    std::cout << "Multiplication: " << doubleCalculator.multiply(x, y) << std::endl;
    std::cout << "Division: " << doubleCalculator.divide(x, y) << std::endl;
    std::cout << "Percentage: " << doubleCalculator.percentage(x, y) << std::endl;

    return 0;
}
