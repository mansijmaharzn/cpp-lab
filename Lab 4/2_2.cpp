/*
WAP to generate fibonacci series upt n term
*/

// 0 1 1 2 3 5 8 13

#include<iostream>
using namespace std;

class Fibo {
    int n, first, second, next;

    public:
        Fibo() {
            first = 0;
            second = 1;
            // next = first + second;
        }


        void getN() {
            cout << "Enter n: ";
            cin >> n;
        }

        ~Fibo() {
            cout << first << ", " << second;
            for (int i=0; i<n-2; i++) { // -2 cuz hamile pailai duita print garisakyo
                next = first + second;
                cout << ", " << next;
                first = second;
                second = next;
            }
        }

};

int main() {
    Fibo fibo;

    fibo.getN();

    return 0;
}