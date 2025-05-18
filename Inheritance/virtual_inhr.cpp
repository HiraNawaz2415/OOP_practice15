// 2425
class Person {
public:
    string name = "Hira";
};

class Student : virtual public Person {};
class Teacher : virtual public Person {};

class TeachingAssistant : public Student, public Teacher {};

int main() {
    TeachingAssistant ta;
    cout << ta.name << endl;  // No confusion — one shared Person
}
