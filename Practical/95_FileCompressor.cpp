#include <iostream>
#include <fstream>
using namespace std;

class FileCompressor {
public:
    void compress(string filename) {
        cout << "Compressing " << filename << "..." << endl;
    }

    void decompress(string filename) {
        cout << "Decompressing " << filename << "..." << endl;
    }
};

