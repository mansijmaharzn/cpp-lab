/*
How can you define a class that can implement stack with integer
as well as sack of strings? Illustrate with example.
*/

#include<iostream>
using namespace std;

template<class T>
class show {
    T a, b; // attributes with datatype T, T supports any datatype
    public:
        show(T p, T q) {
            a=p; b=q;
        }

        void get() {
            cout << "a: " << a << "\tb: " << b << endl;
        }
};

int main() {
    show<char> objC('a', 'e'); // class_name<data_type> class_object
    show<int> objI(1, 2);
    
    objC.get();
    objI.get();

    return 0;
}