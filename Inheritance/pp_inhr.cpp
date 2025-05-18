// 2415
#include<iostream>
#include<string.h>
using namespace std;
class Person
{
	protected:
	string name;
	 void show()
	 {
	 	cout<<"Person name ::"<<name<<endl;
	 	}	
};
class Student: public Person
{
	 float cgpa;
	 public:
	  Student()
	  { 
	  cout<<"Enter name::";
	  cin>>name;
	  	cout<<"Enter cgpa::";
	  	cin>>cgpa;
	  }
	  Student(float cg,string n )
	  {
	   name=n;
	  	 cgpa=cg;
	  }
	  void show()
	  {
	     Person::show();
	  	cout<<"Cgpa is ::"<<cgpa<<endl;
	  }
};
int main()
{
	 Student s1(3.89,"Amina"),s2;
	 s1.show();
	 s2.show();

	 return 0;
	 
}
