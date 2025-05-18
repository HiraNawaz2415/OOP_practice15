// 2415....
#include <iostream>
using namespace std;

class Engine {
public:
    void start() {
        cout << "Engine started" << endl;
    }
};

class Car {
    Engine e;  // Car has an Engine
public:
    void startCar() {
        e.start();  // Use the engine
        cout << "Car started" << endl;
    }
};

int main() {
    Car myCar;
    myCar.startCar();
    return 0;
}
