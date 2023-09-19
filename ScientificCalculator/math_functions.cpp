#include "math_functions.h"
#include <cassert>
#include <cmath>
#include <iostream>
#include <stdexcept>


// double MathFunctions :: squareRoot(double x) {
//     if (x < 0) {
//         throw std::runtime_error("Square root of a negative number");
//     }
//     return std::sqrt(x);
// }

double squareRoot(double x) {
    try {
        if (x < 0) {
            throw std::runtime_error("Square root of a negative number");
        }
        return std::sqrt(x);
    } catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        throw;
    }
    }

double MathFunctions :: power(double base, double exponent) {
    return std::pow(base, exponent);
}

double MathFunctions :: square(double x) {
    return x * x;
}


