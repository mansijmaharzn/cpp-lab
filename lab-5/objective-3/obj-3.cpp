/*
unary and binary operator overloading using friend function
Add two vector objects.
*/
#include<iostream>
using namespace std;

class vector {
    int i, j, k;
    public:
        vector() {
            i=0; j=0; k=0;
        }
        vector(int a, int b, int c) {
            i=a; j=b; k=c;
        }

        friend vector operator +(vector, vector);

        void display() {
            cout << "i=" << i << "\tj=" << j << "\tk=" << k;
        }
};

vector operator+(vector a, vector b) {
    vector c;

    c.i = a.i + b.i;
    c.j = a.j + b.j;
    c.k = a.k + b.k;

    return c;
}

int main() {
    vector v(1, 2, 3), a(3, 2, 1), b;

    b = v + a;

    b.display();

    return 0;
}