// Generic Class with Two Types
template <class T1, class T2>
class Pair {
    T1 first;
    T2 second;
public:
    void set(T1 f, T2 s) {
        first = f;
        second = s;
    }

    void show() {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};

int main() {
    Pair<int, string> obj;
    obj.set(1, "One");
    obj.show(); // Output: First: 1, Second: One
}
