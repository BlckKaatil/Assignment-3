#include <iostream>
using namespace std;

class Date {
    int day, month, year;
public:
    Date(int d, int m, int y) {
        day = d; month = m; year = y;
    }

    bool operator==(Date d) {
        return (day == d.day && month == d.month && year == d.year);
    }
};
