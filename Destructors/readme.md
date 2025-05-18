#   🗑️ **What is a Destructor?**
A destructor is a special member function in a class that is automatically called when an object of that class is destroyed (i.e., when it goes out of scope or is deleted).

- Its main job is to clean up before the object is removed from memory — for example, releasing resources like memory, files, or network connections that the object might have acquired during its lifetime.
---
## 🔑 **Key Points About Destructors:**
- A destructor has the same name as the class, but preceded by a tilde (~).
For example, if the class name is Car, the destructor is ~Car().

- Destructors do not take any parameters and do not return anything.

- You can only have one destructor per class (no overloading).

- Destructor is called automatically — you never call it manually.

- In inheritance, the derived class destructor is called first, then the base class destructor.
---
## 🧩 **Why Do We Need Destructors?**
- To free up resources allocated dynamically (like memory allocated with new).

- To close files or network connections.
---

- To perform any cleanup needed before the object is removed.

Without a destructor, these resources may not be released properly, causing memory leaks or other issues.
