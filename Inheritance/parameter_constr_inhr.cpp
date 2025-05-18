// 2415...
#include <iostream>
using namespace std;

class Base {
public:
    Base(int a) {
        cout << "Base constructor with value: " << a << endl;
    }
};

class Derived : public Base {
public:
    Derived(int a) : Base(a) {
        cout << "Derived constructor called" << endl;
    }
};

int main() {
    Derived d(5);
    return 0;
}
