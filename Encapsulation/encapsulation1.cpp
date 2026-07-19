#include<iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollno;
    int marks;
public:
    void setMark(int m){
        if (m >= 0 && m <= 100)
        {
            this->marks = m;
            return;
        }

        cout << "invalid marks" << endl;
    }

    int getMarks(){
        if (this->marks >= 0 && this->marks <=100)
        {
            return this->marks;
        }
        return 0;
    }
};

int main()
{
    Student st1;
    st1.setMark(20);
    int marks = st1.getMarks();
    cout << marks << endl;
    return 0;
}

 