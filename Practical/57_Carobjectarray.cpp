#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;

    void showDetails() {
        cout << "Brand:" << brand << endl;
        cout << "Model:" << model << endl;
        cout << "Year:" << year << endl;
    }
};

int main() {
    Car cars[3];

    cars[0].brand = "Toyota";
    cars[0].model = "Corolla";
    cars[0].year = 2015;

    cars[1].brand = "Honda";
    cars[1].model = "Civic";
    cars[1].year = 2018;

    cars[2].brand = "Ford";
    cars[2].model = "Focus";
    cars[2].year = 2020;

    cout << "Details:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Car " << i + 1 << endl;
        cars[i].showDetails();
    }

    return 0;
}
