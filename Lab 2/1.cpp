/*
WAP to convert time object into minutes using function overloading
a. 10hrs 45mins 30secs
b. 45min 23secs
c. 4hrs
*/

#include <iostream>
using namespace std;

// function to convert time in hh:mm:ss format to minutes
int toMinutes(int hours, int minutes, int seconds) {
    return (hours * 60) + minutes + (seconds / 60);
}

// function to convert time in mm:ss format to minutes
int toMinutes(int minutes, int seconds) {
    return minutes + (seconds / 60);
}

// function to convert time in hh format to minutes
int toMinutes(int hours) {
    return hours * 60;
}

int main() {
    cout << "10 hrs 45 mins 30 secs in minutes: " << toMinutes(10, 45, 30) << endl;
    cout << "45 mins 23 secs in minutes: " << toMinutes(45, 23) << endl;
    cout << "4 hrs in minutes: " << toMinutes(4) << endl;
    return 0;
}