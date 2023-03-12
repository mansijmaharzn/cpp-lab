// operator overloading using friend function
#include <iostream>
using namespace std;

class Distance {
    int feet, inch;
        

    public:
        friend Distance operator+(Distance, Distance);
        void setDist() {
            cout << "Enter feet and inch: ";
            cin >> feet >> inch;
        }

        void getDist() {
            cout << feet << " " << inch;
        }
};

Distance operator+(Distance d1, Distance d2) {
    Distance temp;
    temp.feet = d1.feet + d2.feet;
    temp.inch = d1.inch + d2.inch;

    return temp;
}

int main() {
    Distance d1, d2, d3;
    
    d1.setDist();
    d2.setDist();

    d3 = d1+d2;

    d3.getDist();

    return 0;
}