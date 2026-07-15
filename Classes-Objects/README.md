# Classes and Objects in C++

## Overview

Classes and objects are the core concepts of Object-Oriented Programming (OOP) in C++. A class is a blueprint for creating objects, while an object is an instance of a class that contains data and functions.

---

## What is a Class?

A class is a user-defined data type that groups data members (variables) and member functions (methods) into a single unit.

### Syntax

```cpp
class ClassName {
public:
    // Data members
    int data;

    // Member function
    void display() {
        cout << data << endl;
    }
};
```

### Key Points

- Defines the structure of objects.
- Contains data members and member functions.
- Does not allocate memory until an object is created.
- Supports encapsulation and data hiding.

---

## What is an Object?

An object is an instance of a class. It occupies memory and can access the data members and member functions of the class.

### Syntax

```cpp
ClassName objectName;
```

### Example

```cpp
Student s1;
Student s2;
```

Here, `s1` and `s2` are two different objects of the `Student` class.

---

## Accessing Class Members

Use the dot (`.`) operator** to access public members of an object.

```cpp
objectName.dataMember;
objectName.memberFunction();
```

Example:

```cpp
student.name = "Ahmed";
student.display();
```

---

## Real-Life Example

### Class

```text
Car
```

Attributes
- Brand
- Model
- Color

Functions
- Start()
- Stop()

### Objects

- Toyota Corolla
- Honda Civic
- Tesla Model 3

Each car is an object created from the same `Car` class.

---

## Advantages of Classes and Objects

- Code reusability
- Better code organization
- Data encapsulation
- Easy maintenance
- Supports inheritance and polymorphism
- Models real-world entities effectively

---

## Summary

- A class is a blueprint for creating objects.
- An object is an instance of a class.
- Objects access class members using the **dot (`.`) operator**.
- Multiple objects can be created from a single class.
- Classes and objects are the foundation of Object-Oriented Programming (OOP) in C++.

---

## License

This README is provided for educational purposes. Feel free to use and modify it for learning C++ Object-Oriented Programming.