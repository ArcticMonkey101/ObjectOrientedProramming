#include "grading.h"

#include <iostream>
#include <limits>


int main() {
    std::string name;
    std::string currentTerm;
    int numSubjects;
    double grade;

    std::cout << "\nStudent Grade Reporting System\n\n";

    std::cout << "Enter student name: ";
    std::getline(std::cin, name);

    std::cout << "Enter current term: ";
    std::getline(std::cin, currentTerm);

    Student student(name, currentTerm);

    std::cout << "Enter number of subjects: ";
    std::cin >> numSubjects;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    for (int i = 0; i < numSubjects; ++i) {
        std::string subjectName;
        std::cout << "\nEnter subject name " << i+1 << ": ";
        std::getline(std::cin, subjectName);

        std::cout << "Enter grade for " << subjectName << ": ";
        std::cin >> grade;

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        student.addGrade(subjectName, grade);
    }

    std::cout << "\n---------------------------------------------------\n";
    std::cout << "\nGrade Report for Term" << currentTerm << ":\n\n";
    student.displayReport();
    std::cout << "\n---------------------------------------------------\n";

    return 0;
}
