#include <iomanip>
#include <iostream>
#include <limits>
#include <string>
#include <vector>

class Student {
public:
    Student(
        const std::string& name,
        const std::string& term)
    :
    name(name),
    term(term),
    totalMarks(0),
    numSubjects(0) {}

    void addGrade(const std::string& subjectName, double grade) {
        subjects.push_back(subjectName);
        grades.push_back(grade);
        totalMarks += grade;
        numSubjects++;
    }

    double getAverageGrade() const {
        return numSubjects > 0 ? totalMarks / numSubjects : 0.0;
    }

    bool isPass() const{
        return getAverageGrade() >= 45.0;
    }

    void displayReport() const {
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

private:
    std::string name;
    std::string term;
    std::vector<std::string> subjects;
    std::vector<double> grades;
    double totalMarks;
    int numSubjects;
};

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


