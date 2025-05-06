#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Shape area" << endl;
    }
};

class Circle : public Shape {
public:
    void area() {
        cout << "Area of Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void area() {
        cout << "Area of Rectangle" << endl;
    }
};

class Triangle : public Shape {
public:
    void area() {
        cout << "Area of Triangle" << endl;
    }
};
