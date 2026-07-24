# Relationships Between Classes in C++

## Brief Description
This project demonstrates the three fundamental types of relationships between classes in Object-Oriented Programming (OOP): **Association**, **Aggregation**, and **Composition**. Each relationship is implemented in a separate C++ source file to illustrate how objects interact and depend on one another.

## What is Encapsulation?
Encapsulation is one of the core principles of Object-Oriented Programming (OOP). It is the process of bundling data (variables) and the methods (functions) that operate on that data into a single unit called a class. Encapsulation also restricts direct access to an object's data by using access specifiers such as `private`, `protected`, and `public`, ensuring better security and maintainability.

## Features of the Program
- Demonstrates **Association** between classes.
- Demonstrates **Aggregation** between classes.
- Demonstrates **Composition** between classes.
- Simple and easy-to-understand C++ implementations.
- Shows object interactions and ownership concepts in OOP.
- Can be compiled and executed independently for each relationship.

## Project Structure

```
Relationships/
│── association.cpp      # Demonstrates Association relationship
│── aggregation.cpp      # Demonstrates Aggregation relationship
│── composition.cpp      # Demonstrates Composition relationship
└── README.md            # Project documentation
```

## How to Compile and Run

Compile any of the source files using a C++ compiler such as **g++**.

### Association
```bash
g++ association.cpp -o association
./association
```

### Aggregation
```bash
g++ aggregation.cpp -o aggregation
./aggregation
```

### Composition
```bash
g++ composition.cpp -o composition
./composition
```

## Sample Output

### Association
```
Teacher has been created
Prof. Amir is teaching Asad
```

### Aggregation
```
Department: Computer Science
Professor: John
Aggregation relationship demonstrated successfully.
```

### Composition
```
House created.
Room created inside the house.
Composition relationship demonstrated successfully.
```

> **Note:** The actual output may vary depending on your implementation.

## Concepts Demonstrated
- Object-Oriented Programming (OOP)
- Classes and Objects
- Encapsulation
- Association Relationship
- Aggregation Relationship
- Composition Relationship
- Object Ownership
- Object Lifetime Management
- C++ Class Design

## Author

Abdullah