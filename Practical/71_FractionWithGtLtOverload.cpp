#include <iostream>
using namespace std;

class Fraction {
    int num, den;
public:
    friend istream& operator>>(istream &in, Fraction &f) {
        in >> f.num >> f.den;
        return in;
    }

    friend ostream& operator<<(ostream &out, Fraction f) {
        out << f.num << "/" << f.den;
        return out;
    }
};
