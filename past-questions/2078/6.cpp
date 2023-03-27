// How can we pass arguments by reference by using reference variable? Illustrate with example
/*
Pass by reference:
    Pass by reference is something that C++ developers use to allow a function to modify a variable
    without having to create a copy of it. To pass a variable by reference, we have to declare function parameters
    as references and not normal variables.
*/

#include <iostream>
using namespace std;

void duplicate(int& b){
    b*=2;
}

int main() {
    int x = 25;

    cout << "The original value of x is " << x << endl;
    duplicate(x);
    cout << "The new value of x is " << x;

    return 0;
}