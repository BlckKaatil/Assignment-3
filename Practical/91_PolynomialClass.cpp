#include <iostream>
using namespace std;

class Polynomial {
    int coeff[3];  // ax^2 + bx + c

public:
    Polynomial(int a = 0, int b = 0, int c = 0) {
        coeff[0] = a; coeff[1] = b; coeff[2] = c;
    }

    Polynomial add(Polynomial p) {
        return Polynomial(coeff[0]+p.coeff[0], coeff[1]+p.coeff[1], coeff[2]+p.coeff[2]);
    }

    Polynomial multiply(Polynomial p) {
        int a = coeff[0]*p.coeff[0];
        int b = coeff[0]*p.coeff[1] + coeff[1]*p.coeff[0];
        int c = coeff[0]*p.coeff[2] + coeff[1]*p.coeff[1] + coeff[2]*p.coeff[0];
        return Polynomial(a, b, c);
    }

    void display() {
        cout << coeff[0] << "x^2 + " << coeff[1] << "x + " << coeff[2] << endl;
    }
};
