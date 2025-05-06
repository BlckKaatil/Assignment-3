#include <iostream>
using namespace std;

class Base {
public:
    void showBase() {
        cout << "Base class" << endl;
    }
};

class Intermediate : public Base {
public:
    void showIntermediate() {
        cout << "Intermediate class" << endl;
    }
};

class Derived : public Intermediate {
public:
    void showDerived() {
        cout << "Derived class" << endl;
    }
};
