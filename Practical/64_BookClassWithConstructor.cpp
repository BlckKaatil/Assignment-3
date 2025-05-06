#include <iostream>
using namespace std;

class Book {
    string title;
    int pages;
public:
    Book(string t, int p) {
        title = t;
        pages = p;
    }

    void show() {
        cout << "Title: " << title << ", Pages: " << pages << endl;
    }
};
