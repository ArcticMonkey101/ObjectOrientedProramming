#include <iostream>
#include "calculator.h"
#include "math_functions.h" // Include the math functions header
#include "log_functions.h"  // Include the log functions header

int main() {
    Calculator<int> intCalculator;
    Calculator<double> doubleCalculator;
    LogFunctions logFunctions;
    MathFunctions mathFunctions;

    int choice;
    char operation;
    int a, b;
    double x, y;
    int a_log, base_log;

    std::cout << "Calculator Menu:" << std::endl;
    std::cout << "1. Addition" << std::endl;
    std::cout << "2. Subtraction" << std::endl;
    std::cout << "3. Multiplication" << std::endl;
    std::cout << "4. Division" << std::endl;
    std::cout << "5. Percentage" << std::endl;
    std::cout << "6. Square Root" << std::endl;
    std::cout << "7. Power" << std::endl;
    std::cout << "8. Natural Logarithm (ln)" << std::endl;
    std::cout << "9. Logarithm (log)" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            operation = '+';
            break;
        case 2:
            operation = '-';
            break;
        case 3:
            operation = '*';
            break;
        case 4:
            operation = '/';
            break;
        case 5:
            operation = '%';
            break;
        case 6:
            operation = 's'; // Square Root
            break;
        case 7:
            operation = 'p'; // Power
            break;
        case 8:
            operation = 'l'; // ln
            break;
        case 9:
            operation = 'g'; // log
            break;
        default:
            std::cerr << "Invalid choice." << std::endl;
            return 1;
    }

    std::cout << "Enter Num 1: ";
    if (choice >= 6) {
        // For square root, power, ln, and log, we need only one input
        if (choice != 8 && choice != 9) {
            std::cin >> x;
        } else {
            std::cin >> a_log;
        }
    } else {
        std::cin >> a;
    }

    if (choice != 6 && choice != 8 && choice != 9) {
        // For square root, ln, and log, we don't need the second input
        std::cout << "Enter Num 2: ";
        std::cin >> b;
    }

    // Perform the selected operation based on user choice
    switch (operation) {
        case '+':
            std::cout << "Result: " << intCalculator.add(a, b) << std::endl;
            break;
        case '-':
            std::cout << "Result: " << intCalculator.subtract(a, b) << std::endl;
            break;
        case '*':
            std::cout << "Result: " << intCalculator.multiply(a, b) << std::endl;
            break;
        case '/':
            std::cout << "Result: " << intCalculator.divide(a, b) << std::endl;
            break;
        case '%':
            std::cout << "Result: " << intCalculator.percentage(a, b) << std::endl;
            break;
        case 's':
            std::cout << "Result: " << mathFunctions.squareRoot(x) << std::endl;
            break;
        case 'p':
            std::cout << "Result: " << mathFunctions.power(x, y) << std::endl;
            break;
        case 'l':
            std::cout << "Result: " << logFunctions.ln(a_log) << std::endl;
            break;
        case 'g':
            std::cout << "Result: " << logFunctions.log(a_log, base_log) << std::endl;
            break;
        default:
            std::cerr << "Invalid operation." << std::endl;
            return 1;
    }

    return 0;
}
