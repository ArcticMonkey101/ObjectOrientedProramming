#include "log_functions.h"
#include <cmath>
#include <stdexcept>


double LogFunctions :: ln(double x) {
    if (x == 0) {
        throw std::runtime_error("ln of zero is undefined");
    }
    return std::log(x);
}

double LogFunctions :: log(double a, double base) {
    if (a <= 0 || base <= 0 || base == 1) {
        throw std::runtime_error("Invalid logarithm arguments");
    }
    return std::log(a) / std::log(base);
}

