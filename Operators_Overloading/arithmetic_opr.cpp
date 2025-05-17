// C++ program to overload += Arithmetic Assignment operator 
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
 cout<<"\nYou Travelled: "<<km<<" Killometers in :"<<hr<<" Hours";
 }
 void operator +=(Travel p)
 {
 km= km+p.km;
 hr= hr+p.hr;
 cout<<"\nTotal killometer Travelled is "<<km<<" Killometers in "<<hr<<" Hours";
 }
 };
 int main() {
 Travel my,yours,r;
 my.get();
 my.show();
 yours.get();
 yours.show();
 my+=yours;
 return 0;
 }
