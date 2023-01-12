/*
Convert degree F into degree C using inline function
*/

#include <iostream>
using namespace std;
inline double convertToCel(double inTemp) {
   return (5.0/9.0) * (inTemp - 32.0);
}

int main() {
    int i;
    double fahren;

    cout << "Enter a Fahrenheit temperature: ";
    cin  >> fahren;

    cout << "The Celsius equivalent is " << convertToCel(fahren) << endl;

    return 0;
}