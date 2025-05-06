#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal eats" << endl;
    }
};

class Mammal : virtual public Animal {};
class Bird : virtual public Animal {};

class Bat : public Mammal, public Bird {};
