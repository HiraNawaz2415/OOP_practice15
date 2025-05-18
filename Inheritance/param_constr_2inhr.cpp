//2415...
#include <iostream>
using namespace std;

class Base {
public:
    Base(int a) {
        cout << "Base class constructor: " << a << endl;
    }
};

class Derived : public Base {
public:
    Derived(int a, int b) : Base(a) {
        cout << "Derived class constructor: " << b << endl;
    }
};

int main() {
    Derived d(5, 10);
    return 0;
}
