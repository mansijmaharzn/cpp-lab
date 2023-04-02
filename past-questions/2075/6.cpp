/* “An overloaded function appears to perform different activities depending the kind of data send to it”
Justify the statement with appropriate example.
*/
#include<iostream>
using namespace std;

int calc(int i, int j) {
    return i+j;
}

float calc(int i, float j) {
    return i*j;
}

int main() {
    int a=5, b=1;
    float x=8.1, y=6.8;

    cout << calc(a, b) << endl;
    cout << calc(a, x) << endl;

    return 0;
}