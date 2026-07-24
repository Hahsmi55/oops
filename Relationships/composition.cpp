#include<iostream>
using namespace std;

class Engine
{
    public:

    Engine()
    {
        cout << "Engine is created" << endl;
    }

    ~ Engine()
    {
        cout << "Engine is destroyed" << endl;
    }

    void start()
    {
        cout << "Engine is starting" << endl;
    }
};

class Car
{
    public:
    Engine engine;

    Car()
    {
        cout << "Car is created" << endl;
    }

    ~ Car()
    {
        cout << "Car is destroyed" << endl;
    }

    void startCar()
    {
        engine.start();
        cout << "Car is starting" << endl;
    }
};

int main()
{
    Car* c = new Car();
    c->startCar();

    delete c;
}