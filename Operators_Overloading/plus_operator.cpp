//overloading + operator to combine/add two Strings
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
 String operator + (String s1 ) {
 String temp;
 strcpy(temp.chr,chr);
 strcat(temp.chr,s1.chr);
 return temp;
 }
 };
 int main() {
 String ob1,ob2,ob3;
 ob1.in();
 ob2.in();
 ob3=ob1+ob2;
 cout<<"First String is:";
 ob1.show();
 cout<<"Secong String is:";
 ob2.show();
 cout<<"Combined String is:";
 ob3.show();
 return 0;
 }
