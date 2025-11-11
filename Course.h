#ifndef COURSE_H
#define COURSE_H
#include <iostream>
using namespace std;
#include "student.h"

class Course{
private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudents;    
public:
    Course(string cC, string cN, int mS);
    void addStudent(Student& s);
    void displayCourseInfo();
    ~Course();
};

#endif
