#include <iostream>
#include "calculator.h"
#include "math_functions.h"
#include "log_functions.h"

int main() {
    // Create Calculator objects using dynamic memory allocation
    Calculator<int>* intCalculator = new Calculator<int>();
    Calculator<double>* doubleCalculator = new Calculator<double>();

    int a = 10, b = 5;
    double x = 12.5, y = 2.5;

    std::cout << "Int Calculator:" << std::endl;
    std::cout << "Num 1 is : " << a << std::endl;
    std::cout << "Num 2 is : " << b << std::endl;
    std::cout << "\nAddition: " << intCalculator->add(a, b) << std::endl;
    std::cout << "Subtraction: " << intCalculator->subtract(a, b) << std::endl;
    std::cout << "Multiplication: " << intCalculator->multiply(a, b) << std::endl;
    std::cout << "Division: " << intCalculator->divide(a, b) << std::endl;
    std::cout << "Percentage: " << intCalculator->percentage(a, b) << std::endl;

    int a_log = 100, base_log = 10;
    LogFunctions* logFunctions = new LogFunctions();
    std::cout << "\nLog : " << logFunctions->log(a_log, base_log) << std::endl;

    std::cout << "\nDouble Calculator:" << std::endl;
    std::cout << "Num 1 is : " << x << std::endl;
    std::cout << "Num 2 is : " << y << std::endl;
    std::cout << "\nAddition: " << doubleCalculator->add(x, y) << std::endl;
    std::cout << "Subtraction: " << doubleCalculator->subtract(x, y) << std::endl;
    std::cout << "Multiplication: " << doubleCalculator->multiply(x, y) << std::endl;
    std::cout << "Division: " << doubleCalculator->divide(x, y) << std::endl;
    std::cout << "Percentage: " << doubleCalculator->percentage(x, y) << std::endl;

    MathFunctions* mathFunctions = new MathFunctions();
    std::cout << "\nMath Functions:" << std::endl;
    std::cout << "Square Root of 25: " << mathFunctions->squareRoot(25.0) << std::endl;
    std::cout << "2^3: " << mathFunctions->power(2.0, 3.0)  << std::endl;
    std::cout << "Square of 4: " << mathFunctions->square(4.0)  << std::endl;

    // Clean up: delete dynamically allocated objects
    delete intCalculator;
    delete doubleCalculator;
    delete logFunctions;
    delete mathFunctions;

    return 0;
}
