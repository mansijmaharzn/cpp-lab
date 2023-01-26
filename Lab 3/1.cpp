/*
WAP to create a class shape with function to find the area of the shape and display
the name of the shapes and other essential components of class. Create derived classes
circle, rectangle and trapezoid, each having overwriting functions area and display.
*/

#include<iostream>
using namespace std;

class Shape {
    public:
        virtual void findarea() {};
        virtual void display() {};
};

class Circle : public Shape {
    private:
        double area;
    public:
        void findarea(double radius) {
            area = 3.14 * radius * radius;
        }

        void display() {
            cout << "Area of circle: " << area << endl;
        }
};

class Rectangle : public Shape {
    private:
        double area;
    public:
        void findarea(double length, double breadth) {
            area = length * breadth;
        }

        void display() {
            cout << "Area of rectangle: " << area << endl;
        }
};
class Trapezoid : public Shape {
    private:
        double area;
    public:
        void findarea(double b1, double b2, double h) {
            area = (b1+b2) * h/2;
        }

        void display() {
            cout << "Area of trapezoid: " << area << endl;
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

    return 0;
}