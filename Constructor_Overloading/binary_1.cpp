/operator overloading binary + operator with return statement
 // C++ program to add two travel objects using binary + operator  
#include <iostream>
 using namespace std;
 class Travel {
 private:
 int km,hr;
 public:
 Travel()
 {
 km=hr=0;
 }
 void get()
 {
 cout<<endl;
 cout<<"Enter kollometers:";
 cin>>km;
 cout<<"Enter hours:";
 cin>>hr;
 }
 void show()
 {
 cout<<"\nYou Travelled::"<<km<<":Killometers in:"<<hr<<":Hours";
 }
 Travel operator +(Travel p)
 {
 Travel t;
 t.km= km+p.km;
 t.hr= hr+p.hr;
 return t;
 }
 };
 int main() {
 Travel my,yours,r;
 my.get();
 my.show();
 yours.get();
 yours.show();
 r=my+yours;
 cout<<endl<<"After Adding ";
 r.show();
 return 0;
 }
