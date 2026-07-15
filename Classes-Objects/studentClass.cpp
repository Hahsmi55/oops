#include<iostream>
using namespace std;

class Student
{
    public:
     int rollno, marks;
     string name, degree;

     void display()
     {
        cout << this->rollno << endl;
        cout << this->name << endl;
        cout << this->degree << endl;
        cout << this->marks << endl;
     }
};

int main()
{
    Student s;
    s.rollno = 12;
    s.marks = 80;
    s.name = "Abdullah";
    s.degree = "BSCS";
    s.display();
}