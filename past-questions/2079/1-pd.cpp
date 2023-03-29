/*
Create a class author with attributes name and qualification.
Also create a class publication with pname.
From these classes derive a classes derive a class book having
attributes title and price.
Each of the three classes should have getdata() method to get their data from user.
The classes should have putdata() method to display the data.
Create instance of the class book in main.
*/

/*
Aggregation:
    Aggregation in C++ (commonly called as a has-a relationship), is a process in which
    one class defines a second class as an entity reference. It is a method of reusability
    of classes. In the simplest possible terms, it is when a class has an object of the other class.
*/

// if added putdata in every class
#include<iostream>
using namespace std;

class author {
    public:
        char name[20], qualification[20];

        void getdata() {
            cout << "\nEnter Author Name: ";
            cin >> name;

            cout << "Enter Author Qualification: ";
            cin >> qualification;
        }

        void putdata() {
            cout << "Author Name: " << name;
            cout << "\nAuthor Qualification: " << qualification;
        }
};

class publication {
    public:
        char pname[20];

        void getdata() {
            cout << "Enter Publication Name: ";
            cin >> pname;
        }

        void putdata() {
            cout << "\nPublication Name: " << pname;
        }
};


class book: public author, public publication {
    public:
        char title[20];
        float price;

        void getdata() {
            cout << "Enter Book Title: ";
            cin >> title;

            cout << "Enter Book price: ";
            cin >> price;
        }

        void putdata(){
            cout << "\nBook Name: " << title;
            cout << "\nBook Price: Rs." << price;
        }
};


int main() {
    // Created an object of class book
    book obj;

    // read the data for each class by scope resolution
    obj.author::getdata();
    obj.publication::getdata();

    // read the data for class book itself
    obj.getdata();

    // display result of each class by scope resolution
    obj.author::putdata();
    obj.publication::putdata();
    // display result of the class book
    obj.putdata();

    return 0;
}