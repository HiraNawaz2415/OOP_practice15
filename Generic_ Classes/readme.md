# **What Are Generic Classes?**
- A generic class is a class that can work with any data type — like int, float, string, etc.

-  Use templates to create generic classes.

**Syntax**
``` cpp
template <class T>
class ClassName {
    T data;
public:
    void setData(T d) {
        data = d;
    }

    T getData() {
        return data;
    }
};
```


