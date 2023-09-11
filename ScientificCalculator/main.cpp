#include <iostream>
#include "calculator.h"
#include "math_functions.h"
#include "log_functions.h"

int main() {
    Calculator<int> intCalculator;
    Calculator<double> doubleCalculator;
    MathFunctions<int> intmathFunctions;
    MathFunctions<double> doublemathFunctions;
    LogFunctions<double> doublelogFunctions;

    int a = 10, b = 5;
    double x = 12.5, y = 2.5;

    std::cout << "Int Calculator:" << std::endl;
    std::cout << "Num 1 is : " << a << std::endl;
    std::cout << "Num 2 is : " << b << std::endl;
    std::cout << "\nAddition: " << intCalculator.add(a, b) << std::endl;
    std::cout << "Subtraction: " << intCalculator.subtract(a, b) << std::endl;
    std::cout << "Multiplication: " << intCalculator.multiply(a, b) << std::endl;
    std::cout << "Division: " << intCalculator.divide(a, b) << std::endl;
    std::cout << "Percentage: " << intCalculator.percentage(a, b) << std::endl;

    int a_log = 100, base_log = 10;
    std::cout << "\nLog : " << doublelogFunctions.log(a_log, base_log) << std::endl; // Use logFunctions

    std::cout << "\nDouble Calculator:" << std::endl;
    std::cout << "Num 1 is : " << x << std::endl;
    std::cout << "Num 2 is : " << y << std::endl;
    std::cout << "\nAddition: " << doubleCalculator.add(x, y) << std::endl;
    std::cout << "Subtraction: " << doubleCalculator.subtract(x, y) << std::endl;
    std::cout << "Multiplication: " << doubleCalculator.multiply(x, y) << std::endl;
    std::cout << "Division: " << doubleCalculator.divide(x, y) << std::endl;
    std::cout << "Percentage: " << doubleCalculator.percentage(x, y) << std::endl;

    // Additional cases for math functions
    double sqrt_value = doublemathFunctions.squareRoot(25.0);
    double power_value = doublemathFunctions.power(2.0, 3.0);
    double square_value = doublemathFunctions.square(4.0);

    std::cout << "\nMath Functions:" << std::endl;
    std::cout << "Square Root of 25: " << sqrt_value << std::endl;
    std::cout << "2^3: " << power_value << std::endl;
    std::cout << "Square of 4: " << square_value << std::endl;

    return 0;
}
