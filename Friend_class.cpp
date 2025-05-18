// 2415...
#include <iostream>
using namespace std;

// Forward declaration
class A;

// Friend function declaration
void showData(A obj);

// Class A definition
class A {
private:
    int secretValue;

public:
    A() {
        secretValue = 100;
    }

    // Declare class B as a friend
    friend class B;

    // Declare showData() as a friend function
    friend void showData(A obj);
};

// Friend class B definition
class B {
public:
    void revealSecret(A obj) {
        // Accessing private member of class A
        cout << "Friend Class B accessing A's secret value: " << obj.secretValue << endl;
    }
};

// Friend function definition
void showData(A obj) {
    // Accessing private member of class A
    cout << "Friend Function accessing A's secret value: " << obj.secretValue << endl;
}

// Main function
int main() {
    A a;
    B b;

    b.revealSecret(a);     // Friend class accessing private data
    showData(a);           // Friend function accessing private data

    return 0;
}
