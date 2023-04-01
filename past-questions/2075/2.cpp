// Depict the difference between private and public derivation. Explain derived class constructor with suitable program.
// https://www.tutorialspoint.com/object_oriented_analysis_design/ooad_Principles_qa3.htm#:~:text=The%20public%20derivation%20of%20inheritance,of%20the%20base%20class%20privately.

#include <iostream>
using namespace std;

class Parent1 {
    public:
        Parent1() {
            cout << "Inside first base class" << endl;
        }
};

class Parent2 {
    public:
        Parent2() {
            cout << "Inside second base class" << endl;
        }
};

class Child : public Parent1, public Parent2 {
    public:
        Child() {
            cout << "Inside child class" << endl;
        }
};


int main() {
    Child obj1;

    return 0;
}