/*
Create a class author with attributes name and qualification.
Also create a class publication with pname.
From these classes derive a classes derive a class book having
attributes title and price.
Each of the three classes should have getdata() method to get their data from user.
The classes should have putdata() method to display the data.
Create instance of the class book in main.
*/
#include<iostream>
using namespace std;


class author {
    char name[10], qualification[10];
    public:
        void getData() {
            cout << "Enter name and qualification: ";
            cin >> name >> qualification;
        }

        void putData() {
            cout << "Name: " << name << endl;
            cout << "Qualification: " << qualification << endl;
        }
};

class publication {
    char pname[10];
    public:
        void getData() {
            cout << "Enter pname: ";
            cin >> pname;
        }

        void putData() {
            cout << "P-Name: " << pname << endl;
        }
};

class book : public author, public publication {
    char title[10];
    double price;
    public:
        void getData() {
            cout << "Enter title and price: ";
            cin >> title >> price;
        }

        void putData() {
            cout << "Title: " << title << endl;
            cout << "Price: " << price << endl;
        }
};


int main() {
    book b;

    b.getData();

    return 0;
}