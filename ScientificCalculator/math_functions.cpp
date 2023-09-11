#include "math_functions.h"
#include <cmath>
#include <stdexcept>

double MathFunctions :: squareRoot(double x) {
    if (x < 0) {
        throw std::runtime_error("Square root of a negative number");
    }
    return std::sqrt(x);
}

double MathFunctions :: power(double base, double exponent) {
    return std::pow(base, exponent);
}

double MathFunctions :: square(double x) {
    return x * x;
}


