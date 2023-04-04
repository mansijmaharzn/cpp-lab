/*
What is the concept of friend function? How it violates the data hiding principle? Justify with example.
*/

#include<iostream>
using namespace std;

class MyClass {
    int x;

    public:
        MyClass(int val) {
            x = val;
        }

        friend void printX(MyClass obj); // Declaration of a friend function
};

void printX(MyClass obj) { // defination of a friend function
    cout << obj.x << endl; // Accessing private member x of MyClass
}

int main() {
    MyClass obj(10);
    printX(obj); // Output: 10

    return 0;
}