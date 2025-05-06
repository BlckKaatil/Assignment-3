#include <iostream>
using namespace std;

class Time {
    int hr, min;
public:
    Time(int h = 0, int m = 0) { hr = h; min = m; }

    Time add(Time t) {
        int m = min + t.min;
        int h = hr + t.hr + m / 60;
        m %= 60;
        return Time(h, m);
    }

    bool isEqual(Time t) {
        return (hr == t.hr && min == t.min);
    }

    void display() {
        cout << hr << "h " << min << "m" << endl;
    }
};
