#include "grading.h"
#include <iostream>
#include <limits>
#include <vector>

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

    // Dynamically allocate memory for the Student object
    Student* student = new Student(name, currentTerm);

    std::cout << "Enter number of subjects: ";
    std::cin >> numSubjects;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Dynamically allocate memory for subjects and grades using a vector
    std::vector<std::string> subjectNames;
    std::vector<double> subjectGrades;

    for (int i = 0; i < numSubjects; ++i) {
        std::string subjectName;
        std::cout << "\nEnter subject name " << i+1 << ": ";
        std::getline(std::cin, subjectName);

        std::cout << "Enter grade for " << subjectName << ": ";
        std::cin >> grade;

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        subjectNames.push_back(subjectName);
        subjectGrades.push_back(grade);
    }

    // Pass the dynamically allocated subject data to the Student object
    for (size_t i = 0; i < subjectNames.size(); ++i) {
        student->addGrade(subjectNames[i], subjectGrades[i]);
    }

    std::cout << "\n---------------------------------------------------\n";
    std::cout << "\nGrade Report for Term" << currentTerm << ":\n\n";
    student->displayReport();
    std::cout << "\n---------------------------------------------------\n";

    // Clean up: delete dynamically allocated objects
    delete student;

    return 0;
}
