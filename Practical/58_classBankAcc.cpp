#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    float balance;

public:
    void setAccount(int accNum, float amount) {
        accountNumber = accNum;
        balance = amount;
    }

    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited: " << amount << endl;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    void withdraw(float amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn: " << amount << endl;
        } else {
            cout << "Cannot withdraw. Check amount or balance." << endl;
        }
    }

    void showDetails() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount myAccount;

    myAccount.setAccount(10101, 1500.0);

    myAccount.showDetails();

    myAccount.deposit(500);
    myAccount.withdraw(300);

    myAccount.showDetails();

    return 0;
}
