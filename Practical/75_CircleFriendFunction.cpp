#include <iostream>
using namespace std;

class Circle {
    float radius;
public:
    Circle(float r) {
        radius = r;
    }

    friend float area(Circle c);
};

float area(Circle c) {
    return 3.14 * c.radius * c.radius;
}
