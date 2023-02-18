/*
Convert the following into meters
a. 6km
b. 8km 100m
c. 1km 20m 60cm
*/

#include <iostream>
using namespace std;

// function to convert distance in km format to meters
double toMeters(double km) {
    return km * 1000;
}

// function to convert distance in km and m format to meters
double toMeters(double km, double m) {
    return (km * 1000) + m;
}

// function to convert distance in km, m and cm format to meters
double toMeters(double km, double m, double cm) {
    return (km * 1000) + m + (cm / 100);
}

int main() {
    cout << "6km in meters: " << toMeters(6) << endl;
    cout << "8km 100m in meters: " << toMeters(8, 100) << endl;
    cout << "1km 20m 60cm in meters: " << toMeters(1, 20, 60) << endl;
    return 0;
}