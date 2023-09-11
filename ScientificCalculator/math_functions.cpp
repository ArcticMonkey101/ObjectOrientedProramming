#include "math_functions.h"
#include <cmath>
#include <stdexcept>

template <typename T>
T squareRoot(T x) {
    if (x < 0) {
        throw std::runtime_error("Square root of a negative number");
    }
    return std::sqrt(static_cast<double>(x));
}

template <typename T>
T power(T base, T exponent) {
    return std::pow(static_cast<double>(base), static_cast<double>(exponent));
}

template <typename T>
T square(T x) {
    return x * x;
}
