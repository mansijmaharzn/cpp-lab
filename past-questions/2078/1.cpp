/*
Write a program according to the specification given below:

– Create a class Account with data members acc no, balance, and min_balance(static)
- Include methods for reading and displaying values of objects
– Define static member function to display min_balance
- Create array of objects to store data of 5 accounts and read and display values of each object
*/

// NOT SOLVED YET!!!

#include<iostream>
using namespace std;


class Account {
    int accNo, balance;
    public:
        static double minBalance;

        void getData() {
            cout << "Enter accNo, balance: ";
            cin >> accNo >> balance;
        }

        void putData() {
            cout << "Acc No: " << accNo << "\nBalance: " << balance << endl;
        }

        static void putMinBalance() {
            cout << "Minimum Balance: " << minBalance << endl;
        }
};


int main() {
    Account acc[5];

    for (int i=0; i<5; i++) {
        cout << "Enter for Account " << i+1 << endl;
        acc[i].getData();
    }

    for (int i=0; i<5; i++) {
        cout << "Detail of Account " << i+1 << endl;
        acc[i].putData();
    }

    return 0;
}