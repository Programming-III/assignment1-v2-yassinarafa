#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"

using namespace std;

class Student : public Person{
private:
    int yearLevel;
    string major;    
public:
    Student(string n,int id,int y,string m);
    void display();
    ~Student();
};

#endif
