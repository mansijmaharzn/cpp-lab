// Binary operator overloading
// add two vector objects
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
        vector operator +(vector a) {
            vector x;
            x.i = i + a.i;
            x.j = j + a.j;
            x.k = k + a.k;

            return (x);
        }
        void display() {
            cout << "i=" << i << "\tj=" << j << "\tk=" << k;
        }
};

int main() {
    vector v1(1, 2, 3), v2(1, 2, 3), v3;

    v3 = v1 + v2;

    v3.display();

    return 0;
}