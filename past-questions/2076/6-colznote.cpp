/*
6. What is meant by return by reference? How can we return values by reference by using reference
variable? Illustrate with examples. (was not there in hamrocsit.com)
*/
#include<iostream>
using namespace std;

int& get_larger(int& a, int& b) {
    // cout << &a << " " << &b << endl;
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int x = 5;
    int y = 10;
    
    int& larger = get_larger(x, y);

    // cout << larger << endl; // 10
    // cout << &larger;

    larger = 20; // setting larger to 20
    
    cout << "x: " << x << endl; // Output: x: 5
    cout << "y: " << y << endl; // Output: y: 20
    
    return 0;
}