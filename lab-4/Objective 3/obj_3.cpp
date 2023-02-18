// vector multiply by scaler

#include<iostream>
using namespace std;

class vector {
    int i, j, k;
    public:
        vector() {
            i=0; j=0; k=0;
        }

        vector(int a, int b, int c) {
            i = a;
            j = b;
            k = c;
        }

        vector mul(int a) {
            vector b;
            b.i = a*k;
            b.j = a*j;
            b.k = a*k;
            
            return (b);
        }

        ~vector() {
            cout << "\ni=" << i << "\tj=" << j << "\tk=" << k;
        }
};

int main() {
    vector v(1, 2, 3);
    v.mul(2);

    return 0;
}