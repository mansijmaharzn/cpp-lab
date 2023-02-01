/*
WAP to enter a complex number A, copy it into B then add and display the result
*/

#include<iostream>
using namespace std;

class Complex {  
    public:  
        int real, imaginary;

        Complex() {}

        // parameterized constructor
        Complex(int r, int i)  {  
            real = r;
            imaginary = i;
        }

        // Copy constructor
        Complex(const Complex& p1){
            real = p1.real;
            imaginary = p1.imaginary;
        }
    
        Complex addComplexNumber(Complex C1, Complex C2) {  
            Complex res; // result object of complex class  
    
            // adding real part of complex numbers  
            res.real = C1.real + C2.real;  
    
            // adding Imaginary part of complex numbers  
            res.imaginary = C1.imaginary + C2.imaginary;  
    
            // returning the sum  
            return res;  
        }  
};  
  
  
int main() {
    Complex A(4, 5);
    Complex B = A; // Copy constructor is called 
  
    Complex C; // for Storing the sum
  
    C = C.addComplexNumber(A, B);  
  
    // printing the sum
    cout << "Sum of complex number : " << C.real << " + i" << C.imaginary;

    return 0;
}