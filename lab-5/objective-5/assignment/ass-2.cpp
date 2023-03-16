/*
Convert distance measured in feet and inch into distance measure in meter and centimeter
*/

#include<iostream>
#include<cmath>
using namespace std;

class FeetI {
    double feet, inch;
    public:
        FeetI(double f=0, double i=0) : feet(f), inch(i) {}

        double getFeet() {return feet;}

        double getInch() {return inch;}
};

class MeterC {
    double meter, centi;
    public:
        MeterC(double m=0, double c=0) : meter(m), centi(c) {}

        MeterC(FeetI a) {
            centi = ((a.getFeet() * 12) + a.getInch()) * 2.54;
            meter = centi / 100;

            double num = meter;
            double part1, part2;
            part2 = modf(num, &part1);
            meter = part1;
            centi = part2 * 100; // adding here '* 100' was the hardest part I've ever done in my life ;)
        }

        void display() {
            cout << "Meter: " << meter << endl;
            cout << "Centimeter: " << centi << endl;
        } 
};

int main() {
    MeterC mc;
    FeetI fi(5, 8);

    mc = fi;

    mc.display();

    return 0;
}