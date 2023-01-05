/*
WAP to find the root of a quadratic equation

This one is by Bahadur bhai
He names functions like passwords ;-;
*/
#include<iostream>
#include<math.h>
using namespace std;

int square_root(float a, float b, float c) {
    float sqp1;

    sqp1 = sqrt((b*b) - (4*a*c));

    return sqp1;
}

int plus1(float sqp1, float a, float b) {
    float root1;

    root1 = (b+sqp1)/2*a;

    return root1;
}

int minus1(float sqp1, float a, float b) {
    float root2;

    root2 = (b-sqp1)/2*a;

    return root2;
}

int main() {
    float sqp1, root1, root2, a, b, c;

    cout << "Enter value of a, b, and c: ";
    cin >> a >> b >> c;

    sqp1 = square_root(a, b, c);
    root1 = plus1(sqp1, a, b);
    root2 = minus1(sqp1, a, b);

    cout << "Two roots are: " << root1 << " and " << root2;

    return 0;
}