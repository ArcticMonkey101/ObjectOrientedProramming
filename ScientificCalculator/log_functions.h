#ifndef LOG_FUNCTIONS_H
#define LOG_FUNCTIONS_H

#include <stdexcept>
#include <cmath>

template <typename T>
class LogFunctions {
public:
    T ln(T x);
    T log(T a, T base);
};

#endif // LOG_FUNCTIONS_H
