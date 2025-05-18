## **1. What is a Static Function?**
**Definition:**
- A static function in a class belongs to the class itself, not to any object.
That means:
- You can call it without creating an object
- It can only access static members of the class

---
## **2. What is a Static Variable in a Class?**
- Shared by all objects of the class
- Memory is allocated only once

---
## **3. What is a Static Class?**
- In C++, you cannot directly create a static class like in C#. But you can simulate it by making:
- All members static
- Private constructor to prevent object creation
