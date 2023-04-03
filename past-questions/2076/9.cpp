/*
Write a program that read values of two objects of student class(assume data members are sid,
sname, and level) and display the data in monitor.
*/
#include<iostream>
#include<fstream>
using namespace std;

class Student {
    int sid;
    char sname[30], level[30];
    public:
        void setData() {
            cout << "Enter id, name and level: ";
            cin >> sid >> sname >> level;
        }

        void getData() {
            cout << "\nID: " << sid;
            cout << "\nName: " << sname;
            cout << "\nLevel: " << level;
        }
};

class StudFile {
    public:
        void addStud(Student s) {
            ofstream outfile;
            /* opening in app mode becz we want to store 2 obj,
            if not opened in app mode the first obj will be replaced by second */
            outfile.open("students.txt", ios::app);
            outfile.write((char*)&s, sizeof(Student));
            outfile.close();
        }

        void getStud() {
            ifstream infile;
            infile.open("students.txt");
            Student sd;

            while (!infile.eof()) {
                infile.read((char*)&sd, sizeof(Student));
                if( infile.eof() ) break;
                sd.getData();
            }

            infile.close();
        }
};

int main() {
    StudFile sf;
    Student s1, s2;

    s1.setData();
    sf.addStud(s1);
    s2.setData();
    sf.addStud(s2);

    sf.getStud();

    return 0;
}