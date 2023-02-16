/*
Create saving_account of customers with attribute name, address, account_no and balance
then perform the following operations
> Create a new account
> deposit money
> withdraw money
> show balance
*/

#include<iostream>
using namespace std;

class Account {
    char name[10], address[20];
    int accountNo;
    double balance;

    public:
        void setData() {
            cout << "Create an Account\nEnter name: ";
            cin >> name;
            cout << "Address: ";
            cin >> address;
            cout << "Account No.: ";
            cin >> accountNo;
        }

        void deposit(double amt) {
            balance += amt;
            cout << "Deposited Rs." << amt << endl;
        }

        void withdraw(double amt) {
            if (balance >= amt) {
                balance -= amt;
                cout << "Withdrew Rs." << amt << endl; 
            } else {
                cout << "Not enough balance!" << endl;
            }
        }

        void showBalance() {
            cout << "Available Balance: Rs." << balance;
        }
};

int main() {
    Account *acc;
    Account sac;
    double amt;

    acc = &sac;
    acc->setData();

    cout << "Enter amount to deposit: ";
    cin >> amt;
    acc->deposit(amt);

    cout << "Enter amount to withdraw: ";
    cin >> amt;
    acc->withdraw(amt);

    acc->showBalance();

    return 0;
}