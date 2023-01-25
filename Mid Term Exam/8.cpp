/*
Design a class to represent a bank account with data members name, account number, account type, and balance
and functions to assign initial values, to deposit an amount, to withdraw an amount after checking balance,
and to display name and balance
*/

#include<iostream>
using namespace std;

class Account {
    string name, accountType; // can do with char name[<length>] too ;)
    int accountNumber;
    double balance;

    public:
        Account(string accName, string accType, int accNum, double bal) {
            name = accName;
            accountType = accType;
            accountNumber = accNum;
            balance = bal;

            cout << "Created a new account with below details:" << endl;
            display();
        }

        void display() {
            cout << "Account Name: " << name << endl;
            cout << "Balance: Rs." << balance << endl;
            // extras than in the question, cuz I'm khatraaa
            cout << "Account Number: " << accountNumber << endl;
            cout << "Account Type: " << accountType << endl;
        }

        void deposit(double amt) {
            balance += amt;
            cout << "Successfully deposited Rs." << amt << endl;
        }

        void withdraw(double amt) {
            // checking if the object has sufficient balance, then withdrawing
            if (balance >= amt) { // assuming the user can withdraw all the amt they have in their bank account
                balance -= amt;
                cout << "Successfully withdrew Rs." << amt << endl;
            } else {
                cout << "Sorry, not enough balance in your account!";
            }
        }
};

int main() {
    bool status=true;
    int choice;
    double amount;


    Account account("Mansij Maharjan", "Saving", 69696969, 100);

    while (status) {
        cout << "\nWhat do you want to do:\n1. Check balance\n2. Deposit\n3. Withdraw\n4. Exit" << endl;
        cout << "> ";
        cin >> choice;

        switch (choice) {
            case 1:
                account.display();
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;
            
            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;

            case 4:
                status = false;
                break;

            default:
                cout << "Invalid Input!";
                break;
        }
    }

    return 0;
}