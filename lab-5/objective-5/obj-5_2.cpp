/*
5.2: Convert polar to rectangular coordinate (conversion function in destination class)
*/
#include<iostream>
#include<cmath>
using namespace std;

class pol {
    double r, a;
    public:
        pol() {}

        pol(double x, double y) {
            r=x; a=y;
        }

        double rad() {
            return r;
        }

        double ang() {
            return a;
        }
};

class rec {
    double x, y;
    public:
        rec() {
            x=0; y=0;
        }

        rec(pol a) {
            x = (a.rad()) * (cos(a.ang()));
            y = (a.rad()) * (sin(a.ang()));
        }

        void display() {
            cout << "\nx-coordinate=" << x;
            cout << "\ny-coordinate=" << y;
        }
};

int main() {
    rec re;
    pol pl(10.0, 0.785398);

    re = rec(pl);

    cout << "\nRectangle co-ordinate is:\t";

    re.display();

    return 0;
}