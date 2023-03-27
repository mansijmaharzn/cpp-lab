// Explain the concept of default and default copy with suitable example
/*
Default Copy Constructor:
    When a copy constructor is not defined, the C++ compiler automatically supplies with its self-generated
    constructor that copies the values of the object to the new object.
Default Constructor:
    A Default Constructor is a constructor which has no arguments.
*/

#include<iostream>
using namespace std;

class Exam {
    double marks;
    public:
        // dafault constructor
        Exam() {
            marks = 40.5;
        }

        void getVal() {
            cout << "Enter marks: ";
            cin >> marks;
        }

        void display() {
            cout << "Marks: " << marks << endl;
        } 
};

int main() {
    // default constructor example
    Exam e1;
    e1.display();

    // default copy constructor example
    Exam e2;
    e2.getVal();

    Exam e3 = e2; // Exam e2(e1);
    e3.display();

    return 0;
}