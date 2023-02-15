/*
Find the complex number with greater modulus from two input complex numbers
NOTE: changed modulus from modules, becz didnt find the meaning of modules of complex numbers
        in google
*/

#include<iostream>
#include<cmath>
using namespace std;

class Complex {
    int r, i;
    public:
        Complex(int re=0, int im=0) : r(re), i(im) {}

        int getR() { return r; }
        int getI() { return i; }

        Complex &greaterModulus(Complex &C2) {
            double z1, z2;

            z1 = sqrt((r*r)+(i*i));
            z2 = sqrt((C2.getR()*C2.getR())+(C2.getI()*C2.getI()));

            if (z1 < z2)
                return C2;
            
            return *this;
        }

        void display() {
            cout << r << " + i" << i;
        }
};

int main() {
    Complex C1(5, 9), C2(2, 3); // sqrt(106), sqrt(13)

    Complex greater = C1.greaterModulus(C2);

    cout << "Complex Number with greater modulus: ";
    greater.display();

    return 0;
}