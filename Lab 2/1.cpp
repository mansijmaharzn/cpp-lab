/*
WAP to convert time object into minutes using function overloading
a. 10hrs 45mins 30secs
b. 45min 23secs
c. 4hrs
*/

#include<iostream>
using namespace std;

double convert(double hours, double minutes, double seconds) {
    minutes += (hours * 60);
    minutes += (seconds/60);

    return minutes;
}

int main() {
    double hours, minutes, seconds, result;

    cout << "Enter 0 if there is no value." << endl;
    cout << "Enter the values for hr min sec" << endl;

    cin >> hours >> minutes >> seconds;

    result = convert(hours, minutes, seconds);

    cout << "In minutes: " << result;

    return 0;
}