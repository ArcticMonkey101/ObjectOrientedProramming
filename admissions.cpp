#include "admissions.h"

Student :: Student(
        const std::string& name,
        int age,
        double grade)
        :
        name(name),
        age(age),
        grade(grade) {}

bool Student :: isAdmissible() const {
        return (age >= 18) && (grade >= 70.0);
    }

void Student :: displayInfo() const {
    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n";
    std::cout << "Grade: " << grade << "\n";
    if (isAdmissible()) {
        std::cout << "Admission Status: Admissible\n";
    } else {
        std::cout << "Admission Status: Not Admissible\n";
    }