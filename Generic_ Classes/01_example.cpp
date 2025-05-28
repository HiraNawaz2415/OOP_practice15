#include <iostream>
using namespace std;

// Generic class
template <class T>
class Box {
    T value;
public:
    void setValue(T v) {
        value = v;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Box<int> intBox;
    intBox.setValue(100);
    intBox.display(); // Output: 100

    Box<string> strBox;
    strBox.setValue("Hello");
    strBox.display(); // Output: Hello

    Box<float> floatBox;
    floatBox.setValue(3.14);
    floatBox.display(); // Output: 3.14

    return 0;
}
