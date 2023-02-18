/*
WAP to calculate overtime pay of 10 employees. Overtime is paid at the rate of Rs 60.00 per hour
for every hour worked above 40 hours. Assume that employees do not work for fractional part of an hour.
*/
#include<iostream>
using namespace std;

int main() {
    int i, empNum=10, overTimeRate=60, normalWorkHr=40, workedHour, overTimeHr;
    double overtimeSalary;

    for (i=1; i<=empNum; i++) {
        cout << "Enter working hour of employee number " << i << ": ";
        cin >> workedHour;

        if (workedHour > normalWorkHr) {
            // did overtime
            overTimeHr = workedHour - normalWorkHr; // overtime gareko hour nikaleko, as the question says "calc overtime payment", so total worked time sita calc garne haina
            overtimeSalary = overTimeHr * overTimeRate;
            cout << "Overtime Pay for employee number " << i << ": " << overtimeSalary << endl;
        } else {
            cout << "Employee " << i << " didn't do overtime" << endl;
        }
    }

    return 0;
}