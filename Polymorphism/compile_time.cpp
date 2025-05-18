// 2415..
#include <iostream>
using namespace std;

class Print {
public:
    void show(int i) {
        cout << "Integer: " << i << endl;
    }
    void show(double d) {
        cout << "Double: " << d << endl;
    }
};

int main() {
    Print p;
    p.show(5);     // Calls show(int)
    p.show(5.5);   // Calls show(double)
    return 0;
}
