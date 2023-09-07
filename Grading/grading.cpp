#include <iomanip>
#include <iostream>
#include <limits>

#include "grading.h"

Student::Student(
        const std::string& name,
        const std::string& term)
    :
    name(name),
    term(term),
    totalMarks(0),
    numSubjects(0) {}

void Student :: addGrade(const std::string& subjectName, double grade) {
        subjects.push_back(subjectName);
        grades.push_back(grade);
        totalMarks += grade;
        numSubjects++;
        }

double Student ::  getAverageGrade() const {
    return numSubjects > 0 ? totalMarks / numSubjects : 0.0;
    }

bool Student :: isPass() const{
    return getAverageGrade() >= 45.0;
    }

void Student :: displayReport() const {
    std::cout << "Student Name: " << name << "\n";
    std::cout << "Term: " << term << "\n";
    std::cout << "Number of Subjects: " << numSubjects << "\n\n";
    std::cout << "Grades:\n";
    for (int i = 0; i < numSubjects; ++i) {
        std::cout << subjects[i] << ": " << grades[i] << "\n";
    }
    std::cout << "\nAverage Grade: " << std::fixed << std::setprecision(2) << getAverageGrade() << "\n";
    std::cout << "\nPass/Fail: " << (isPass() ? "Pass" : "Fail") << "\n";
    }