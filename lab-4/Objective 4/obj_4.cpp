// Constructor overloading

#include<iostream>
using namespace std;

class dist {
    int k, m;
    public:
        dist() {}

        dist(int a) {
            k = a; m = 0;
        }
        
        dist(int a, int b) {
            k = a; m = b;
        }

        dist add(dist a) {
            dist b;
            b.k = k + a.k;
            b.m = m + a.m;
            return (b);
        }

        void display() {
            cout << "\nKm=" << k << "\nMeter=" << m;
        }
};

int main() {
    dist A(2), B(2, 200), C;

    C = A.add(B);

    C.display(); // afai thapeko, to get output

    return 0;
}