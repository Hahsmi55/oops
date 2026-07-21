# Inheritance in C++

## Project Title
Inheritance in C++: Demonstration of Base and Derived Classes

## Brief Description
This project demonstrates the concept of inheritance in C++ using a simple program. It shows how a derived class inherits the properties and behaviors of a base class, while also illustrating the order in which constructors and destructors are called during object creation and destruction.

## What is Inheritance?
Inheritance is one of the fundamental concepts of Object-Oriented Programming (OOP) that allows one class to acquire the data members and member functions of another class. It promotes code reusability, extensibility, and establishes an "is-a" relationship between classes. In C++, inheritance enables programmers to build new classes based on existing ones with minimal code duplication.

## Features of the Program
- Demonstrates single inheritance in C++.
- Shows the relationship between a base class and a derived class.
- Illustrates how inherited members are accessed by the derived class.
- Demonstrates constructor call sequence during object creation.
- Demonstrates destructor call sequence during object destruction.
- Uses object-oriented programming principles for better code organization.

## Project Structure
```
Inheritance/
│── inheritance.cpp          # Main source code
│── README.md         # Project documentation
```

## How to Compile and Run

### Using g++
Compile the program:
```bash
g++ main.cpp -o inheritance
```

Run the executable:
```bash
./inheritance
```

### On Windows (MinGW)
```bash
g++ main.cpp -o inheritance.exe
inheritance.exe
```

## Sample Output
```text
Base class constructor called.
Derived class constructor called.

Displaying inherited and derived class data...

Derived class destructor called.
Base class destructor called.
```

> **Note:** The exact output may vary depending on your implementation.
> Also implement yourself multiple and multilevel inheritace.

## Concepts Demonstrated
- Object-Oriented Programming (OOP)
- Classes and Objects
- Single Inheritance
- Base and Derived Classes
- Access Specifiers in Inheritance
- Constructor and Destructor Call Sequence
- Code Reusability
- Function Inheritance

## Author

Abdullah