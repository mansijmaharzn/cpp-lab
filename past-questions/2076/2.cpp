/*
Write programs to add two object of distance class with data members feet and inch
by using member functionand friend function.
*/
#include<iostream>
using namespace std;

class Distance {
    int feet;
    int inch;

    public:
        Distance() {
            feet = 0;
            inch = 0;
        }
        Distance(int f, int i) {
            feet = f;
            inch = i;
        }

        // Member function to add two Distance objects
        void add(Distance d) {
            int f = feet + d.feet;
            int i = inch + d.inch;
            if (i >= 12) {
                f += 1;
                i -= 12;
            }
            cout << "Sum of distances: " << f << " feet " << i << " inches" << endl;
        }

        // Declare the friend function
        friend void add(Distance d1, Distance d2);
};


// Define the friend function
void add(Distance d1, Distance d2) {
    int f = d1.feet + d2.feet;
    int i = d1.inch + d2.inch;
    if (i >= 12) {
        f += 1;
        i -= 12;
    }
    cout << "Sum of distances: " << f << " feet " << i << " inches" << endl;
}


int main() {
    Distance d1(5, 10);
    Distance d2(4, 6);

    d1.add(d2); // calling member function
    add(d1, d2); // calling friend function

    return 0;
}