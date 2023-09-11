#include "log_functions.h"
#include <cmath>
#include <stdexcept>

template <typename T>
T LogFunctions<T> :: ln(T x) {
    if (x == 0) {
        throw std::runtime_error("ln of zero is undefined");
    }
    return std::log(static_cast<double>(x));
}

template <typename T>
T LogFunctions<T> :: log(T a, T base) {
    if (a <= 0 || base <= 0 || base == 1) {
        throw std::runtime_error("Invalid logarithm arguments");
    }
    return std::log(static_cast<double>(a)) / std::log(static_cast<double>(base));
}
