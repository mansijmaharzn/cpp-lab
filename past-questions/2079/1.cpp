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
    public:

        string name, qualification;

        void getdata() {
            cout << "\nEnter Author Name           :   ";
            getline(cin, name);

            cout << "Enter Author Qualification  :   ";
            getline(cin, qualification);
        }
};

class publication {
    public:

        string pname;

        void getdata() {
            cout << "\nEnter Publication Name      :   ";
            getline(cin, pname);
        }
};


class book: public author, public publication {
    public:

        string title;
        float price;

        // Function overriding
        void getdata() {
            cout << "\nEnter Book Title            :   ";
            getline(cin, title);

            cout << "Enter Book price            :   ";
            cin >> price;
        }

        void putData(){
            cout << "\n\n========== BOOK INFO ==========" << endl;
            cout << "\nBook Author               :   " << name;
            cout << "\nBook Author Qualification :   " << qualification;

            cout << "\nBook Publication          :   " << pname;

            cout << "\nBook Name                 :   " << title;
            cout << "\nBook Price                :   Rs." << price;
        }
};


int main() {

    // Created an object of class book
    book obj;

    //read the data each class by scope resolution
    obj.author::getdata();
    obj.publication::getdata();

    obj.getdata();

    //display result
    obj.putData();

    return 0;
}