 // C++ program that add  Two Objects of Travel Class using binary + operator 
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
 cout<<"Enter kollometers::";
 cin>>km;
 cout<<"Enter hours::";
 cin>>hr;
 }
 void show()
 {
 cout<<"\nYou Travelled::"<<km<<":Killometers in:"<<hr<<":Hours";
 }
 void operator +(Travel p)
 {
 Travel t;
 t.km= km+p.km;
 t.hr= hr+p.hr;
 cout<<"\nTotal killometer Travelled is:"<<t.km<<" Killometers "<<" in: "<<t.hr<<" Hours";
 }
 };
 int main() {
 Travel my,yours;
 my.get();
 my.show();
 yours.get();
 yours.show();
 my+yours;
 return 0;
 }
