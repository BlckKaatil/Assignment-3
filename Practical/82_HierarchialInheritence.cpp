#include <iostream>
using namespace std;

class Base {
public:
    void baseFunction() {
        cout << "Base function" << endl;
    }
};

class Derived1 : public Base {
public:
    void d1() {
        cout << "Derived1 class" << endl;
    }
};

class Derived2 : public Base {
public:
    void d2() {
        cout << "Derived2 class" << endl;
    }
};

class Derived3 : public Base {
public:
    void d3() {
        cout << "Derived3 class" << endl;
    }
};
