/*
WAP to add two complex numbers
*/

#include<iostream>
using namespace std;

class Complex {
    int r, i;
    public:
        Complex() {
            r = i = 0;
        }
        Complex(int a, int b) {
            r = a; i = b;
        }

        Complex operator +(Complex C1) {  
            Complex res; // result object of complex class  
    
            // adding real part of complex numbers  
            res.r = r + C1.r;  
    
            // adding Imaginary part of complex numbers  
            res.i = i + C1.i;  
    
            // returning the sum  
            return res;  
        }

        void display() {
            cout << "Real: " << r << "\nImaginary: " << i;
        }
};

int main() {
    Complex a(1, 2), b(2, 1), c;

    c = a + b;

    c.display();

    return 0;
}