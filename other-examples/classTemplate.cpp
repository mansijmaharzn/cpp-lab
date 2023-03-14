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
    show<char> obj('a', 'e'); // class_name<data_type> class_object
    
    obj.get();

    return 0;
}