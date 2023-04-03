// How can we use it for name conflict resolution? Illustrate with example.
#include<iostream>
using namespace std;

class MyClass {
    int x;
    public:
        void setX(int x) {
            this->x = x; // using this pointer to refer to the member variable
        }
        
        void printX(int x) {
            cout << "Local x = " << x << endl; // printing the local variable
            cout << "Member x = " << this->x << endl; // using this pointer to refer to the member variable
        }
};

int main() {
    MyClass obj;
    obj.setX(42);
    obj.printX(99);
    return 0;
}