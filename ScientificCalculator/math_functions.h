#ifndef MATH_FUNCTIONS_H
#define MATH_FUNCTIONS_H

#include <stdexcept>
#include <cmath>

template <typename T>
class MathFunctions {
public:
    static T squareRoot(T x);
    static T power(T base, T exponent);
    static T square(T x);
};

#endif // MATH_FUNCTIONS_H
