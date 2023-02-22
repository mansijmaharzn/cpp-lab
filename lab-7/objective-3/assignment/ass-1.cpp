/*
WAP to enter name, roll and marks of 5 students using class
and store them into file.
Read and display the contents of file.
*/
#include<iostream>
#include<fstream>
using namespace std;

class Student {
    char name[20];
    int roll;
    double marks;
    public:
        void setStud() {
            cout << "Name: ";
            cin >> name;
            cout << "Roll: ";
            cin >> roll;
            cout << "Marks: ";
            cin >> marks;
        }

        void getStud() {
            cout << "Name: " << name << endl;
            cout << "Roll: " << roll << endl;
            cout << "Marks: " << marks << endl;
        }
};

int main() {
    Student stud[3]; // array of 5 Student objects
    fstream file;

    // getting student infos from the user
    file.open("students.txt", ios::out);
    for (int i=0; i<3; i++) {
        stud[i].setStud();
        file.write((char*)&stud[i], sizeof(stud[i]));
    }
    file.close();

    // getting student infos from the file
    file.open("students.txt", ios::in);
    for (int i=0; i<3; i++) {
        file.read((char*)&stud[i], sizeof(stud[i]));
        stud[i].getStud();
    }
    file.close();

    return 0;
}