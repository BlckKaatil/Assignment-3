#include <iostream>
using namespace std;

class DynamicArray {
    int *arr;
    int size;
public:
    DynamicArray(int s) {
        size = s;
        arr = new int[size];
    }

    ~DynamicArray() {
        delete[] arr;
        cout << "Memory deallocated." << endl;
    }
};
