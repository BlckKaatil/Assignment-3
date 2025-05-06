#include <iostream>
using namespace std;

class Logger {
public:
    ~Logger() {
        cout << "Logger destroyed. Logging out..." << endl;
    }
};
