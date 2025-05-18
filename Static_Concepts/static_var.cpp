// 2415.
class Counter {
public:
    static int count;

    void increase() {
        count++;
    }
};

int Counter::count = 0;  // Define static variable outside

int main() {
    Counter c1, c2;
    c1.increase();
    c2.increase();
    cout << Counter::count << endl;  // Output: 2 ✅ shared by both objects
}
