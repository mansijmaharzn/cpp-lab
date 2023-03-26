// Write a program for overloading comparision operator.
#include<iostream>
#include<cstring>
using namespace std;

class bike {
    char name[10];
    public:
        bike() {
            cout << "Enter Bike name: ";
            cin >> name;
        }

        bool operator ==(bike b2) {
            return strcmp(name, b2.name)==0;
        }
};


int main() {
    bike b1, b2;
    
    if (b1 == b2) {
        cout << "Both Bike names are same!";
    } else {
        cout << "Bike names are different!";
    }

    return 0;
}