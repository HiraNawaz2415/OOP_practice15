//2415
//past paper
#include<iostream>
using namespace std;
class Rational
{
	int num;
	int denum;
	public:
		Rational()
		{
			num=denum=0;
		}
		Rational(int n,int d)
		{
			num=n;
			denum=d;
		}
		void get()
		{
			try
			{
				cout<<"enter numenator::";
				cin>>num;
				cout<<"enter denumenator::";
				cin>>denum;
				if(denum==0)
				 throw"";
			}
			catch(...)//generalized catch block
			{
			cout<<"denum can't be  zero";
			exit(1);
			}
			}
			void print()
			{
				cout<<"Numenator is "<<num<<endl;
				cout<<"Denomenator is "<<denum<<endl;
				cout<<"num/denum..."<<num/denum<<endl;
			}
		
};
int main()
{
	Rational r1,r2(2,3);
	r1.get();
	cout<<"enter number for 2nd obj"<<endl;
	r2.get();
	cout<<"Rtaional no 1..."<<endl;
	r1.print();
	cout<<"Rtaional no 2..."<<endl;
	r2.print();
	return 0;
	
}
