// 2415...
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    Student(string n) : name(n) {}
};

class Teacher {
public:
    void teach(Student &s) {
        cout << "Teacher is teaching " << s.name << endl;
    }
};

int main() {
    Student s1("Alice");
    Teacher t1;
    t1.teach(s1);  // Association: Teacher uses Student
    return 0;
}
