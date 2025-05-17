// Overload Uniary operator ++ when used as prefix and postfix
 #include <iostream>
 using namespace std;
 class Count {
 private:
 int n;
 public:
 // Constructor to initialize count to 0
 Count() : n(0) {}
 // Overload ++ when used as prefix
 void operator ++ () {
 ++n;
 }
 // Overload ++ when used as postfix
 void operator ++ (int) {
 ++n;
 }
 void show() {
 cout << "n=: " << n << endl;
 }
 };
 int main() {
 Count c1;
 c1.show();
 ++c1;
 c1++;
 c1.show();
 return 0;
 }
