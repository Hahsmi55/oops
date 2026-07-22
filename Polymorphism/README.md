# Polymorphism in C++

## Project Title
**Polymorphism in C++ – Object-Oriented Programming Demonstration**

## Brief Description
This project demonstrates the concept of **polymorphism** in C++ using inheritance and virtual functions. It shows how a base class pointer can invoke different implementations of the same function in derived classes, enabling dynamic behavior at runtime.

## What is Encapsulation?
Encapsulation is one of the core principles of Object-Oriented Programming (OOP). It is the process of combining data (variables) and the methods (functions) that operate on that data into a single unit called a class. Encapsulation also restricts direct access to an object's data by using access modifiers such as `private`, `protected`, and `public`, improving data security and maintainability.

## Features of Your Program
- Demonstrates runtime polymorphism using virtual functions.
- Uses inheritance between base and derived classes.
- Shows method overriding in derived classes.
- Executes different behaviors through a base class pointer or reference.
- Illustrates dynamic binding in C++.

## Project Structure
```
Polymorphism/
│── staticPolymorphism.cpp          # First source file
│── dynamicPolymorphism.cpp         # Second source file
│── README.md         # Project documentation
```

## How to Compile and Run

### Compile
```bash
g++ dynamicPolymorphism.cpp/staticPolymorphism -o main
```

### Run
```bash
./main
```

## Sample Output

## Dynamic Output
Animal makes a sound.
Dog barks: Woof! Woof!
Cat meows: Meow!

## Static Output

Int addition : 5
Double addition : 40

*(The output may vary depending on your implementation.)*

## What Concepts Are Demonstrated
- Object-Oriented Programming (OOP)
- Classes and Objects
- Inheritance
- Runtime Polymorphism
- Virtual Functions
- Function Overriding
- Dynamic Binding
- Encapsulation

## Author
**Abdullah**