// Copy Constructor
#include<iostream>
using namespace std;

class code {
    int id;
    public:
        code() {}

        code(int a) {
            id = a;
        }

        code(code &x) { // copy constructor
            id = x.id; // copy in the value
        }

        void display() {
            cout << id;
        }
};

int main() {
    code a(100);
    code b(a);
    code c = a;
    code d;
    d = a;

    cout << "\nid of a is ";
    a.display();
    cout << "\nid of b is ";
    b.display();
    cout << "\nid of c is ";
    c.display();
    cout << "\nid of d is ";
    d.display();

    return 0;
}