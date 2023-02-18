/*
WAP to print
1
2 3
4 5 6
7 8 9 10
*/

#include<iostream>
using namespace std;

int main() {
    int i, j, n=1;
    int row=4, column=4;

    for (i=1; i<=row; i++) {
        for (j=1; j<=i; j++) {
            cout << n << " ";
            n++;
        }
        cout << "\n";
    }

    return 0;
}