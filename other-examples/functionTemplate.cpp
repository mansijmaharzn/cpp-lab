#include<iostream>
using namespace std;

template<class T> // T supports any type of datatype
void show(T a, T b) {
    cout << "a: " << a << "\tb: " << b << endl;
}

int main() {
    int p=10, q=20;
    char m='a', n='b';
    float x=0.5, y=5.5;

    show(p, q);
    show(m, n);
    show(x, y);

    return 0;
}