// operator overloading example
#include <iostream>
using namespace std;

class Distance {
    int feet, inch;

    public:
        Distance operator+(Distance d1) {
            Distance temp;
            temp.feet = d1.feet + feet;
            temp.inch = d1.inch + inch;

            return temp;
        }
        void setDist() {
            cout << "Enter feet and inch: ";
            cin >> feet >> inch;
        }

        void getDist() {
            cout << feet << " " << inch;
        }
};

int main() {
    Distance d1, d2, d3;
    
    d1.setDist();
    d2.setDist();

    d3 = d1 + d2;

    d3.getDist();

    return 0;
}