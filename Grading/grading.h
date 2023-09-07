#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>

class Student {

    private:
        std::string name;
        std::string term;
        std::vector<std::string> subjects;
        std::vector<double> grades;
        double totalMarks;
        int numSubjects;

    public:
        Student(const std::string& name, const std::string& term);

        void addGrade(const std::string& subjectName, double grade);

        double getAverageGrade() const;

        bool isPass() const;

        void displayReport() const;


};

#endif // STUDENT_H
