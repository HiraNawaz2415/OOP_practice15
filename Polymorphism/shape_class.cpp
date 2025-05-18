// 2415
#include <iostream>
#include <cmath>  // for M_PI
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual void calculateArea() = 0;
};

// Circle class
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) {
        radius = r;
    }

    void calculateArea() override {
        double area = M_PI * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }
};

// Rectangle class
class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    void calculateArea() override {
        double area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }
};

// Triangle class
class Triangle : public Shape {
private:
    double base, height;
public:
    Triangle(double b, double h) {
        base = b;
        height = h;
    }

    void calculateArea() override {
        double area = 0.5 * base * height;
        cout << "Area of Triangle: " << area << endl;
    }
};

int main() {
    Shape* s1 = new Circle(5);
    Shape* s2 = new Rectangle(4, 6);
    Shape* s3 = new Triangle(3, 7);

    s1->calculateArea();  // Area of Circle
    s2->calculateArea();  // Area of Rectangle
    s3->calculateArea();  // Area of Triangle

    // Clean up
    delete s1;
    delete s2;
    delete s3;

    return 0;
}
