#include <iostream>
using namespace std;

class Distance {
    int meters;
public:
    Distance(int m) {
        meters = m;
    }

    friend Distance add(Distance d1, Distance d2);
    void show() {
        cout << meters << " meters" << endl;
    }
};

Distance add(Distance d1, Distance d2) {
    return Distance(d1.meters + d2.meters);
}
