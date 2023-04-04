/*
Type Conversion
Write a program that converts object of another distance class with data members
feet and inch.(Assume 1m = 3.3 feet and 1cm = 0.4 inch)
*/

/*
NOTES:
1m == 100cm
This is done according to the formula provided in the question above, only the formula is different in this code
However, it didn't give a correct result somehow
*/

#include<iostream>
using namespace std;

// destination class
class FeetI {
    int feet, inch;
    public:
        FeetI(int f=0, int i=0) {
            feet=f; inch=i;
        }

        void display() {
            cout << feet << "'" << inch << "''" << endl;
        }
};

// source class
class MeterC {
    double meter, centi;
    public:
        MeterC(double m=0, double c=0) {
            meter=m; centi=c;
        }

        void display() {
            cout << meter << " meters and " << centi << " centimeter" << endl;
        }

        // MeterC = FeetI garda yo function trigger huncha
        operator FeetI() {
            double totalCenti = (100*meter) + centi;
            
            // formulas
            // didn't use double inorder to not get 4.9' 11.0551' :)
            /*
            int inch = totalCenti / 2.54;
            int feet = inch / 12;
            inch = inch - (12*4);
            */

            int feet = 3.3 * meter;
            int inch = 0.4 * centi;

            if (inch >= 12) {
                feet += 1;
                inch -= 12;
            }
    
            FeetI tfeetI(feet, inch);

            return tfeetI;
        }
};

int main() {
    MeterC mc(1, 50); // 1m 50cm == 150cm
    FeetI fi;

    fi = mc;

    fi.display();

    return 0;
}

/*
OUTPUT:
4'8''
*/