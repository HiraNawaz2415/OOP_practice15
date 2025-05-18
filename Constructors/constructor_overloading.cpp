// 2415......
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    float marks;

public:
    // Default constructor
    Student() {
        name = "Unknown";
        age = 0;
        marks = 0.0;
    }

    // Constructor with one parameter
    Student(string n) {
        name = n;
        age = 0;
        marks = 0.0;
    }

    // Constructor with two parameters
    Student(string n, int a) {
        name = n;
        age = a;
        marks = 0.0;
    }

    // Constructor with all parameters
    Student(string n, int a, float m) {
        name = n;
        age = a;
        marks = m;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << ", Marks: " << marks << endl;
    }
};

int main() {
    // Using different constructors
    Student s1;                          // default constructor
    Student s2("Ali");                   // 1-parameter constructor
    Student s3("Sara", 20);              // 2-parameter constructor
    Student s4("Ahmed", 21, 87.5);       // 3-parameter constructor

    cout << "Student Records:\n";
    s1.display();
    s2.display();
    s3.display();
    s4.display();

    return 0;
}
