#include <iostream>
using namespace std;

class Entity {
public:
    void show() {
        cout << "Entity" << endl;
    }
};

class Person : virtual public Entity {};
class Organization : virtual public Entity {};

class Company : public Person, public Organization {};
