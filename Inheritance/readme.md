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
