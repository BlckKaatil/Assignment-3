#include <iostream>
using namespace std;

class Library {
private:
    int privateBookID;

protected:
    string protectedSection;

public:
    string publicName;

    Library() {
        privateBookID = 1;
        protectedSection = "Reference";
        publicName = "City Library";
    }

    void showPrivate() {
        cout << "Book ID: " << privateBookID << endl;
    }
};
