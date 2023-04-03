// Write a program to show the destructor call such that it prints the message “memory is released”.
#include<iostream>
using namespace std;

class MyClass {
    public:
        MyClass() {
            cout << "Memory Occupied!" << endl;
        }

        ~MyClass() {
            cout << "Memory Released!" << endl;
        }
};

int main() {
    MyClass obj;

    return 0;
}