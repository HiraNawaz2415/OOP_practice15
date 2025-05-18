//2415.
//Overload stream insertion and extraction operator for time class....
#include<iostream>
using namespace std;
class Time
{
    int hr, min, sec;
    public:
    Time()//default constructor
    {
        hr=0, min=0; sec=0;
    }
    Time(int h, int m, int s)//parameterizd constructor
    {
        hr=h, min=m; sec=s;
    }
 // overloading '>>' operator
 friend istream& operator >> (istream &input ,Time &t);
   // overloading '<<' operator
friend ostream& operator << (ostream &output,Time &t); 
};
ostream& operator << (ostream &output,Time &t)
{
    output<< "Time is in hh:mm:ss" <<endl;
    output<< t.hr << " : " << t.min << "  : " << t.sec<<":";
    return output;
}
istream& operator >> (istream &input ,Time &t)
{
	cout<<"enter hour::";
	input>>t.hr;
	cout<<"enter minute::";
	input>>t.min;
	cout<<"enter second::";
	input>>t.sec;
	return input;
}
int main()
{
    Time t1(3,15,45);
    cout<<"enter time..."<<endl;
    cin>>t1;
    cout << t1;
    return 0;
}
