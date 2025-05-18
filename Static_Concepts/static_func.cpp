//2415
#include <iostream>
using namespace std;

class MyClass {
public:
    static void sayHello() {
        cout << "Hello from static function!" << endl;
    }
};

int main() {
    MyClass::sayHello();  // ✅ No object needed
    return 0;
}
