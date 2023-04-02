/*
Write a suitable program that demonstrates the technique of overloading the copy constructor.
*/
#include<iostream>
using namespace std;
class Area{
    float area;
    public:
        Area() {} // 1
        Area(double r) { // 2
            area=3.14*r*r;
        }
        Area(Area &i) { // 3
            area = i.area;
        }
        Area(Area &i, bool add) { //4
            if (add)
                area = i.area + 5;
        }

        void display() {
            cout << area << endl;
        }
};

int main(){
    Area obj1(1.2), obj2; // second and first construtor respectively
    obj1.display();

    obj2=obj1; // third construtor
    obj2.display();

    Area obj3(obj1, true); // fourth construtor
    obj3.display();

    return 0;
}