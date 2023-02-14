// Convert Nepalese currency into US Currency
#include<iostream>
using namespace std;

class USD {
    double usd;
    public:
        USD(double d = 0) : usd(d) {}

        void display() {
            cout << "US Currency: $" << usd << endl;
        }
};

class NPR {
    double npr;
    public:
        NPR(double n = 0) : npr(n) {}

        void display() {
            cout << "Nepalese Currency: Rs." << npr << endl;
        }

        operator USD() {
            double usd = npr * 0.0076;

            USD tusd(usd);

            return tusd;
        }
};

int main() {
    USD usd;
    NPR npr(1400.0);

    usd = npr;

    usd.display();
    npr.display();

    return 0;
}