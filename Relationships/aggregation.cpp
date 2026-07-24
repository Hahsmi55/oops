#include <iostream>
#include <vector>
using namespace std;

class Employee {
public:
    string name;

    Employee(string n) : name(n) {}
};

class Company {
    vector<Employee*> employees;

public:
    void addEmployee(Employee* e) {
        employees.push_back(e);
    }

    void showEmployees() {
        for (auto e : employees)
            cout << e->name << endl;
    }
};

int main() {
    Employee e1("Ali");
    Employee e2("Asad");

    Company c;
    c.addEmployee(&e1);
    c.addEmployee(&e2);

    c.showEmployees();
}