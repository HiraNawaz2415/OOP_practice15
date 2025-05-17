# ➕ Operator Overloading in C++

Welcome to this simple guide and code examples for **Operator Overloading** in C++.

This repository is made for beginners who want to understand what operator overloading is, why it's useful, and how to use it in their C++ programs.

---

## 🤔 What is Operator Overloading?

In C++, **operator overloading** means giving special meaning to an operator (like `+`, `-`, `==`, etc.) when it's used with **user-defined types (classes)**.

Normally, these operators work with basic data types (like `int`, `float`, etc.), but C++ allows you to redefine them to work with your **own objects**.

---

## 📦 Example in Real Life

Let’s say you have a `Complex` class that stores real and imaginary parts of a number. If you want to **add two complex numbers using `+`**, you can overload the `+` operator so that it works naturally:

```cpp
Complex c1(2, 3);
Complex c2(1, 4);
Complex result = c1 + c2; // Works because + is overloaded!
