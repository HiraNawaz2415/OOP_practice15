#include<iostream>
#include<string.h>
using namespace std;
class Furniture
{
	protected:
	string color;
	int price;
	public:
	Furniture()
	{
		color="no color";
		price=0;
	}
	void setcolor(string c)
	{
		color=c;
	}
	string getcolor()
	{
		return color;
	}
 virtual	void setprice(int p)=0;
};
class Table:public Furniture
{
	 int len,width;
	 public:
	 Table(int l,int w)
	 {
	 	len=l;
	 	width=w;
	 }
	 void setprice(int p)
	 {
	 	price=p;
	 }
	 void show()
	 {
	 	cout<<"Table len  "<<len<<endl;
	 	cout<<"Table width  "<<width<<endl;
	 	cout<<"Table  price   "<<price<<endl;
	 }
};
class Chair:public Furniture
{
	 public:
	 void setcolor(string c)
	 {
	 	Furniture::setcolor(c);
	 }
	 void setprice(int p)
	 {
	 	price=p;
	 }
	 void show()
	 {
	 	cout<<"Chair color   "<<getcolor()<<endl;
	 	cout<<"Chair price is  "<<price<<endl;
	 }
};
int main()
{
	 Furniture *ptr;
	 Table t(5,4);
	 Chair c;
	 ptr=&t;
	 ptr->setprice(100);
	 ptr=&c;
	 ptr->setprice(200);
	 t.show();
	 c.setcolor("brown");
	 c.show();
	 return 0;
}
