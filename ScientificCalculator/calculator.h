#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <stdexcept>
#include <iostream>

template <typename T>
class Calculator {
public:
    T add(T a, T b);
    T subtract(T a, T b);
    T multiply(T a, T b);
    T divide(T a, T b);
    T percentage(T a, T b);

};

#endif