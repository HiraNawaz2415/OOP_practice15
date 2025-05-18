// 2415..
#include <iostream>
using namespace std;

class Person {
public:
    void display() {
        cout << "I am a person." << endl;
    }
};

class Student : virtual public Person {};
class Teacher : virtual public Person {};
class TeachingAssistant : public Student, public Teacher {};

int main() {
    TeachingAssistant ta;
    ta.display();  // ✅ Works fine – only one copy of Person
    return 0;
}
