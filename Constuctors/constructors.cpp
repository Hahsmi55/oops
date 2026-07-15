#include<iostream>
using namespace std;

class Laptop
{
    public:
     int generation, ram, storage;
     string os, cpu, gpu;

    Laptop(){
        cout << "non parameterized constructor is called" << endl;
    }

    Laptop(int g, int r, int s, string os, string cpu, string gpu){
        cout << "Parameterized constructor is called" << endl;
        this->generation = g;
        this->ram = r;
        this->storage = s;
        this->cpu = cpu;
        this->os = os;
        this->gpu = gpu;
    }

    Laptop(Laptop& l)
    {
        this->generation = l.generation;
        this->ram = l.ram;
        this->storage = l.storage;
        this->cpu = l.cpu;
        this->os = l.os;
        this->gpu = l.gpu;
    }

    void display()
    {
        cout << this->ram << endl;
        cout << this->storage << endl;
        cout << this->generation << endl;
        cout << this->os << endl;
        cout << this->gpu << endl;
        cout << this->cpu << endl;
    }
};

int main()
{
    Laptop laptop1;
    Laptop laptop2(10, 8, 128, "Linux" , "Intel", "Nvidia");
    Laptop laptop3(laptop2);
    laptop3.display();
}