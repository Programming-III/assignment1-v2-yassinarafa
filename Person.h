#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;

class Person{
private:
    string name;
    int id;    
public:
    Person(string n,int id);
    void display();
    void setName(string name);
    string getName();
    void setID(int id);
    int getID();
    ~Person();
};

#endif
