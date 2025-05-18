// 2415..
//overload == operator check weather  two circles are equal or not
#include<iostream>
using namespace std;
class Circle
{
	float rad;
	int X,Y;
	public:
	Circle():X(0),Y(0),rad(0.0){}
	 void input()
	 {
	 	cout<<"enter center coordinates of the circle::";
	 	cin>>X>>Y;
	 	cout<<"enter radius of circle::";
	 	cin>>rad;
	 }
	 void show()
	 {
	 	cout<<"Radius of circle is   "<<rad<<endl;
	 	cout<<"Center coordinates are  (X,Y) "<<"("<<X<<","<<Y<<")"<<endl;
	 }
	 bool operator==(Circle c)
	 {
	 	if(rad==c.rad&&X==c.X&&Y==c.Y)//Two circles are said to b equal if their radius and center coordinates are equals
	 	return true;
	 	else
	 	return false;
	 }
};
int main()
{
	Circle c1,c2;
	cout<<"enter values for Circle 1..."<<endl;
	c1.input();
	cout<<"enter values for Circle 2..."<<endl;
	c2.input();
	cout<<"Circle 1:"<<endl;
	c1.show();
	cout<<""<<endl;
	cout<<"Circle 2:"<<endl;
	c2.show();
	cout<<""<<endl;
	if(c1==c2)
	cout<<"Both circles are equal"<<endl;
	else
	cout<<"Circles are not equal"<<endl;
	return 0;
}
