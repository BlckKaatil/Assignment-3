#include <iostream>
using namespace std;

class Parent1 {
public:
    void show1() {
        cout << "Parent1 function" << endl;
    }
};

class Parent2 {
public:
    void show2() {
        cout << "Parent2 function" << endl;
    }
};

class Child : public Parent1, public Parent2 {
public:
    void display() {
        cout << "Child from both parents" << endl;
    }
};
