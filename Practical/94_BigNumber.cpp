#include <iostream>
#include <string>
using namespace std;

class BigNumber {
    string number;

public:
    BigNumber(string num) { number = num; }

    BigNumber add(BigNumber b) {
        string a = number, c = b.number;
        string result = "";
        int carry = 0;

        while (a.length() < c.length()) a = "0" + a;
        while (c.length() < a.length()) c = "0" + c;

        for (int i = a.length() - 1; i >= 0; i--) {
            int sum = (a[i] - '0') + (c[i] - '0') + carry;
            carry = sum / 10;
            result = char(sum % 10 + '0') + result;
        }

        if (carry) result = "1" + result;
        return BigNumber(result);
    }

    void display() {
        cout << number << endl;
    }
};
