#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include "person.h"
#include <iostream>
using namespace std;

class Instructor : public Person{
private:
    string department;
    int experienceYears;   
public:
    Instructor(string n, int id, string d, int e);
    void display();
};

#endif
