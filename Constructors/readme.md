# C++ Constructors 

This repository contains simple programs to help you understand **constructors** in C++. Each file demonstrates a different type of constructor, including constructor overloading and copy constructors.

---

## What is a Constructor?

A **constructor** is a special function in C++ that gets automatically called when an object of a class is created. Its main job is to **initialize** objects.

It has:
- The **same name as the class**
- **No return type**, not even `void`
- It runs **automatically** when an object is made

---

##  Why Do We Need Constructors?

Imagine you're building a class called `Car`, and you want every new `Car` object to start with specific values like speed, color, or name. Writing code again and again to assign values can be boring and error-prone.

With constructors, you can:
- Automatically set default values
- Initialize objects easily
- Avoid repeating code

---

## Types of Constructors

### 1.**Default Constructor**
- Takes no arguments.
- Automatically called when an object is created without passing any values.

### 2.**Parameterized Constructor**
- Takes arguments to initialize the object with given values.

### 3.**Copy Constructor**
- Takes an object of the same class as an argument.
- Used to create a new object as a copy of an existing object.
  -  **Why do we need it?**
        - Sometimes you want to create a duplicate of an object. Instead of setting each value manually, you can use a copy constructor to do that automatically.
- The copy constructor takes a reference to another object of the same class.
- It’s used when:
- You assign one object to another (Student s2 = s1;)
- You pass an object by value
- You return an object from a function

---

## What is Constructor Overloading?
- Constructor overloading means having multiple constructors in the same class with different parameters. This allows creating objects in different ways.



```cpp
class MyClass {
public:
    MyClass() {
        cout << "Default constructor called!";
    }
};
