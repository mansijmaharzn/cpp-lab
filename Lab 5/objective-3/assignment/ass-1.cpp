/*
WAP to overload unary operator using friend function
*/
#include<iostream>
using namespace std;

class UnaryFriend {
    int a;
    public:
        UnaryFriend(int num) {
            a = num;
        }
        void show() {
            cout << "a: " << a << endl;
        }
        void friend operator-(UnaryFriend &x);
};

void operator-(UnaryFriend &x) {
    x.a = -x.a;
}

int main() {
    UnaryFriend x1(5);
    cout<<"Before Overloading\n";
    x1.show();
    cout<<"After Overloading \n";
    -x1;
    x1.show();

    return 0;
}