/*
WAP to enter a complex number and display its negation using unary minus operator overloading
*/

#include<iostream>
using namespace std;

class Complex {
    int r, i;
    public:
        Complex() {
            r=0; i=0;
        }
        Complex(int a, int b)  {  
            r = a;
            i = b;
        }
        // operator overloading
        Complex operator -() {
            Complex a;
            a.r = -r;
            a.i = -i;

            return (a);
        }
        void display() {
            cout << "Real: " << r << "\nImaginary: " << i;
        }
};

int main() {
    Complex cum(4, 5), res;

    res = -cum;

    res.display();

    return 0;
}