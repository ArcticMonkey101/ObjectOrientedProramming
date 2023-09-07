#include <iostream>
#include <string>

class Student {
public:
    Student(
        const std::string& name,
        int age,
        double grade)
        :
        name(name),
        age(age),
        grade(grade) {}

    bool isAdmissible() const {
        return (age >= 18) && (grade >= 70.0);
    }

    void displayInfo() const {
        std::cout << "Name: " << name << "\n";
        std::cout << "Age: " << age << "\n";
        std::cout << "Grade: " << grade << "\n";
        if (isAdmissible()) {
            std::cout << "Admission Status: Admissible\n";
        } else {
            std::cout << "Admission Status: Not Admissible\n";
        }
    }

private:
    std::string name;
    int age;
    double grade;
};

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
