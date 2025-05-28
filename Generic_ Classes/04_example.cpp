#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add<int>(5, 3) << endl;        // Output: 8
    cout << add<float>(2.5, 3.2) << endl;  // Output: 5.7
    return 0;
}
