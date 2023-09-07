#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student {

    private:
        std::string name;
        int age;
        double grade;

    public:
        Student(const std::string& name, int age, double grade);

        bool isAdmissible() const;

        void displayInfo() const;

};

#endif // STUDENT_H
