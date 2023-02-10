// WAP to add two time object using operator overloading with friend function
#include<iostream>
using namespace std;

class Time {
    int hr, min, sec;
    public:
        Time() {}
        Time(int h, int m, int s) {
            hr=h; min=m; sec=s;
        }
        void display() {
            cout << hr << " : " << min << " : " << sec;
        }

        friend Time operator +(Time, Time);
};

Time operator +(Time t1, Time t2) {
    Time t3;

    t3.sec = t1.sec + t2.sec;
    t3.min = t3.sec / 60;
    t3.sec = t3.sec % 60;
    t3.min = t3.min + t1.min + t2.min;
    t3.hr = t3.min / 60;
    t3.min = t3.min % 60;
    t3.hr = t3.hr + t1.hr + t2.hr;

    return t3;
}

int main() {
    Time t1(1, 59, 60), t2(3, 0, 0), t3;

    t3 = t1 + t2;

    t3.display();

    return 0;
}