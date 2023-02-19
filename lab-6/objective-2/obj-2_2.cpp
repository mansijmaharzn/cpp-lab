// Program to illustrate virtual basse class
#include<iostream>
using namespace std;

class A {protected: int a1; };

class B : public virtual A { protected: int a2; };

class C : public virtual A { protected: int a3; };

class D : public B, public C {
    int a4;
    public:
        void input() {
            cout << "Enter a1 a2 a3 and a4 values: ";
            cin >> a1 >> a2 >> a3 >> a4;
        }

        void show() {
            cout << "a1=" << a1 << "\na2=" << a2;
            cout << "\na3=" << a3 << "\na4=" << a4;
        }
};

int main() {
    D d;

    d.input();
    d.show();

    return 0;
}