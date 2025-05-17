#include <iostream>
 using namespace std;
 /// Arithmetic Operators overloading :+
 /// Comparison Operators overloading: < , > 
class Distance
 {
 private:
 int feets;
 float inches;
 public:
 Distance(): feets(0),inches(0.0f)
 {}
 Distance(int ft, float inc): feets(ft),inches(inc)
 {}
 void getdist()
 {
 cout<<"Enter Feets: ";
 cin>>feets;
 cout<<"Enter Inches: ";
 cin>>inches;
 }
 void showdist() const
 {
 cout<<"\nDistance is: "<<feets<<"\'"<<","<<inches<<"\""<<endl;
 }
 Distance operator + (Distance d)
 {
 int fts = feets + d.feets;
 float inch = inches + d.inches;
 while(inch >= 12.0f)
 {
 inch-= 12.0f;
 fts = fts + 1;
 }
 return Distance (fts, inch);
 }
 bool operator > (Distance d)
 {
 float tfeets1 = feets + inches/12.0f; // of calling object
 float tfeets2 = d.feets + d.inches/12.0f; // of passed object
 if(tfeets1 > tfeets2)
 return true;
 else
 return false;
 }
 bool operator < (Distance d)
 {
 float tfeets1 = feets + inches/12.0f; // of calling object
 float tfeets2 = d.feets + d.inches/12.0f; // of passed object
 if(tfeets1 < tfeets2)
 return true;
 else
 return false;
 }
 };
 int main()
 {
 Distance d1, d2, d3;
 d1.getdist();
 d2.getdist();
 if(d1 > d2)
 cout<<"D1 is largest Distance"<<endl;
 else if (d1 < d2)
 cout<<"D2 is largest Distance"<<endl;
 else
 cout<<"Both distances are equals"<<endl;
 d3 = d1 + d2;
 cout<<"Sum of two Distance is"<<endl;
 d3.showdist();
 return 0;
 }
