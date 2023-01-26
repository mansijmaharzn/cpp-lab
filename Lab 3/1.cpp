/*
WAP to create a class shape with function to find the area of the shape and display
the name of the shapes and other essential components of class. Create derived classes
circle, rectangle and trapezoid, each having overwriting functions area and display.
*/

#include<iostream>
using namespace std;

class Shape {
    protected:
        double circle, rectangle, trapezoid;

    public:
        void findarea() {
            cout << "Finds area." << endl;
        }

        void display() {
            cout << "Area of circle: " << circle << endl;
            cout << "Area of rectangle: " << rectangle << endl;
            cout << "Area of trapezoid: " << trapezoid << endl;
        }
};

class Circle : public Shape {
    public:
        void findarea(double radius) {
            circle = 3.14 * radius * radius;
        }

        void display() {
            cout << "Area of circle: " << circle << endl;
        }
};

class Rectangle : public Shape {
    public:
        void findarea(double length, double breadth) {
            rectangle = length * breadth;
        }

        void display() {
            cout << "Area of rectangle: " << rectangle << endl;
        }
};
class Trapezoid : public Shape {
    public:
        void findarea(double b1, double b2, double h) {
            trapezoid = (b1+b2) * h/2;
        }

        void display() {
            cout << "Area of trapezoid: " << trapezoid << endl;
        }
};


int main() {
    Circle circle;
    Rectangle rectangle;
    Trapezoid trapezoid;

    circle.findarea(3.5);
    circle.display();

    rectangle.findarea(3.5, 1.5);
    rectangle.display();
    
    trapezoid.findarea(12, 13.5, 6.8);
    trapezoid.display();

    // trapezoid.Shape::display(); // idk yesle k print garya yesto

    return 0;
}