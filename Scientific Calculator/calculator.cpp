#include "Calculator.h"

Calculator::Calculator() {
    // Constructor implementation if needed
}

double Calculator::add(double a, double b) {
    return a + b;
}

double Calculator::subtract(double a, double b) {
    return a - b;
}

double Calculator::multiply(double a, double b) {
    return a * b;
}

double Calculator::divide(double a, double b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero");
    }
    return a / b;
}

double Calculator::percentage(double a, double percentage) {
    return (a * percentage) / 100.0;
}
