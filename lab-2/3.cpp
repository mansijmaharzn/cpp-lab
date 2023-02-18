/*
Construct an overloaded function equivalent to the 
pow(x,n) where x can be either integer or float and n is 
an integer.
*/
#include<iostream>
using namespace std;

double pow(int x, int n) {
    if (n < 0) {
        return pow(x, n+1)/x;
    } else {
        if (n==0)
            return 1;
        else
            return x * pow(x, n-1);
    }
}

double pow(float x, int n) {
    if (n < 0) {
        return pow(x, n+1)/x;
    } else {
        if (n==0)
            return 1;
        else
            return x * pow(x, n-1);
    }
}

int main() {
    cout << pow(2, -2) << endl;
    cout << pow(float(2.5), 2) << endl;

    return 0;
}