/*
Write a program for illustrating default constructor,
parameterized constructor and copy constructor.
*/

#include<iostream>
using namespace std;

class ConDes {
    int val;
    public:
        ConDes() { // default constructor
            val = 0;
        }

        ConDes(int v) { // parameterized constructor
            val = v;
        }

        ConDes(ConDes &v) { // copy constructor # NOTE: remember address operator
            val = v.val;
        }

        int getVal() {
            return val;
        }
};

int main() {
    ConDes c1, c3;
    ConDes c2(5);
    
    c3 = c2;

    cout << c1.getVal() << endl;
    cout << c2.getVal() << endl;
    cout << c3.getVal() << endl;

    return 0;
}