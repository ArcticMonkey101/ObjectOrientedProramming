#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
    Calculator();

    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    double divide(double a, double b);
    double percentage(double a, double percentage);

private:
    // Private member variables or helper functions if needed
};

#endif // CALCULATOR_H
