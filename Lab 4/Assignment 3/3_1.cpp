/*
Add two time objects in hh:mm:ss
*/

#include<iostream>
using namespace std;

class Time {
    int hr, min, sec;

    public:
        getTime() {
            cout << "Enter hour: ";
            cin >> hr;
            cout << "Enter minute: ";
            cin >> min;
            cout << "Enter second: ";
            cin >> sec;
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
    hr = hr+obj1.hr + obj2.hr;
}

int main() {
    Time t1, t2, t3;

    cout << "Enter 1st time detail" << endl;
    t1.getTime();
    cout << "Enter 2nd time detail" << endl;
    t2.getTime();

    t3.sum(t1, t2);
    cout << "The sum of two times are" << endl;
    t3.display();

    return 0;
}