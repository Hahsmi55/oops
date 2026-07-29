# File Handling in C++

## Project Title

File Handling in C++: Demonstration of Reading and Writing Files

## Brief Description

This project demonstrates the concept of file handling in C++ using a simple program. It shows how data can be stored permanently in files and retrieved when needed. The program uses file streams to perform basic read and write operations while applying Object-Oriented Programming (OOP) concepts.

## What is Encapsulation?

Encapsulation is one of the fundamental concepts of Object-Oriented Programming (OOP) that combines data and the functions that operate on that data within a single class. It also helps protect data by restricting direct access to class members using access specifiers such as `private`, `protected`, and `public`. Encapsulation improves data security, code organization, and maintainability.

## Features of the Program

* Demonstrates file handling in C++.
* Creates and opens files for reading and writing.
* Writes data into a file.
* Reads and displays data from a file.
* Uses classes and objects to perform file operations.
* Demonstrates encapsulation using class members.
* Shows proper opening and closing of files.
* Handles basic file input and output operations.
* Organizes the program using Object-Oriented Programming principles.

## Project Structure

```text
FileHandling/
│── filehandling.cpp          # Main source code
│── data.txt                  # File used to store data
│── README.md                 # Project documentation
```

## How to Compile and Run

### Using g++

Compile the program:

```bash
g++ fileHandling.cpp -o main
```

Run the executable:

```bash
./main
```

### On Windows (MinGW)

```bash
g++ fileHandling.cpp -o main.exe
main.exe
```

## Sample Output

```text
===== File Handling in C++ =====

Enter data to write into the file:
Hello, this is a file handling project.

Data written successfully.

Reading data from file:
Hello, this is a file handling project.

File operation completed successfully.
```

> **Note:** The exact output may vary depending on your implementation and the data entered by the user.

## Concepts Demonstrated

* Object-Oriented Programming (OOP)
* Classes and Objects
* Encapsulation
* Access Specifiers
* File Handling
* File Input and Output
* `ifstream`
* `ofstream`
* File Opening and Closing
* Reading from Files
* Writing to Files
* Data Persistence
* Code Organization

## Author

Abdullah
