//overloading == operator to check TWO Strings are of equal length
 #include <iostream>
 #include<string.h>
 using namespace std;
 class String {
 private:
 char chr[10];
 public:
 void in() {
 cout<<"Enter String :";
 cin>>chr;
 }
 void show() {
 cout<<chr<<endl;
 }
 int operator == (String s1 ) {
 if(strlen(chr)==strlen(s1.chr))
 return 1;
 else
 return 0;
 }
 };
 int main() {
 String ob1,ob2;
 ob1.in();
 ob2.in();
 if(ob1==ob2)
 cout<<"Both Strings are of equal length";
 else
 cout<<"Both Strings are of Different length";
 return 0;
 }
