#include <iostream>
#include <fstream>
using namespace std;

class FileHandler {
    fstream file;
public:
    FileHandler(string filename) {
        file.open(filename, ios::out);
    }

    ~FileHandler() {
        file.close();
        cout << "File closed." << endl;
    }
};
