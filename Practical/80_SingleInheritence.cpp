#include <iostream>
using namespace std;

class Person {
public:
    void info() {
        cout << "I am a person" << endl;
    }
};

class Employee : public Person {
public:
    void work() {
        cout << "I am an employee" << endl;
    }
};
