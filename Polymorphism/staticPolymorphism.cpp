#include<iostream>
using namespace std;

class Calculator
{
    public:

    void add(int a, int b)
    {
        cout << "Int addition : " << a+b << endl;
    }

    void add(double a, double b, double c)
    {
        cout << "Double addition : " << a+b+c << endl;
    }
};

int main()
{

    Calculator cal;
    cal.add(2,3);
    cal.add(14.5,14.5, 11.0);

}