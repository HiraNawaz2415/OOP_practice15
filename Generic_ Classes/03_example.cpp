// generic function
template <class T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add(5, 10) << endl;         // 15 (int)
    cout << add(3.5, 2.5) << endl;      // 6.0 (float)
    return 0;
}
