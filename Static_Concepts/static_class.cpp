// 2415.
class Math {
public:
    static int add(int a, int b) {
        return a + b;
    }

private:
    Math() {}  // Prevent creating objects
};

int main() {
    cout << Math::add(5, 3);  // Output: 8 ✅ like a utility class
}
