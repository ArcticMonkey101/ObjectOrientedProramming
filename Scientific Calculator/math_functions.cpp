#include "math_functions.h"
#include <cmath>

double squareRoot(double x) {
    if (x < 0) {
        throw std::runtime_error("Square root of a negative number");
    }
    return std::sqrt(x);
}

double power(double base, double exponent) {
    return std::pow(base, exponent);
}

double square(double x) {
    return std::square(x);
}