#include <iostream>
using namespace std;

class Account {
private:
    int balance;

public:
    void setBalance(int b) {
        balance = b;
    }

    int getBalance() {
        return balance;
    }
};
