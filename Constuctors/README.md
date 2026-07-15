# Constructors in C++

## Description

This project demonstrates the concept of **Constructors** in C++. A constructor is a special member function of a class that is automatically called when an object is created. Constructors are commonly used to initialize objects and assign initial values to data members.

## What is a Constructor?

A constructor is a special function that has the same name as the class and does not have a return type. It is automatically invoked when an object of the class is created, ensuring that the object starts in a valid and initialized state.

## Features

- Demonstrates object initialization
- Uses constructors to assign initial values
- Shows automatic constructor invocation
- Improves code readability and object management

## Project Structure

```
.
├── constructors.cpp
└── README.md
```

## How to Compile

```bash
g++ constructors.cpp -o constructors
```

## How to Run

```bash
./constructors
```

## Sample Output

```
Student Name: Alice
Student Age: 20
```

> **Note:** The output may vary depending on the values used in your program.

## Concepts Demonstrated

- Classes and Objects
- Constructors
- Object Initialization
- Automatic Function Invocation
- Parameterized Constructors (if implemented)
- Default Constructors (if implemented)

## Types of Constructors

- **Default Constructor** – A constructor with no parameters.
- **Parameterized Constructor** – A constructor that accepts parameters to initialize objects with specific values.
- **Copy Constructor** – A constructor used to create a new object as a copy of an existing object.

## Advantages of Constructors

- Automatically initializes objects.
- Reduces repetitive initialization code.
- Improves code readability.
- Ensures objects are created in a valid state.
- Supports multiple ways of object initialization through constructor overloading.

## Author

Abdullah