#include "log_functions.h"
#include <cmath>
#include <stdexcept>
#include <iostream>


// double LogFunctions :: ln(double x) {
//     if (x == 0) {
//         throw std::runtime_error("ln of zero is undefined");
//     }
//     return std::log(x);
// }

// double LogFunctions :: log(double a, double base) {
//     if (a <= 0 || base <= 0 || base == 1) {
//         throw std::runtime_error("Invalid logarithm arguments");
//     }
//     return std::log(a) / std::log(base);
// }

double LogFunctions::ln(double x) {
    try {
        if (x == 0) {
            throw std::runtime_error("ln of zero is undefined");
        }
        return std::log(x);
    } catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        throw;
    }
}

double LogFunctions::log(double a, double base) {
    try {
        if (a <= 0 || base <= 0 || base == 1) {
            throw std::runtime_error("Invalid logarithm arguments");
        }
        return std::log(a) / std::log(base);
    } catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        throw;
    }
}

