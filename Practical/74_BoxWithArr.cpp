#include <iostream>
using namespace std;

class Box {
    int length, width, height;
public:
    Box(int l, int w, int h) {
        length = l; width = w; height = h;
    }

    friend int volume(Box b);
};

int volume(Box b) {
    return b.length * b.width * b.height;
}
