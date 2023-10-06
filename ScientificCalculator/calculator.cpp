#include "calculator.h"
#include <stdexcept>
#include <iostream>

template <typename T>
T Calculator<T>::add(T a, T b) {
    return a + b;
}

template <typename T>
T Calculator<T>::subtract(T a, T b) {
    return a - b;
}

template <typename T>
T Calculator<T>::multiply(T a, T b) {
    return a * b;
}

// template <typename T>
// T Calculator<T>::divide(T a, T b) {
//     if (b != 0) {
//         return a / b;
//     } else {
//         // Handle division by zero error
//         throw std::runtime_error("Division by zero");
//     }
// }

template <typename T>
T Calculator<T>::divide(T a, T b) {
    try {
        if (b != 0) {
            return a / b;
        } else {
            throw std::runtime_error("Division by zero");
        }
    } catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        throw;
    }
}

template <typename T>
T Calculator<T>::percentage(T a, T b) {
    return (a * b) / 100;
}

// Explicit instantiation for commonly used data types
template class Calculator<int>;
template class Calculator<double>;
