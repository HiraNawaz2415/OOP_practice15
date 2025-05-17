//overload stream insertion << operator
 // overload stream extraction >> operator
 #include <iostream>
 #include<string.h>
 using namespace std;
 class Person{
 string name;
 int age;
 public:
 Person(){
 name = "noname";
 age = 0;
 }
 friend ostream &operator<<(ostream &output,Person &p);
 friend istream &operator>>(istream &input, Person &p);
 };
 ostream &operator<< (ostream &output,Person &p)
 {
 output<<"my name is: "<<p.name<<endl<< " and my age is "<<p.age;
 return output;
 }
 istream &operator >>(istream &input,Person &p)
 {
 input>>p.name>>p.age;
 return input;
 }
 int main()
 {
 Person pr;
 cout<<"enter the name and age "<<endl;
 cin>>pr;
 cout<<pr;
 return 0;
 }
