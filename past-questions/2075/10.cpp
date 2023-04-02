/*
Create a function called swaps() that interchanges the values of the two arguments sent to it
(pass these arguments by reference).  Make the function into a template, so it can be used with
all numerical data types (char, int, float, and so on). Write a main() program to exercise the function
with several types.
*/

#include<iostream>
using namespace std;

template<class T>
void swaps(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int a=1, b=2;
    char i='m', j='a';
    float k=8.9, l=6.9;

    cout << "Before Swap" << endl;
    cout << "a: " << a << "\nb: " << b << endl;
    cout << "i: " << i << "\nj: " << j << endl;
    cout << "k: " << k << "\nl: " << l << endl;

    swaps(a, b);
    swaps(i, j);
    swaps(k, l);
    
    cout << "After Swap" << endl;
    cout << "a: " << a << "\nb: " << b << endl;
    cout << "i: " << i << "\nj: " << j << endl;
    cout << "k: " << k << "\nl: " << l << endl;

    return 0;
}