#include <iostream>
#include <map>
using namespace std;

class SparseMatrix {
    map<pair<int, int>, int> mat;

public:
    void set(int i, int j, int val) {
        if (val != 0) mat[{i, j}] = val;
    }

    SparseMatrix add(SparseMatrix &other) {
        SparseMatrix result = *this;
        for (auto &e : other.mat) result.mat[e.first] += e.second;
        return result;
    }

    void print() {
        for (auto &e : mat)
            cout << "(" << e.first.first << "," << e.first.second << ") = " << e.second << endl;
    }
};
