//2415..
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

void makeSound(Animal* a) {
    a->sound();
}

int main() {
    Dog d;
    Cat c;

    makeSound(&d);  // Dog barks
    makeSound(&c);  // Cat meows

    return 0;
}
