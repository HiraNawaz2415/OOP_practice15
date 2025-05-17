//overloading assignment operator = to assign one object to other
 #include <iostream>
 using namespace std;
 class Distance {
 private:
 int feet;
 int inches;
 public:
 // 0 to infinite
 // 0 to 12
 // required constructors
 Distance() {
 feet = 0;
 inches = 0;
 }
 Distance(int f, int i) {
 feet = f;
 inches = i;
 }
 void operator = (const Distance &D ) {
 feet = D.feet;
 inches = D.inches;
 }
 // method to display distance
 void displayDistance() {
 cout << "Feet: " << feet << " Inches:" << inches << endl;
 }
 };
 int main() {
 Distance D1(11, 10), D2(5, 11);
 cout << "First Distance : ";
 D1.displayDistance();
 cout << "Second Distance :";
 D2.displayDistance();
 // use assignment operator
 D1 = D2;
 cout << "First Distance after assigning it D2 :";
 D1.displayDistance();
 return 0;
 }
