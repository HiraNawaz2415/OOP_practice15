// 2415..
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* ptr;

    Dog d;
    Cat c;

    ptr = &d;
    ptr->sound();  // Output: Dog barks  ✅ Runtime polymorphism

    ptr = &c;
    ptr->sound();  // Output: Cat meows ✅ Runtime polymorphism
}
