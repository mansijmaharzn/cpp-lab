// Create a real scenario where static data members are useful. Explain with suitable example.
#include<iostream>
#include<cstring>
using namespace std;

class Student{
    int rollNo;
    char name[10];
    int marks;
    public:
        static int objectCount;
        Student() {
            objectCount++;
        }

        void getdata() {
            cout << "Enter roll number: " << endl;
            cin >> rollNo;
            cout << "Enter name: " << endl;
            cin >> name;
            cout << "Enter marks: " << endl;
            cin >> marks;
        }

        void putdata() {
            cout << "Roll Number = " << rollNo << endl;
            cout << "Name = " << name << endl;
            cout << "Marks = " << marks << endl;
            cout << endl;
        }
};

int Student::objectCount = 0; // initializing static var to 0

int main() {
    Student s1;
    s1.getdata();
    s1.putdata();
    Student s2;

    s2.getdata();
    s2.putdata();
    Student s3;

    s3.getdata();
    s3.putdata();
    cout << "Total objects created = " << Student::objectCount << endl; // <- getting static var with scope resolution

    return 0;
}