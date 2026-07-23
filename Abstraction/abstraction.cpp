#include<iostream>
using namespace std;

class Shape
{
    public :
    virtual void draw() = 0;
};

class Circle : public Shape
{
    public :

    void draw() override {
        cout << "Circle is being draw" << endl;
    }
};

class Triangle : public Shape
{
    public :

    void draw() override {
        cout << "Triangle is being draw" << endl;
    }
};

int main()
{
    Shape* s;
    Circle c;
    Triangle t;
    s = &c;
    s->draw();
    s = &t;
    s->draw();
}