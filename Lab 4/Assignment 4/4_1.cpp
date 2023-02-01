/*
WAP to add two time objects in the format HH:MM:SS. One time object should
be initialized through constructor and another time object should be given
by user.
*/

#include<iostream>
using namespace std;

class Time {
    int hr, min, sec;

    public:
        // constructor overloading wala objective ho so tie use garera gareko
        Time() {
            hr = 1; min = 59; sec = 60; // initialized 2hr
        }

        Time(int h, int m, int s) {
            hr = h; min = m; sec = s;
        }

        void display() {
            cout<<"["<<hr<<":"<<min<<":"<<sec<<"]";
        }

        void sum(Time &, Time &);
};

void Time :: sum(Time &obj1, Time &obj2) {
    sec = obj1.sec + obj2.sec;
    min = sec / 60;
    sec = sec % 60;
    min = min + obj1.min + obj2.min;
    hr = min / 60;
    min = min % 60;
    hr = hr + obj1.hr + obj2.hr;
}

int main() {
    int hr, min, sec;
    Time t1, t3;

    cout << "Enter 2nd time detail" << endl;
    cin >> hr >> min >> sec;

    Time t2(hr, min, sec);

    t3.sum(t1, t2);
    cout << "The sum of two times are" << endl;
    t3.display();

    return 0;
}

/*
Thaxa tmi harule malai yesko output ayena bhanxa
so:

Enter 2nd time detail
1 0 0
The sum of two times are
[3:0:0]
*/