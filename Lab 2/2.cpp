/*
Convert the following into meters
a. 6km
b. 8km 100m
c. 1km 20m 60cm
*/

#include<iostream>
using namespace std;

double convert(double kilometer, double meter, double centimeter) {
    meter += (kilometer * 1000);
    meter += (centimeter/100);

    return meter;
}

int main() {
    double kilometer, meter, centimeter, result;

    cout << "Enter 0 if there is no value." << endl;
    cout << "Enter the values for km m cm" << endl;

    cin >> kilometer >> meter >> centimeter;

    result = convert(kilometer, meter, centimeter);

    cout << "In meter: " << result;

    return 0;
}