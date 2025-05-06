#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() {
        cout << "Vehicle starts" << endl;
    }
};

class Car : public Vehicle {
public:
    void carFeature() {
        cout << "Car has AC" << endl;
    }
};

class Bike : public Vehicle {
public:
    void bikeFeature() {
        cout << "Bike has disc brake" << endl;
    }
};
