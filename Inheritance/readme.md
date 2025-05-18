# 🌳 **What is Inheritance?**
- Inheritance is a fundamental concept in Object-Oriented Programming (OOP) that allows a new class to take properties (data) and behaviors (functions) from an existing class.

- The existing class is called the base class (or parent class).

- The new class is called the derived class (or child class).

---

## **Why Do We Need Inheritance?**
- **To reuse code:** You don’t need to write the same code again.

- **To create a hierarchy** or relationship between classes.

- To extend or customize behavior of existing classes without modifying them.

- To implement polymorphism (one interface, many forms).

---

## 🏗️ **How Inheritance Works**
When a class inherits from another class, it automatically has access to all the public and protected members of the base class. The derived class can also add new members or override existing ones.

---
## **Types of Inheritance**
**1.Single Inheritance:**
- One derived class inherits from one base class.

**2.Multiple Inheritance:**
- One derived class inherits from multiple base classes.
(Note: This can cause complexity like the "diamond problem".)

**3.Multilevel Inheritance:**
- A derived class inherits from a base class, and then another class inherits from that derived class (like a chain).

**4.Hierarchical Inheritance:**
- Multiple derived classes inherit from a single base class.

**5.Hybrid Inheritance:**
- Combination of two or more types of inheritance.

---
## **Benefits of Using Inheritance**
- Avoids duplication of code.
- Creates a natural hierarchy among classes.
- Eases maintenance and future updates.
- Encourages modular design.

---
## 🔐 **Access Specifiers**
- Access specifiers control the visibility and accessibility of class members (variables and functions). They determine who can access these members from outside or inside the class.
Types of Access Specifiers
**1. public**
- Members declared as public are accessible from anywhere — inside the class, outside the class, and in derived classes.
- Use public for functions or variables you want everyone to access freely.

**2. private**
- Members declared as private are accessible only within the class itself.
- Neither outside code nor derived classes can access private members directly.
- Use private to hide sensitive data and protect it from unauthorized access.

**3. protected**
- Members declared as protected are accessible within the class itself and in derived classes.
- They are not accessible from outside the class hierarchy.
- Use protected when you want to allow derived classes to use or modify members but keep them hidden from general outside access.

**Why Are Access Specifiers Important?**
- They help protect data by controlling access.
- They allow you to hide internal details (encapsulation).
- They help maintain better program structure and security.
- They prevent accidental modification or misuse of data.

---
## **What is Function Overriding?**
Function overriding means:

- When a child class (derived class) writes its own version of a function that already exists in the parent class (base class).

**Why do we override?**
- Sometimes, the child class wants to do something differently than the parent class. So it overrides the function.
**Rule:**
- Function name, return type, and parameters should be the same in both classes.

- The base class function should be marked as virtual.
---
### Syntax :

```cpp
class BaseClass {
public:
    virtual void functionName() {
        // Code for base class
    }
};

class DerivedClass : public BaseClass {
public:
    void functionName() override {
        // Code for derived class (overrides base class function)
    }
};
```
- virtual keyword in base class tells the compiler:
👉 “This function can be overridden.”

- override keyword in derived class (optional but recommended):
👉 “I am overriding a function from the base class.”
---
## Constructors with inheritence
- when a derived class (child) is created from a base class (parent), constructors of both classes are involved.
**Rules:**
- Base class constructor is called first automatically.

- If the base class has a parameterized constructor, you must explicitly call it from the derived class using an initialization list.

- Constructors are not inherited, but can be called.

---
## 🤔 **What is Containership?**
Containership means:
- One class has another class inside it.

- This is also called a "has-a" relationship.

**for example:**
- A Car has an Engine
- A Human has a Heart
- A House has a Room
So we say:
- Car contains Engine
- Human contains Heart
- House contains Room
-  Containership helps make your program clear, simple, and easy to fix or improve.
---
## **What is Association in simple words?**
Association means:
- Two classes are connected or related but they don’t own each other.

- It shows that objects from different classes can work together, but one class doesn’t contain the other.

**for example:**
- A Teacher and a Student are associated.
- A teacher teaches many students.
- A student can have many teachers.
But a teacher does not own the student, and student does not own the teacher.

**Key points:**
- It’s a relationship between classes.
- Both classes can exist independently.
- It can be one-to-one, one-to-many, or many-to-many.
- ** Association (general)**
   **├─ Aggregation (weak ownership)**
  ** └─ Composition (strong ownership)**
- **Aggregation:** One class uses another, but parts can live alone.
   - Example: Library and Book. Books can exist outside the Library.
- **Composition:** One class owns another, and parts die if owner dies.
     - Example: House and Room. If the House is destroyed, Rooms are destroyed too.
---



---
