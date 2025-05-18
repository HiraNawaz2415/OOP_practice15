//2415.
//past paper
#include<iostream>
using namespace std;
class Time
{
	int hrs,min,sec;
	public:
		Time()
		{
			hrs=min=sec=0;
		}
		Time(int h,int m,int s)
		{
			hrs=h;
			min=m;
			sec=s;
		}
		Time(const Time &t)//copy constructor
		{
			hrs=t.hrs;
			min=t.min;
			sec=t.sec;
		}
		void inc_time()
		{
			sec++;
			if(sec==60)
			{
				min++;
				sec=0;
			}
			if(min==60)
			{
				hrs++;
				min=0;
			}
		}
		bool operator==(Time t1)
		{
			if(hrs==t1.hrs&&min==t1.min&&sec==t1.sec)
			return true;
			else
			return false;
		}
		void show()
		{
			cout<<"hh:mm:ss"<<endl;
			cout<<hrs<<":"<<min<<":"<<sec<<endl;
		}
};
int main()
{
	Time T1(1,44,30),T2(1,5,15);
	cout<<"Time 1....."<<endl;
	T1.show();
	cout<<"Time 2...."<<endl;
	T2.show();
	cout<<"After incrementing fun()."<<endl;
 T1.inc_time();
 cout<<"Time 1....."<<endl;
 T1.show();
 T2.inc_time();
 cout<<"Time 2...."<<endl;
 T2.show();
	T1=T2;//copy object it will call copy constructor
	cout<<"After copying time 1...."<<endl;
		T1.show();
	if(T1==T2)
	cout<<"Both times are equal";
	else
	cout<<"Both times are different";
	return 0;
}
