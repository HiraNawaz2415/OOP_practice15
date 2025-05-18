//2415
#include <iostream>
using namespace std;

class Parameter{
public:
    int x;

    Parameter(int value) {
        x = value;
        cout << "Parameterized constructor called! Value: " << x << endl;
    }
};

int main() {
    Parameter obj(42);
    return 0;
}
