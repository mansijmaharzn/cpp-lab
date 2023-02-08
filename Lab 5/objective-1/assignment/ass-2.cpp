/*
WAP to overload ++ increment operator
*/

// C++ program to demonstrate
// prefix increment operator overloading

#include <bits/stdc++.h>
using namespace std;

class Integer {
	int i;
    public:
        // Parameterised constructor
        Integer(int a) {
            i = a;
        }

        Integer operator++() {
            ++i;
        }

        void display() {
            cout << "i = " << i << endl;
        }
};

int main() {
	Integer i1(3);

	cout << "Before increment: ";
	i1.display();

	// Using the pre-increment operator
	Integer i2 = ++i1;

	cout << "After increment: " << endl;
	cout << "i1: ";
	i1.display();

    return 0;
}
