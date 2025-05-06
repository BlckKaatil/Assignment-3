#include <iostream>
using namespace std;

class Base {
public:
    void baseFunction() {
        cout << "Base class" << endl;
    }
};

class Derived1 : virtual public Base {
public:
    void d1() {
        cout << "Derived1" << endl;
    }
};

class Derived2 : virtual public Base {
public:
    void d2() {
        cout << "Derived2" << endl;
    }
};

class Derived3 : public Derived1, public Derived2 {
public:
    void d3() {
        cout << "Derived3 (Hybrid)" << endl;
    }
};
