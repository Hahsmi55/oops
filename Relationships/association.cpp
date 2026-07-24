#include<iostream>
using namespace std;

class Teacher
{
    public:
    string name;

    Teacher(string n){
        this->name = n;
        cout << "Teacher has been created" << endl;
    }
};

class Student
{
    public:
    string name;
    Teacher &teacher;

    Student(Teacher &t, string n) : teacher (t), name (n)
    {
        cout << this->teacher.name << " is teaching " << this->name << endl;
    }


};

int main()
{

    Teacher t("Prof. Amir");
    Student s(t, "Asad");
    
}