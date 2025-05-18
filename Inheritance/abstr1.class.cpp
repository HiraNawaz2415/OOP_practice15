//2415
// past paper
#include<iostream>
#include<string.h>
using namespace std;
class Publication//Abstract class
{
	private:
	string title;
	float price;
	public:
virtual void  getdata()
	 {
	 	cout<<"enter title::";
	 	cin>>title;
	 	cout<<"enter price::";
	 	cin>>price;
	 }
virtual void showdata()
	 {
	 	cout<<"Title is   "<<title<<endl;
	 	cout<<"Price is    "<<price<<endl;
	 }
	 virtual void Isoversize()=0;//pure virtual function
};
class  Book:public Publication//derived class
{
	int countpg;
	public:
	void getdata()
	{
		Publication::getdata();
		cout<<"Enter pages of book::";
		cin>>countpg;
	}
	void showdata()
	{
	   Publication::showdata();
		cout<<"Pages are   "<<countpg<<endl;
	}
	void Isoversize()
	{
		if(countpg>500)
		cout<<"Oversize pages...."<<endl;
	}
};
class Tape:public Publication//derived class
{
	float ptime;
	public:
	void getdata()
	{
		Publication::getdata();
		cout<<"enter playing time::";
		cin>>ptime;
	}
	void showdata()
	{
		
		Publication::showdata();
		cout<<"playing time is    "<<ptime<<endl;
	}
	void Isoversize()
	{
		if(ptime>90)
		cout<<"Oversize minutes...."<<endl;
	}
};
int main()
{
	Publication *ptr[5];
	int ch, i=0;
	char opt='Y';
	cout<<"Enter 1:for Book\n 2:for Tape"<<endl;
	while(opt=='Y'||opt=='y')
	{
		cout<<"enter which object you create::";
		cin>>ch;
		if(ch==1)
		{
			ptr[i]=new Book;
			ptr[i]->getdata();
			ptr[i]->showdata();
			ptr[i]->Isoversize();
		}
		else if(ch==2)
		{
			ptr[i]=new Tape;
			ptr[i]->getdata();
			ptr[i]->showdata();
			ptr[i]->Isoversize();
		}
		else
		cout<<"Invalid choice"<<endl;
		i++;
		cout<<"Do you continue  (Y/N)::";
		cin>>opt;
	}
	return 0;
	
}
