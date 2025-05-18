// 2415..
#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A" << endl;
    }
};

class B : virtual public A {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

class C : virtual public A {
public:
    void showC() {
        cout << "Class C" << endl;
    }
};

class D : public B, public C {
public:
    void showD() {
        cout << "Class D" << endl;
    }
};

int main() {
    D obj;
    obj.show();   // No ambiguity because of virtual inheritance
    obj.showB();
    obj.showC();
    obj.showD();
    return 0;
}
