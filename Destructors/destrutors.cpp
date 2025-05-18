// 2415...
#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Constructor called: Object created" << endl;
    }

    ~MyClass() {
        cout << "Destructor called: Object destroyed" << endl;
    }
};

int main() {
    MyClass obj;  // Constructor runs here

    // Destructor will run automatically when 'obj' goes out of scope
    return 0;
}
