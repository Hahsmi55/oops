# Constructors in C++

## Introduction

A constructor is a special member function of a class that is automatically called when an object of the class is created. Constructors are primarily used to initialize objects and allocate resources if needed.

### Key Features
- Has the same name as the class.
- Does not have a return type (not even `void`).
- Automatically invoked when an object is instantiated.
- Can be overloaded (multiple constructors with different parameters).
- Helps initialize member variables.

---

# Types of Constructors

## 1. Default Constructor

A constructor that takes no parameters.

### Example

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    Student() {
        cout << "Default Constructor Called" << endl;
    }
};

int main() {
    Student s1;
    return 0;
}
```

### Output

```
Default Constructor Called
```

---

## 2. Parameterized Constructor

A constructor that accepts arguments to initialize objects.

### Example

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1("Alice", 20);
    s1.display();

    return 0;
}
```

### Output

```
Name: Alice
Age: 20
```

---

## 3. Copy Constructor

A constructor used to initialize one object using another object of the same class.

### Syntax

```cpp
ClassName(const ClassName &obj);
```

### Example

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    string name;

    Student(string n) {
        name = n;
    }

    Student(const Student &obj) {
        name = obj.name;
    }

    void display() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1("John");
    Student s2 = s1;

    s2.display();

    return 0;
}
```

### Output

```
Name: John
```

---

# Constructor Overloading

A class can have multiple constructors with different parameter lists.

```cpp
#include <iostream>
using namespace std;

class Rectangle {
public:
    int length, width;

    Rectangle() {
        length = width = 0;
    }

    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    void display() {
        cout << "Length: " << length
             << ", Width: " << width << endl;
    }
};

int main() {
    Rectangle r1;
    Rectangle r2(10, 5);

    r1.display();
    r2.display();

    return 0;
}
```

---

# Constructor Initialization List

A constructor initialization list initializes members before the constructor body executes.

### Example

```cpp
#include <iostream>
using namespace std;

class Point {
    int x;
    int y;

public:
    Point(int a, int b) : x(a), y(b) {}

    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p(5, 10);
    p.display();

    return 0;
}
```
---

# Destructor vs Constructor

| Constructor | Destructor |
|-------------|------------|
| Initializes an object | Cleans up resources |
| Same name as class | Same name prefixed with `~` |
| Can have parameters | Cannot have parameters |
| Can be overloaded | Cannot be overloaded |
| Called automatically during object creation | Called automatically when object is destroyed |

---

# Rules for Constructors

- Constructor name must match the class name.
- Constructors have no return type.
- Constructors are called automatically.
- Constructors can be overloaded.
- Constructors cannot be inherited.
- Constructors can be public, private, or protected.
- A constructor cannot be `virtual`.
- If no constructor is defined, the compiler provides a default constructor (in many cases).

---

## License

This document is released under the MIT License. Feel free to use and modify it for educational purposes.