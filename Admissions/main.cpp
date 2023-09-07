#include "admissions.h"

int main() {
    std::string name;
    int age;
    double grade;

    std::cout << "Student Admission Process\n\n";
    std::cout << "Enter student name: ";
    std::getline(std::cin, name);

    std::cout << "Enter student age: ";
    std::cin >> age;

    std::cout << "Enter student grade: ";
    std::cin >> grade;

    Student student(name, age, grade);

    std::cout << "\nStudent Information:\n";
    student.displayInfo();

    return 0;
}