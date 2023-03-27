/*
Type Conversion
Write a program that converts object of another distance class with data members
feet and inch.(Assume 1m = 3.3 feet and 1cm = 0.4 inch)
*/

/*
NOTES:
1m == 100cm
Formula Material: https://byjus.com/maths/how-to-convert-cm-to-feet/#:~:text=To%20convert%20the%20value%20of,to%20get%20value%20in%20feet
*/

#include<iostream>
using namespace std;

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

        double getMeter() { return meter; }
        double getCenti() { return centi; }
};

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

        // MeterC = FeetI garda yo function trigger huncha
        FeetI(MeterC a) {
            double totalCenti = (100* (a.getMeter())) + a.getCenti();

            // formulas
            // didn't use double inorder to not get 4.9' 11.0551' :)
            int tinch = totalCenti / 2.54;
            feet = tinch / 12;

            inch = tinch - (12*4);
        }
};

int main() {
    MeterC mc(1, 50); // 1m 50cm == 150cm
    FeetI fi = mc;
    
    fi.display();

    return 0;
}

/*
OUTPUT:
4'11''
*/