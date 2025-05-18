// 2415...
#include <iostream>
using namespace std;

class Room {
public:
    Room() {
        cout << "Room created" << endl;
    }
    ~Room() {
        cout << "Room destroyed" << endl;
    }
};

class House {
private:
    Room room;  // Composition: House owns Room
public:
    House() {
        cout << "House created" << endl;
    }
    ~House() {
        cout << "House destroyed" << endl;
    }
};

int main() {
    House h;
    return 0;
}
