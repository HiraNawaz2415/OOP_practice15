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

---
## **Generic Function**

``` cppp
template <typename T>
T functionName(T a, T b) {
    // function body
}
```
---
## **Where Are Generic Classes Used in Real Life?**
- std::vector<T> in STL (Standard Template Library)

- std::map<T1, T2>

- std::pair<T1, T2>

- std::stack<T>, std::queue<T> etc.

- These are all template classes!

---

## **Vector Functions**

| Function       | What It Does                       | Example              |
| -------------- | ---------------------------------- | -------------------- |
| `push_back(x)` | Add element `x` at the end         | `v.push_back(5);`    |
| `pop_back()`   | Remove last element                | `v.pop_back();`      |
| `size()`       | Returns number of elements         | `int n = v.size();`  |
| `empty()`      | Returns true if vector is empty    | `if (v.empty())`     |
| `at(index)`    | Access element at position `index` | `int x = v.at(2);`   |
| `front()`      | First element                      | `int f = v.front();` |
| `back()`       | Last element                       | `int b = v.back();`  |
| `clear()`      | Removes all elements               | `v.clear();`         |

---
## **Stack Functions**

| Function  | What It Does                | Example             |
| --------- | --------------------------- | ------------------- |
| `push(x)` | Add element on top          | `s.push(10);`       |
| `pop()`   | Remove top element          | `s.pop();`          |
| `top()`   | Access top element          | `int t = s.top();`  |
| `empty()` | Check if stack is empty     | `if (s.empty())`    |
| `size()`  | Number of elements in stack | `int n = s.size();` |

---

## **queue Functions**

| Function  | What It Does                | Example              |
| --------- | --------------------------- | -------------------- |
| `push(x)` | Add element at the back     | `q.push(20);`        |
| `pop()`   | Remove front element        | `q.pop();`           |
| `front()` | Access front element        | `int f = q.front();` |
| `back()`  | Access last element         | `int b = q.back();`  |
| `empty()` | Check if queue is empty     | `if (q.empty())`     |
| `size()`  | Number of elements in queue | `int n = q.size();`  |

---

