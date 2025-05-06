#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    void setDimensions(float l, float w) {
        length = l;
        width = w;
    }

    float getArea() {
        return length * width;
    }

    float getPerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rect;

    rect.setDimensions(5.0, 3.0);

    cout << "Area: " << rect.getArea() << endl;
    cout << "Perimeter: " << rect.getPerimeter() << endl;

    return 0;
}
