#include "log_funtions.h"
#include <cmath>

double ln(double x) {
    if (x = 0) {
        throw std:runtime_error ("ln of zero is undefined");
    }
    return std::ln(x);
}

double log(double a, double base) {
    return std::log(a,base);
}