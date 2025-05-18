# What is Polymorphism?
- Polymorphism means one thing, many forms.
- It allows you to use the same action in different ways depending on the situation.
**Meaning of Polymorphism**
- The word polymorphism comes from Greek and means “many forms.”
- In programming, polymorphism allows a function or an object to behave differently based on the context.
- It means the same function name or method can do different things depending on the object it works with.
---
## Why is polymorphism important?
- It helps write flexible and reusable code.
- You can use one interface for many different types.
- Makes programs easier to extend and maintain.

### Imagine this:
- You have a remote control that can work for different devices: TV, Radio, or DVD player.
- When you press the power button,

    - TV turns on,
    - Radio turns on,
    - DVD player turns on.
- The button is the same, but it does different things depending on the device.
**In programming:**
  - You have a function (like the power button) named makeSound().
  - Different animals (like TV, Radio, DVD) use the same function name but make different sounds:
**Why is this useful?**
- You can write one piece of code that works for many types of objects.
- You don’t have to write separate functions with different names for every type.
---
## Types of polymorphism in C++
**1.Compile-time polymorphism (Static binding)**
- Achieved using function overloading and operator overloading.
- Decided during compilation.<br>
**2.Run-time polymorphism (Dynamic binding)**
- Achieved using inheritance and virtual functions.
- Decided during program execution (runtime).
---
## **What is a Virtual Function?**
- A virtual function is a function in a base class that you want to allow derived classes to change (override).
- It tells the program: "When you call this function on a base pointer, check the actual object type at runtime and use the correct version of the function."
**Why use virtual functions?**
- To achieve run-time polymorphism — so the program decides which function to call based on the object type during execution, not just compile time.
---
## **What is a Pure Virtual Function?**
- A pure virtual function is a virtual function without any implementation in the base class.
- It looks like this: virtual void func() = 0;
- It means the base class says “I don't know how to do this — derived classes must provide their own version.”
**Why use pure virtual functions?**
- To make sure derived classes implement this function.
- To create a blueprint or template for other classes.
---
## **What is an Abstract Class?**
- An abstract class is like a template or blueprint for other classes.
- Class with ≥ 1 pure virtual func
- cannot create objects of abstract classes directly.
** why use?**
  - Define interface, no direct objects
  - To provide a common interface while leaving implementation details to subclasses.
  - To define common rules for all child classes.
** Real-Life Example:**
- Imagine you have a general idea of a shape — you know every shape has an area, but you don’t know how to calculate it.
- So, you make an abstract class Shape, and tell other shapes (like Circle, Rectangle) to figure out how to calculate area.
---
