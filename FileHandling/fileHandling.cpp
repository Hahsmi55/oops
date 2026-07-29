#include<iostream>
#include<fstream>
using namespace std;

class Student
{
    private :
    int rollno, age;
    string name;

    public:
    
    void input()
    {
        cout << "Enter rollno, name and age of the student" << endl;
        cin >> rollno >> name >> age;
    }

    void save()
    {
        ofstream file("data.txt", ios::app);

        if (!file.is_open())
        {
            cout << "File has not opened " << endl;
        }


        file << "ROLLNO : " << rollno << endl;
        file << "NAME : " << name << endl;
        file << "AGE : " << age << endl;

        file.close();
    }

    void display()
    {
        string line;

        ifstream filebuf("data.txt");
        
        if (!filebuf.is_open())
        {
            cout << "File has not opened " << endl;
        }
        
        while (getline(filebuf, line))
        {
            cout << line << endl;
        }
        
    }
};

int main()
{
    Student s;
    s.input();
    s.save();
    s.display();
}
