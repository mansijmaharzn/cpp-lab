// How can we use it for name conflict resolution? Illustrate with example.
#include <iostream>
using namespace std;

class Distance{
    float inch;

    public:
        void setValue(float inch){
            this->inch = inch;
        }

        void display(){
            cout << "Distance: " << inch;
        }
};

int main(){
    Distance d1;
    d1.setValue(10);
    d1.display();    
    return 0;
}