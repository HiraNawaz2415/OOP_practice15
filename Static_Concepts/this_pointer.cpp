#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
public:
    void setRollNo(int rollNo) {
        this->rollNo = rollNo;  // 'this' refers to current object's rollNo
    }

    void show() {
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main() {
    Student s1;
    s1.setRollNo(10);  // sets rollNo using this pointer
    s1.show();         // Output: Roll Number: 10
    return 0;
}
