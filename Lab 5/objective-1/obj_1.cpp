// Unary operator overloading
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
        // operator overloading
        vector operator -() {
            vector a;
            a.i = -i;
            a.j = -j;
            a.k = -k;

            return (a);
        }
        void display() {
            cout << "i=" << i << "\tj=" << j << "\tk=" << k;
        }
};

int main() {
    vector v(1, 2, 3), a;

    a = -v; // operator overloading

    a.display();

    return 0;
}