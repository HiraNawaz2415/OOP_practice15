/*Create an abstract class called Shape which contains a pure virtual function called 
find_vol() and a protected attribute named as volume. Create two new derived classes from the 
above class named as Cube and Sphere having double type attribute named as side and radius 
respectively. Implement dynamic polymorphism to find out volume of a cube and a sphere. 
*/
#include<iostream> 
using namespace std;
class Shape 
{ 
protected: 
double volume; 
public: 
virtual void find_vol()=0; 
}; 
class Cube: public Shape 
{ 
protected: 
double side; 
public: 
Cube()
{ 
cout<<"Enter side of the Cube::";
cin>>side; 
} 
void find_vol()
{
cout<<"Volume of Cube is: "<<side*side*side<<endl; 
} 
}; 
class Sphere: public Shape 
{ 
protected: 
double radius; 
public: 
Sphere()
{ 
cout<<"Enter radius of the sphere::";
cin>>radius; 
} 
 
void find_vol()
{ 
cout<<"Volume of sphere is: "<<(4/3)*3.14*radius*radius*radius; 
} 
}; 
int main() 
{ 
Shape *ptr; 
ptr=new Cube;
ptr->find_vol(); 
ptr=new Sphere; 
ptr->find_vol(); 
return 0;
}
