#include <iostream>
using namespace std;

class Math {
public:
    static int add(int a, int b) {
        return a + b;
    }

    static int subtract(int a, int b) {
        return a - b;
    }

    static int multiply(int a, int b) {
        return a * b;
    }

    static float divide(int a, int b) {
        if (b == 0)
            return 0;
        return (float)a / b;
    }
};

int main() {
    int x = 10, y = 5;

    cout << "Add: " << Math::add(x, y) << endl;
    cout << "Subtract: " << Math::subtract(x, y) << endl;
    cout << "Multiply: " << Math::multiply(x, y) << endl;
    cout << "Divide: " << Math::divide(x, y) << endl;

    return 0;
}
