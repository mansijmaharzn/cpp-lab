/*
NOTE: This one is not in HAMROCSIT.COM, I GOT IT FROM COLLEGENOTE.NET
1. Write a program according to the specification given below:

-Create a class Teacher with data members tid & subject and member functions for reading and displaying data members.
-Create another class Staff with data members sid & position, and member function for reading and displaying data members.
-Derive a class Coordinator from Teacher and Staff and the class must have its own data member department and member functions for reading and displaying data members.
-Create two object of Coordinator class and read and display their details.
*/

#include<iostream>
using namespace std;

class Teacher {
    int tid;
    char subject[20];
    public:
        void getTeacher() {
            cout << "Enter Teacher ID and Subject: ";
            cin >> tid >> subject;
        }

        void displayTeacher() {
            cout << "Teacher ID: " << tid << endl;
            cout << "Subject: " << subject << endl;
        }
};

class Staff {
    int sid;
    char position[20];
    public:
        void getStaff() {
            cout << "Enter Staff ID and Position: ";
            cin >> sid >> position;
        }

        void displayStaff() {
            cout << "Staff ID: " << sid << endl;
            cout << "Position: " << position << endl;
        }
};

class Coordinator : public Teacher, public Staff {
    char department[20];
    public:
        void getCoordinator() {
            cout << "Enter Department: ";
            cin >> department;
        }

        void displayCoordinator() {
            cout << "Department: " << department << endl;
        }
};

int main() {
    Coordinator c1, c2;

    c1.getTeacher();
    c1.getStaff();
    c1.getCoordinator();
    c1.displayTeacher();
    c1.displayStaff();
    c1.displayCoordinator();

    c2.getTeacher();
    c2.getStaff();
    c2.getCoordinator();
    c2.displayTeacher();
    c2.displayStaff();
    c2.displayCoordinator();

    return 0;
}