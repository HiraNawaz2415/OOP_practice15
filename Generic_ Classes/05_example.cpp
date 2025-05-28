#include <iostream>
using namespace std;

template <typename T>
class Calculator {
    T num1, num2;
public:
    Calculator(T a, T b) {
        num1 = a;
        num2 = b;
    }

    T add() {
        return num1 + num2;
    }

    T subtract() {
        return num1 - num2;
    }

    T multiply() {
        return num1 * num2;
    }

    T divide() {
        if (num2 != 0)
            return num1 / num2;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};
int main() {
    Calculator<int> calcInt(10, 5);
    cout << "Add: " << calcInt.add() << endl;
    cout << "Subtract: " << calcInt.subtract() << endl;
    cout << "Multiply: " << calcInt.multiply() << endl;
    cout << "Divide: " << calcInt.divide() << endl;

    Calculator<float> calcFloat(10.5, 2.5);
    cout << "Add: " << calcFloat.add() << endl;
    cout << "Subtract: " << calcFloat.subtract() << endl;
    cout << "Multiply: " << calcFloat.multiply() << endl;
    cout << "Divide: " << calcFloat.divide() << endl;

    return 0;
}
