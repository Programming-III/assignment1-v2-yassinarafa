#include <iostream>
#include "person.h"
#include "student.h"
#include "instructor.h"
#include "course.h"


using namespace std;

Person::Person(string n,int id){
    name =n;
    this->id=id;
}
void Person::display(){
    cout<<"Name: " << name << endl;
    cout<<"ID: " << id << endl;
}

Student::Student(string n,int id,int y,string m) : Person(n,id){
    yearLevel=y;
    major=m;
}
void Student::display(){
    display();
    cout<<"Year Level: "<< yearLevel << endl;
    cout<<"Major: "<< major << endl;
}
Instructor::Instructor(string n,int id,string d,int e): Person(n,id){
    department=d;
    experienceYears=e;
}
void Instructor::display(){
    display();
    cout<<"Department: "<< department << endl;
    cout<<"Experience Years: "<< experienceYears << endl;
}

Course::Course(string cC, string cN, int mS){
    courseCode=cC;
    courseName=cN;
    maxStudents=mS;
    students=nullptr;
    currentStudents=0;   
}

void Course::addStudent(Student& s){
    if(currentStudents>=maxStudents){
        cout<< "Course is full." << endl;
    }
    else{
        students[currentStudents] = s;
        currentStudents++;
    }
}
void Course::displayCourseInfo(){
    cout << "Course Code: " + courseCode<< endl;
    cout << "Course Name: " + courseName<< endl;
    cout << "Course max students: " + maxStudents<< endl;
    cout << "Course current students: " + currentStudents<< endl;
    for(int i =0; i<currentStudents;i++){
        cout << "Student " + i << ":" + students[i].display() << endl;
    }

}

int main(){ 
Student s("yassin",223,12,"CS");
Instructor i("Mohamed", 229,"CS", 10);
Course c("PROG3","Programming",100);
cout<< "Student INFO: " << endl;
s.display();
cout<< "Instructor INFO: "<< endl;
i.display();
cout<< "Course INFO: " << endl;
c.displayCourseInfo();



return 0; 
};
    

    
