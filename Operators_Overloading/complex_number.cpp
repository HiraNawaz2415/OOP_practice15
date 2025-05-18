// 2415..
//Overloading stream insertion and extraction operator for complex number class......
#include <iostream>
using namespace std;
class Complex
{

private:
    int real, imag;
public:
    Complex():real(0),imag(0) {}
  friend ostream & operator << (ostream &output, const Complex &c);
   friend istream & operator >> (istream &input, Complex &c);
};
ostream & operator << (ostream &output, const Complex &c)
{
    if(c.imag>0)
    output<< c.real<< "+" << c.imag << "i"<<endl;
    else   
    output<< c.real<< c.imag << "i"<<endl;
    return output;
}
 
istream & operator >> (istream &input,  Complex &c)
{
    cout << "Enter Real Part ";
    input>> c.real;
    cout << "Enter Imaginary Part ";
    input >> c.imag;
    return input;
}
int main()
{
   Complex c1;
   cout<<"Entrer complex number...."<<endl;
   cin >> c1;
   cout << "The complex number is ";
   cout << c1;
   return 0;
}
