# 🤝 Friend Class and Friend Function in C++

This repository contains examples and explanations about **friend classes** and **friend functions/objects** in C++. These concepts allow controlled access to private members of a class from outside the class, which can be very useful in certain scenarios.

---

##  What is a Friend Class?

In C++, a **friend class** is a class that is allowed to access the **private** and **protected** members of another class. Normally, these members are hidden and inaccessible from outside the class to protect data and maintain encapsulation.

By declaring a class as a friend, the class **breaks this rule** and allows the friend class to access its private data directly.

## 🧍‍♂️ What is a Friend Function / Friend Object?
- A friend function (or object that uses it) is a normal function not inside the class, but it’s given special permission to access private data.
- It’s like inviting someone over to your house and giving them full access, even though they're not part of your family.

## Why Use Friends?
- To allow tight cooperation between two classes or functions
- When two classes are working closely and need access to each other's private data

## Important Notes
- Friendship is not mutual: If Class A is a friend of Class B, it doesn’t mean B is a friend of A.
- Friendship is not inherited: Child classes do not automatically become friends.
- Use friendship carefully: It breaks encapsulation, so don’t overuse it.

### Example:

```cpp
class A {
private:
    int secret;

    // Declare class B as a friend of class A
    friend class B;
public:
    A() : secret(42) {}
};

class B {
public:
    void revealSecret(A obj) {
        // Because B is a friend of A, it can access A's private members
        cout << "Secret value is: " << obj.secret << endl;
    }
};

---
