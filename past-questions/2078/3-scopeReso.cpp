/*
How can you remove this type of ambiguity? Explain with suitable example.
-> example using scope resolution operator
*/
#include<iostream>
using namespace std;
 
class A {
    public:
        void func() {
            cout << "I am in class A" << endl;
        }
};

class B {
    public:
        void func() {
            cout << "I am in class B" << endl;
        }
};
 
class C: public A, public B {};

int main() { 
    C c;
 
    // Calling function func() in class A
    c.A::func();
 
    // Calling function func() in class B
    c.B::func();
 
    return 0;
}