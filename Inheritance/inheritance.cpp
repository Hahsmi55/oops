#include<iostream>
using namespace std;

class Base
{
    public:
     Base()
     {
        cout << "Base constructor" << endl;        
     }

     ~ Base()
     {
        cout << "Base destructor" << endl;
     }

     void whichClass()
     {
        cout << "Base class" << endl;
     }
};

class Derived : public Base
{
    public:
     Derived()
     {
        cout << "Derived constructor" << endl;
     }

     ~ Derived()
     {
        cout << "Derived destructor" << endl;
     }
};

int main(){

   Derived* derived = new Derived();
   derived->whichClass();

   delete derived;
}