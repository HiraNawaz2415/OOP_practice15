// 2415....
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    // Parameterized constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    // Copy constructor
    Student(const Student &s) {
        name = s.name;
        age = s.age;
        cout << "Copy constructor called!" << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1("Ali", 20);      // Original object
    Student s2 = s1;            // Copy constructor is called

    cout << "Original Student:\n";
    s1.display();

    cout << "Copied Student:\n";
    s2.display();

    return 0;
}
