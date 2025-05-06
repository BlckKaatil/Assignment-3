#include <iostream>
using namespace std;

class Vector {
    int arr[5];
public:
    int& operator[](int index) {
        return arr[index];
    }
};
