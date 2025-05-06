#include <iostream>
using namespace std;

class Employee {
public:
    virtual void work() {
        cout << "Employee working" << endl;
    }
};

class Manager : public Employee {
public:
    void work() override {
        cout << "Manager managing" << endl;
    }
};
