// 2415
#include <iostream>
using namespace std;

class Student {
public:
   Student() {
        cout << "Default constructor called!" << endl;
    }
};

int main() {
    Student obj;
    return 0;
}
